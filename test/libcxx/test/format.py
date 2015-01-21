import errno
import os
import re
import tempfile
import time

import lit.formats  # pylint: disable=import-error
import libcxx.test.benchmark as benchcxx

class LibcxxTestFormat(object):
    """
    Custom test format handler for use with the test format use by libc++.

    Tests fall into two categories:
      FOO.pass.cpp - Executable test which should compile, run, and exit with
                     code 0.
      FOO.fail.cpp - Negative test case which is expected to fail compilation.
    """

    def __init__(self, cxx, use_verify_for_fail, exec_env):
        self.cxx = cxx
        self.use_verify_for_fail = use_verify_for_fail
        self.exec_env = dict(exec_env)

    def getTestsInDirectory(self, testSuite, path_in_suite,
                            litConfig, localConfig):
        source_path = testSuite.getSourcePath(path_in_suite)
        for filename in os.listdir(source_path):
            # Ignore dot files and excluded tests.
            if (filename.startswith('.') or
                filename in localConfig.excludes):
                continue

            filepath = os.path.join(source_path, filename)
            if not os.path.isdir(filepath):
                if any([filepath.endswith(s) for s in localConfig.suffixes]):
                    yield lit.Test.Test(testSuite, path_in_suite + (filename,),
                                        localConfig)

    def execute(self, test, lit_config):
        while True:
            try:
                return self._execute(test, lit_config)
            except OSError as oe:
                if oe.errno != errno.ETXTBSY:
                    raise
                time.sleep(0.1)

    def _execute(self, test, lit_config):
        # Extract test metadata from the test file.
        requires = []
        unsupported = []
        use_verify = False
        with open(test.getSourcePath()) as f:
            for ln in f:
                if 'XFAIL:' in ln:
                    items = ln[ln.index('XFAIL:') + 6:].split(',')
                    test.xfails.extend([s.strip() for s in items])
                elif 'REQUIRES:' in ln:
                    items = ln[ln.index('REQUIRES:') + 9:].split(',')
                    requires.extend([s.strip() for s in items])
                elif 'UNSUPPORTED:' in ln:
                    items = ln[ln.index('UNSUPPORTED:') + 12:].split(',')
                    unsupported.extend([s.strip() for s in items])
                elif 'USE_VERIFY' in ln and self.use_verify_for_fail:
                    use_verify = True
                elif not ln.strip().startswith("//") and ln.strip():
                    # Stop at the first non-empty line that is not a C++
                    # comment.
                    break

        # Check that we have the required features.
        #
        # FIXME: For now, this is cribbed from lit.TestRunner, to avoid
        # introducing a dependency there. What we more ideally would like to do
        # is lift the "requires" handling to be a core lit framework feature.
        missing_required_features = [
            f for f in requires
            if f not in test.config.available_features
        ]
        if missing_required_features:
            return (lit.Test.UNSUPPORTED,
                    "Test requires the following features: %s" % (
                        ', '.join(missing_required_features),))

        unsupported_features = [f for f in unsupported
                                if f in test.config.available_features]
        if unsupported_features:
            return (lit.Test.UNSUPPORTED,
                    "Test is unsupported with the following features: %s" % (
                        ', '.join(unsupported_features),))

        # Evaluate the test.
        return self._evaluate_test(test, use_verify, lit_config)

    def _make_report(self, cmd, out, err, rc):  # pylint: disable=no-self-use
        report = "Command: %s\n" % cmd
        report += "Exit Code: %d\n" % rc
        if out:
            report += "Standard Output:\n--\n%s--\n" % out
        if err:
            report += "Standard Error:\n--\n%s--\n" % err
        report += '\n'
        return cmd, report, rc

    def _compile(self, output_path, source_path, use_verify=False):
        extra_flags = []
        if use_verify:
            extra_flags += ['-Xclang', '-verify']
        return self.cxx.compile(source_path, out=output_path, flags=extra_flags)

    def _link(self, exec_path, object_path):
        return self.cxx.link(object_path, out=exec_path)

    def _compile_and_link(self, exec_path, source_path):
        object_file = tempfile.NamedTemporaryFile(suffix=".o", delete=False)
        object_path = object_file.name
        object_file.close()
        try:
            cmd, out, err, rc = self.cxx.compile(source_path, out=object_path)
            if rc != 0:
                return cmd, out, err, rc
            return self.cxx.link(object_path, out=exec_path)
        finally:
            try:
                os.remove(object_path)
            except OSError:
                pass

    def _build(self, exec_path, source_path, compile_only=False,
               use_verify=False):
        if compile_only:
            cmd, out, err, rc = self._compile(exec_path, source_path,
                                              use_verify)
        else:
            assert not use_verify
            cmd, out, err, rc = self._compile_and_link(exec_path, source_path)
        return self._make_report(cmd, out, err, rc)

    def _clean(self, exec_path):  # pylint: disable=no-self-use
        try:
            os.remove(exec_path)
        except OSError:
            pass

    def _run_imp(self, exec_path, lit_config, in_dir=None, flags=[]):
        cmd = []
        if self.exec_env:
            cmd.append('env')
            cmd.extend('%s=%s' % (name, value)
                       for name, value in self.exec_env.items())
        cmd.append(exec_path)
        if lit_config.useValgrind:
            cmd = lit_config.valgrindArgs + cmd
        cmd = cmd + flags
        out, err, rc = lit.util.executeCommand(cmd, cwd=in_dir)
        return cmd, out, err, rc

    def _run(self, exec_path, lit_config, in_dir=None):
        cmd, out, err, rc = self._run_imp(exec_path, lit_config, in_dir=in_dir)
        return self._make_report(cmd, out, err, rc)

    def _evaluate_test(self, test, use_verify, lit_config):
        name = test.path_in_suite[-1]
        source_path = test.getSourcePath()
        source_dir = os.path.dirname(source_path)

        # Check what kind of test this is.
        assert name.endswith('.pass.cpp') or name.endswith('.fail.cpp')
        expected_compile_fail = name.endswith('.fail.cpp')

        # If this is a compile (failure) test, build it and check for failure.
        if expected_compile_fail:
            cmd, report, rc = self._build('/dev/null', source_path,
                                          compile_only=True,
                                          use_verify=use_verify)
            expected_rc = 0 if use_verify else 1
            if rc == expected_rc:
                return lit.Test.PASS, ""
            else:
                return (lit.Test.FAIL,
                        report + 'Expected compilation to fail!\n')
        else:
            exec_file = tempfile.NamedTemporaryFile(suffix="exe", delete=False)
            exec_path = exec_file.name
            exec_file.close()

            try:
                cmd, report, rc = self._build(exec_path, source_path)
                compile_cmd = cmd
                if rc != 0:
                    report += "Compilation failed unexpectedly!"
                    return lit.Test.FAIL, report

                cmd, report, rc = self._run(exec_path, lit_config,
                                            source_dir)
                if rc != 0:
                    report = "Compiled With: %s\n%s" % (compile_cmd, report)
                    report += "Compiled test failed unexpectedly!"
                    return lit.Test.FAIL, report
            finally:
                # Note that cleanup of exec_file happens in `_clean()`. If you
                # override this, cleanup is your reponsibility.
                self._clean(exec_path)
        return lit.Test.PASS, ""


class LibcxxBenchmarkFormat(LibcxxTestFormat):
    def __init__(self, other_results, allowed_difference, *args, **kwargs):
        super(LibcxxBenchmarkFormat, self).__init__(*args, **kwargs)
        self.other_results = other_results
        self.allowed_difference = allowed_difference

    def _evaluate_test(self, test, use_verify, lit_config):
        res = self._benchmark_test(test, lit_config)
        if not isinstance(res, lit.Test.Result):
            code, output = res
            res = lit.Test.Result(code, output)
        if not res.code == lit.Test.PASS:
            return res
        full_name = test.getFullName()
        if self.other_results:
            diff_metrics, failing_bench = self._process_results(test, res, lit_config)
            res.addMetric('benchmark_diff', lit.Test.toMetricValue(diff_metrics))
            if failing_bench:
                res.code = lit.Test.FAIL
                res.output = '\n'.join(failing_bench)
        return res

    def _process_results(self, test, result, lit_config):
        full_name = test.getFullName()
        other_result = self.other_results[full_name]
        this_bench = result.metrics['benchmarks'].value
        other_bench = other_result['benchmarks']
        diff_metrics = {}
        failing_bench = []
        for k, v in this_bench.items():
            matching = other_bench[k]
            diff = benchcxx.benchmarkPercentDifference(v, matching)
            diff_metrics[diff['name']] = diff
            if diff['cpu_time'] > self.allowed_difference:
                failing_bench += [benchcxx.formatFailDiff(diff, v, matching)]
        return diff_metrics, failing_bench

    def _benchmark_test(self, test, lit_config):
        name = test.path_in_suite[-1]
        source_path = test.getSourcePath()
        source_dir = os.path.dirname(source_path)

        exec_file = tempfile.NamedTemporaryFile(suffix=".exe", delete=False)
        exec_path = exec_file.name
        exec_file.close()

        try:
            cmd, report, rc = self._build(exec_path, source_path)
            compile_cmd = cmd
            if rc != 0:
                report += "Compilation failed unexpectedly!"
                return lit.Test.FAIL, report

            cmd, out, err, rc = self._run_imp(
                exec_path, lit_config, source_dir,
                flags=[])
            if rc != 0:
                _, report, _ = self._make_report(cmd, '', err, rc)
                report = "Compiled With: %s\n%s" % (compile_cmd, report)
                report += "Compiled test failed unexpectedly!"
                return lit.Test.FAIL, report
            result = lit.Test.Result(lit.Test.PASS, '')
            scale_warning = 'CPU scaling is enabled: Benchmark timings may be noisy.'
            if scale_warning in out:
                lit_config.warning(scale_warning)
            benchmark_data = benchcxx.parseBenchmarkOutput(out)
            result.addMetric('benchmarks',
                             lit.Test.toMetricValue(benchmark_data))
            return result
        finally:
            # Note that cleanup of exec_file happens in `_clean()`. If you
            # override this, cleanup is your reponsibility.
            self._clean(exec_path)

