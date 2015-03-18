import json
import re

import lit
import lit.Test


class BenchmarkStats(object):
    def __init__(self, repetitions):
        has_repetitions = len(repetitions) >= 4
        self.name = repetitions[0]['name']
        if has_repetitions:
            self.mean = dict(repetitions[-2])
            self.stddev = dict(repetitions[-1])
        else:
            self.mean = dict(repetitions[0])
            self.stddev = {'cpu_time': 0, 'real_time': 0,
                           'iterations': 0}
        self.mean['name'] = self.name
        self.stddev['name'] = self.name

    def MeanCPUTime(self):
        return self.mean['cpu_time']

    def MeanRealTime(self):
        return self.mean['real_time']

    def MeanIterations(self):
        return self.mean['iterations']

    def StdDevCPUTime(self):
        return self.stddev['cpu_time']

    def StdDevRealTime(self):
        return self.stddev['real_time']

    def StdDevIterations(self):
        return self.stddev['iterations']


def groupRepeatedBenchmarks(benchmark_list):
    has_repeats = (len(benchmark_list) >= 4 and
                   benchmark_list[0]['name'] == benchmark_list[1]['name'])
    if not has_repeats:
        return [[b] for b in benchmark_list]
    grouped_benchmarks = []
    benchmark_list = list(benchmark_list)
    while len(benchmark_list) != 0:
        stddev_index = 0
        while not benchmark_list[stddev_index]['name'].endswith('_stddev'):
            stddev_index += 1
        stddev_index += 1
        grouped_benchmarks += [benchmark_list[0:stddev_index]]
        benchmark_list = benchmark_list[stddev_index:]
    return grouped_benchmarks


def makeBenchmarkStats(benchmark_list):
    grouped_benchmarks = groupRepeatedBenchmarks(benchmark_list)
    return [BenchmarkStats(gb) for gb in grouped_benchmarks]


class BenchmarkDifference(object):
    def __init__(self, baseline, current):
        assert baseline.name == current.name
        self.baseline = baseline
        self.current = current
        self.name = current.name
        self.cpu_time = (current.MeanCPUTime()
                         / float(baseline.MeanCPUTime()))
        self.real_time = (current.MeanRealTime()
                          / float(baseline.MeanRealTime()))
        self.iterations = (baseline.MeanIterations()
                           / float(current.MeanIterations()))

    def CPUTimeWithin(self, allowed_diff):
        return self.cpu_time * 100 - 100 <= allowed_diff

    def RealTimeWithin(self, allowed_diff):
        return self.real_time * 100 - 100 <= allowed_diff

    def IterationsWithin(self, allowed_diff):
        return self.iterations * 100 - 100 <= allowed_diff

    @staticmethod
    def _FormatDifferenceImp(metric_name, diff_v, baseline_v, curr_v):
        """
        Format a user readable string that reports the difference between one
        value of a benchmarks output.
        """
        cmp_str = 'FASTER' if diff_v < 1.0 else 'SLOWER'
        fmt_str = '{0:11} {1:8} {2} (current={3}, baseline={4}, diff={5})'
        metric_name += ':'
        diff_abs = abs(diff_v)
        # Print the change as a multiplier if it is >= 2. Otherwise print it as
        # a percentage.
        if diff_abs >= 2:
            change = '%.3fx' % diff_abs
        else:
            change = '%.3f%%' % abs((diff_abs * 100) - 100)
        return fmt_str.format(
            metric_name, change, cmp_str, curr_v, baseline_v,
            abs(curr_v-baseline_v))

    def FormatCPUTimeDifference(self):
        return self._FormatDifferenceImp(
            'cpu_time', self.cpu_time, self.baseline.MeanCPUTime(),
            self.current.MeanCPUTime())

    def FormatRealTimeDifference(self):
        return self._FormatDifferenceImp(
            'real_time', self.real_time, self.baseline.MeanRealTime(),
            self.current.MeanRealTime())

    def FormatIterationsDifference(self):
        return self._FormatDifferenceImp(
            'iterations', self.iterations, self.baseline.MeanIterations(),
            self.current.MeanIterations())

    def FormatDifference(self):
        return '\n'.join([
            self.FormatCPUTimeDifference(),
            self.FormatRealTimeDifference(),
             self.FormatIterationsDifference()
        ])


def DiffBenchmarkStats(baseline, current):
    """
    Diff every benchmark in current against baseline and return
    the results. If there is no matching benchmark in baseline that benchmark
    is skipped.
    """
    diff_list = []
    baseline_map = {bench.name: bench for bench in baseline}
    for bench in current:
        matching_baseline = baseline_map.get(bench.name)
        if not matching_baseline:
            continue
        diff_list += [BenchmarkDifference(matching_baseline, bench)]
    return diff_list


def formatFailDiff(diff):
    """
    Format a user readable string that reports the difference between all
    values of a benchmark output.
    """
    return ('%s failed:\n    %s\n    %s\n    %s\n' %
            (diff.name,
             diff.FormatCPUTimeDifference(),
             diff.FormatRealTimeDifference(),
             diff.FormatIterationsDifference()))


def formatPassDiff(diff):
    return ('%s passed:\n    %s\n    %s\n    %s\n' %
            (diff.name,
             diff.FormatCPUTimeDifference(),
             diff.FormatRealTimeDifference(),
             diff.FormatIterationsDifference()))


def stringToCode(str_code):
    if str_code == 'PASS':
        return lit.Test.PASS
    elif str_code == 'XFAIL':
        return lit.Test.XFAIL
    elif str_code == 'FAIL':
        return lit.Test.FAIL
    elif str_code == 'XPASS':
        return lit.Test.XPASS
    elif str_code == 'UNRESOLVED':
        return lit.Test.UNRESOLVED
    elif str_code == 'UNSUPPORTED':
        return lit.Test.UNSUPPORTED
    else:
        assert False


def loadTestResults(from_file):
    """
    Read in the output of a benchmark test run.
    """
    with open(from_file, 'r') as output_file:
        output = json.load(output_file)
    raw_tests = output['tests']
    tests = {}
    for rt in raw_tests:
        test = {
            'name': rt['name'],
            'code': stringToCode(rt['code']),
            'output': rt['output'],
            'benchmark_results': rt['metrics']['benchmark_results']
        }
        tests[rt['name']] = test
    return tests
