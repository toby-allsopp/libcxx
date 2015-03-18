import json
import re

import lit
import lit.Test


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
            'benchmarks': rt['metrics']['benchmarks']
        }
        tests[rt['name']] = test
    return tests

def removeRepeatedBenchmarks(benchmark_list):
    """
    Some benchmarks are run multiple times and report
    a mean and stddev at the end. This function removes all of repeated runs
    and combines the mean and stddev into one benchmark result.
    Example Output:
      Name               Time(ns)  Iterations
      BM_my_test         11         95
      BM_my_test         10        100
      BM_my_test         9         105
      BM_my_test_mean    10        100
      BM_my_test_stddev  1         5
      BM_different_test (...)
    """
    has_repeats = (len(benchmark_list) >= 4 and
                   benchmark_list[0]['name'] == benchmark_list[1]['name'])
    if not has_repeats:
        return benchmark_list
    new_benchmark_list = []
    for i in range(len(benchmark_list)):
        possible_mean = benchmark_list[i]
        name = possible_mean['name']
        is_mean = name.endswith('_mean')
        if not is_mean:
            continue
        real_name = name[:-len('_mean')]
        new_bench = dict(possible_mean)
        new_bench['name'] = real_name
        assert len(benchmark_list) > i+1
        stddev_bench = benchmark_list[i+1]
        new_bench['real_time_stddev'] = stddev_bench['real_time']
        new_bench['cpu_time_stddev'] = stddev_bench['cpu_time']
        new_bench['iterations_stddev'] = stddev_bench['iterations']
        new_benchmark_list += [new_bench]
    return new_benchmark_list

def parseBenchmarkOutput(output):
    """
    Parse the output of the entire benchmark
    """
    # Split the benchmark output header and results based on a line containing
    # only '-' characters.
    json_root = json.loads(output)
    benchmark_list = json_root['benchmarks']
    benchmark_list = removeRepeatedBenchmarks(benchmark_list)
    benchmark_dict = {}
    benchmark_index = 0
    for b in benchmark_list:
        benchmark_index += 1
        b['index'] = benchmark_index
        benchmark_dict[b['name']] = b
    return benchmark_dict


def createBenchmarkDiff(first, second):
    """
    diff two benchmarks and return the difference.
    """
    def diff_fn(first, second):
        return second / float(first)
    return {
        'name': first['name'],
        'iterations': diff_fn(
            first['iterations'], second['iterations']),
        'cpu_time': diff_fn(
            second['cpu_time'], first['cpu_time']),
        'time': diff_fn(
            second['real_time'], first['real_time'])
    }


def DiffBenchmarkResults(baseline, current):
    """
    Diff every benchmark in current against baseline and return
    the results. If there is no matching benchmark in baseline that benchmark
    is skipped.
    """
    diff_map = {}
    for curr_k, curr_v in current.iteritems():
        matching_baseline = baseline.get(curr_k)
        if not matching_baseline:
            continue
        diff = createBenchmarkDiff(curr_v, matching_baseline)
        diff_map[curr_k] = diff
    return diff_map


def formatDiffString(key, baseline, curr, diff):
    """
    Format a user readable string that reports the difference between one
    value of a benchmarks output.
    """
    cmp_str = 'FASTER' if diff[key] < 1.0 else 'SLOWER'
    fmt_str = '{0:11} {1:8} {2} (current={3}, baseline={4}, diff={5})'
    label = '%s:' % key
    diff_v = abs(diff[key])
    # Print the change as a multiplier if it is >= 2. Otherwise print it as
    # a percentage.
    if diff_v >= 2:
        change = '%.3fx' % diff_v
    else:
        change = '%.3f%%' % abs((diff_v * 100) - 100)
    return fmt_str.format(label, change, cmp_str, curr[key], baseline[key],
                          abs(curr[key]-baseline[key]))


def formatFailDiff(baseline, curr, diff):
    """
    Format a user readable string that reports the difference between all
    values of a benchmark output.
    """
    return ('%s failed:\n    %s\n    %s\n    %s\n' %
            (curr['name'],
             formatDiffString('cpu_time', baseline, curr, diff),
             formatDiffString('iterations', baseline, curr, diff),
             formatDiffString('real_time', baseline, curr, diff)))

def formatPassDiff(baseline, curr, diff):
    return ('%s passed:\n    %s\n    %s\n    %s\n' %
            (curr['name'],
             formatDiffString('cpu_time', baseline, curr, diff),
             formatDiffString('iterations', baseline, curr, diff),
             formatDiffString('real_time', baseline, curr, diff)))
