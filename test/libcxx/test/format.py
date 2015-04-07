import errno
import os
import time

import lit.Test        # pylint: disable=import-error
import lit.TestRunner  # pylint: disable=import-error
import lit.util        # pylint: disable=import-error

import libcxx.test.benchmark as benchcxx
from libcxx.test.executor import LocalExecutor as LocalExecutor
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
                if any([filepath.endswith(ext)
                        for ext in localConfig.suffixes]):
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

        if test.config.unsupported:
            return (lit.Test.UNSUPPORTED,
                    "A lit.local.cfg marked this unsupported")

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
            if not isinstance(self.executor, LocalExecutor):
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
            # TODO: Only list actually needed files in file_deps.
            # Right now we just mark all of the .dat files in the same
            # directory as dependencies, but it's likely less than that. We
            # should add a `// FILE-DEP: foo.dat` to each test to track this.
            data_files = [os.path.join(local_cwd, f)
                          for f in os.listdir(local_cwd) if f.endswith('.dat')]
            cmd, out, err, rc = self.executor.run(exec_path, [exec_path],
                                                  local_cwd, data_files, env)
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
    def __init__(self, baseline, allowed_difference, *args, **kwargs):
        super(LibcxxBenchmarkFormat, self).__init__(*args, **kwargs)
        self.baseline = baseline
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
        return self._benchmark_test(test, tmpBase, execDir, lit_config)

    def _benchmark_test(self, test, tmpBase, execDir, lit_config):
        import json
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
            cmd = [exec_path, '--benchmark_repetitions=3',
                              '--benchmark_format=json']
            cmd, out, err, rc = self.executor.run(
                None, cmd=cmd, work_dir=os.path.dirname(source_path),
                env=self.exec_env)
            if rc != 0:
                report = libcxx.util.makeReport(cmd, out, err, rc)
                report = "Compiled With: %s\n%s" % (compile_cmd, report)
                report += "Compiled test failed unexpectedly!"
                return lit.Test.FAIL, report
            benchmark_data = json.loads(out)
            if benchmark_data['context']['cpu_scaling_enabled']:
                lit_config.warning(
                    'CPU scaling is enabled: Benchmark timings may be noisy.')
            result = lit.Test.Result(lit.Test.PASS, '')
            result.addMetric('benchmark_results',
                             lit.Test.toMetricValue(benchmark_data))
            # Check for a benchmark that looks like it does nothing.
            # This is likely a problem.
            bad_results_str = self._detect_bad_results(
                benchmark_data['benchmarks'])
            if bad_results_str:
                result.code = lit.Test.FAIL
                result.output = bad_results_str
                return result
            # Compare the results to the baseline if the baseline is present.
            if self.baseline:
                failing_count, result_str = self._compare_results(
                    test.getFullName(), result, lit_config)
                result.output = result_str
                if failing_count != 0:
                    result.code = lit.Test.FAIL
            return result
        finally:
            # Note that cleanup of exec_file happens in `_clean()`. If you
            # override this, cleanup is your reponsibility.
            self._clean(exec_path)

    def _detect_bad_results(self, benchmark_list):
        bad_results_str = ''
        for bench in benchmark_list:
            if (bench['cpu_time'] < 10 and not bench['name'].startswith('BM_test_empty')
                and not bench['name'].endswith('_stddev')):
                bad_results_str += ('Test %s runs too quickly! cpu_time=%s\n'
                                    % (bench['name'], bench['cpu_time']))
        return bad_results_str

    def _compare_results(self, test_name, result, lit_config):
        baseline_results = self.baseline.get(test_name)
        if baseline_results is None:
            return None
        this_bench = result.metrics['benchmark_results'].value
        baseline_bench = baseline_results['benchmark_results']
        # Compare the context objects and issue warnings if the differ in any
        # meaningful way.
        this_context = this_bench['context']
        baseline_context = baseline_bench['context']
        if (this_context['num_cpus'] != baseline_context['num_cpus'] or
            this_context['mhz_per_cpu'] != baseline_context['mhz_per_cpu'] or
            (this_context['cpu_scaling_enabled']
             != baseline_context['cpu_scaling_enabled'])):
            lit_config.warning('Comparing results from different CPUs')
        if this_context['library_build_type'] != baseline_context['library_build_type']:
            lit_config.warning('Comparing results from different library builds.')
        baseline_stats = benchcxx.makeBenchmarkStats(baseline_bench['benchmarks'])
        current_stats = benchcxx.makeBenchmarkStats(this_bench['benchmarks'])
        # Calculate the timing and iteration differences.
        diff_metrics = benchcxx.DiffBenchmarkStats(baseline_stats,
                                                   current_stats)
        failing_count = 0
        diff_results = []
        for diff in diff_metrics:
            if diff.CPUTimeWithin(self.allowed_difference):
                diff_results += [
                    benchcxx.formatPassDiff(diff)]
            else:
                diff_results += [
                   benchcxx.formatFailDiff(diff)]
                failing_count += 1
        return failing_count, '\n'.join(diff_results)
