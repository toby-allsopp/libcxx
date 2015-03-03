import errno
import os
import re
import tempfile
import time

import lit.Test        # pylint: disable=import-error
import lit.TestRunner  # pylint: disable=import-error
import lit.util        # pylint: disable=import-error

import libcxx.test.benchmark as benchcxx
import libcxx.util


class LibcxxTestFormat(object):
    """
    Custom test format handler for use with the test format use by libc++.

    Tests fall into two categories:
      FOO.pass.cpp - Executable test which should compile, run, and exit with
                     code 0.
      FOO.fail.cpp - Negative test case which is expected to fail compilation.
      FOO.sh.cpp   - A test that uses LIT's ShTest format.
    """

    def __init__(self, cxx, use_verify_for_fail, execute_external,
                 executor, exec_env):
        self.cxx = cxx
        self.use_verify_for_fail = use_verify_for_fail
        self.execute_external = execute_external
        self.executor = executor
        self.exec_env = dict(exec_env)

    # TODO: Move this into lit's FileBasedTest
    def getTestsInDirectory(self, testSuite, path_in_suite,
                            litConfig, localConfig):
        source_path = testSuite.getSourcePath(path_in_suite)
        for filename in os.listdir(source_path):
            # Ignore dot files and excluded tests.
            if filename.startswith('.') or filename in localConfig.excludes:
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
        name = test.path_in_suite[-1]
        is_sh_test = name.endswith('.sh.cpp')
        is_pass_test = name.endswith('.pass.cpp')
        is_fail_test = name.endswith('.fail.cpp')

        res = lit.TestRunner.parseIntegratedTestScript(
            test, require_script=is_sh_test)
        # Check if a result for the test was returned. If so return that
        # result.
        if isinstance(res, lit.Test.Result):
            return res
        if lit_config.noExecute:
            return lit.Test.Result(lit.Test.PASS)
        # res is not an instance of lit.test.Result. Expand res into its parts.
        script, tmpBase, execDir = res
        # Check that we don't have run lines on tests that don't support them.
        if not is_sh_test and len(script) != 0:
            lit_config.fatal('Unsupported RUN line found in test %s' % name)

        # Dispatch the test based on its suffix.
        if is_sh_test:
            if self.executor:
                # We can't run ShTest tests with a executor yet.
                # For now, bail on trying to run them
                return lit.Test.UNSUPPORTED, 'ShTest format not yet supported'
            return lit.TestRunner._runShTest(test, lit_config,
                                             self.execute_external, script,
                                             tmpBase, execDir)
        elif is_fail_test:
            return self._evaluate_fail_test(test)
        elif is_pass_test:
            return self._evaluate_pass_test(test, tmpBase, execDir, lit_config)
        else:
            # No other test type is supported
            assert False

    def _clean(self, exec_path):  # pylint: disable=no-self-use
        libcxx.util.cleanFile(exec_path)

    def _evaluate_pass_test(self, test, tmpBase, execDir, lit_config):
        source_path = test.getSourcePath()
        exec_path = tmpBase + '.exe'
        object_path = tmpBase + '.o'
        # Create the output directory if it does not already exist.
        lit.util.mkdir_p(os.path.dirname(tmpBase))
        try:
            # Compile the test
            cmd, out, err, rc = self.cxx.compileLinkTwoSteps(
                source_path, out=exec_path, object_file=object_path,
                cwd=execDir)
            compile_cmd = cmd
            if rc != 0:
                report = libcxx.util.makeReport(cmd, out, err, rc)
                report += "Compilation failed unexpectedly!"
                return lit.Test.FAIL, report
            # Run the test
            local_cwd = os.path.dirname(source_path)
            env = None
            if self.exec_env:
                env = self.exec_env
            out, err, rc = self.executor.run(exec_path, [exec_path],
                                             local_cwd, env)
            if rc != 0:
                report = libcxx.util.makeReport(cmd, out, err, rc)
                report = "Compiled With: %s\n%s" % (compile_cmd, report)
                report += "Compiled test failed unexpectedly!"
                return lit.Test.FAIL, report
            return lit.Test.PASS, ''
        finally:
            # Note that cleanup of exec_file happens in `_clean()`. If you
            # override this, cleanup is your reponsibility.
            libcxx.util.cleanFile(object_path)
            self._clean(exec_path)

    def _evaluate_fail_test(self, test):
        source_path = test.getSourcePath()
        # TODO: Move the checking of USE_VERIFY into
        # lit.TestRunner.parseIntegratedTestScript by adding support for custom
        # tags.
        with open(source_path, 'r') as f:
            contents = f.read()
        use_verify = 'USE_VERIFY' in contents and self.use_verify_for_fail
        extra_flags = ['-Xclang', '-verify'] if use_verify else []
        cmd, out, err, rc = self.cxx.compile(source_path, out=os.devnull,
                                             flags=extra_flags)
        expected_rc = 0 if use_verify else 1
        if rc == expected_rc:
            return lit.Test.PASS, ''
        else:
            report = libcxx.util.makeReport(cmd, out, err, rc)
            return (lit.Test.FAIL,
                    report + 'Expected compilation to fail!\n')


class LibcxxBenchmarkFormat(LibcxxTestFormat):
    def __init__(self, other_results, allowed_difference, *args, **kwargs):
        super(LibcxxBenchmarkFormat, self).__init__(*args, **kwargs)
        self.other_results = other_results
        self.allowed_difference = allowed_difference

    def _execute(self, test, lit_config):
        res = lit.TestRunner.parseIntegratedTestScript(
            test, require_script=False)
        # Check if a result for the test was returned. If so return that
        # result.
        if isinstance(res, lit.Test.Result):
            return res
        if lit_config.noExecute:
            return lit.Test.Result(lit.Test.PASS)
        # res is not an instance of lit.test.Result. Expand res into its parts.
        script, tmpBase, execDir = res
        # Check that we don't have run lines on tests that don't support them.
        if len(script) != 0:
            lit_config.fatal('Unsupported RUN line found in test %s' % name)
        res = self._benchmark_test(test, tmpBase, execDir, lit_config)
        if not isinstance(res, lit.Test.Result):
            code, output = res
            res = lit.Test.Result(code, output)
        if not res.code == lit.Test.PASS:
            return res
        full_name = test.getFullName()
        if self.other_results:
            diff_metrics, failing_bench = self._compare_results(
                test, res, lit_config)
            res.addMetric(
                'benchmark_diff', lit.Test.toMetricValue(diff_metrics))
            if failing_bench:
                res.code = lit.Test.FAIL
                res.output = '\n'.join(failing_bench)
        return res

    def _benchmark_test(self, test, tmpBase, execDir, lit_config):
        source_path = test.getSourcePath()
        exec_path = tmpBase + '.exe'
        object_path = tmpBase + '.o'
        # Create the output directory if it does not already exist.
        lit.util.mkdir_p(os.path.dirname(tmpBase))
        try:
            # Compile the test
            cmd, out, err, rc = self.cxx.compileLinkTwoSteps(
                source_path, out=exec_path, object_file=object_path,
                cwd=execDir)
            compile_cmd = cmd
            if rc != 0:
                report = libcxx.util.makeReport(cmd, out, err, rc)
                report += "Compilation failed unexpectedly!"
                return lit.Test.FAIL, report
            # Run the test
            cmd = []
            if self.exec_env:
                cmd += ['env']
                cmd += ['%s=%s' % (k, v) for k, v in self.exec_env.items()]
            if lit_config.useValgrind:
                cmd = lit_config.valgrindArgs + cmd
            cmd += [exec_path]
            out, err, rc = lit.util.executeCommand(
                cmd, cwd=os.path.dirname(source_path))
            if rc != 0:
                report = libcxx.util.makeReport(cmd, out, err, rc)
                report = "Compiled With: %s\n%s" % (compile_cmd, report)
                report += "Compiled test failed unexpectedly!"
                return lit.Test.FAIL, report
            scale_warning = 'CPU scaling is enabled: Benchmark timings may be noisy.'
            if scale_warning in out:
                lit_config.warning(scale_warning)
            result = lit.Test.Result(lit.Test.PASS, '')
            benchmark_data = benchcxx.parseBenchmarkOutput(out)
            result.addMetric('benchmarks',
                             lit.Test.toMetricValue(benchmark_data))
            return result
        finally:
            # Note that cleanup of exec_file happens in `_clean()`. If you
            # override this, cleanup is your reponsibility.
            self._clean(exec_path)

    def _compare_results(self, test, result, lit_config):
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
