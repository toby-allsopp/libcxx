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


def testResultToBenchmarkResult(test, result):
    test_res = {
        'name': test.getFullName(),
        'code': result.code,
        'output': result.output,
        'benchmarks': result.metrics['benchmarks'].value
    }
    return test_res


def percentDifference(first, second):
    return (float(second - first) / first) * 100


def benchmarkPercentDifference(first, second):
    result = {
        'name': first['name'],
        'iterations': percentDifference(
            first['iterations'], second['iterations']),
        'cpu_time': percentDifference(
            second['cpu_time'], first['cpu_time']),
        'time': percentDifference(
            second['time'], first['time'])
    }
    return result


ksplit_line_re = re.compile('\n[-]+\n')
kbench_line_re = re.compile('^\s*([^\s]+)\s+([-0-9]+)\s+([-0-9]+)\s+([0-9]+)([^\n]*)')

def parseBenchmarkLine(line):
    assert line  # Assert non-empty and non-null
    if line.startswith('DEBUG: '):
        line = line[len('DEBUG: '):]
    # TODO(ericwf): This is a hack because the benchmark name can contain
    # spaces if it names a template: ex BM_Foo<int, long>. Remove this.
    new_line = line.replace(', ', ',$')
    match = kbench_line_re.match(new_line)
    # TODO(ericwf): Remove this.
    if match is None:
        with open('/tmp/ERR', 'w') as f:
            f.write(output + '\n')
    assert match is not None
    name = match.group(1)
    parsed_bench = {
        'name':       match.group(1).replace(',$', ', '),
        'index':      benchmark_index,
        'time':       max(int(match.group(2)), 1),  # Ensure non-zero
        'cpu_time':   max(int(match.group(3)), 1),  # Ensure non-zero
        'iterations': int(match.group(4)),
    }
    parsed_bench['total_cpu_time'] = (parsed_bench['cpu_time'] *
                                      parsed_bench['iterations'])
    parsed_bench['total_time'] = (parsed_bench['time'] *
                                  parsed_bench['iterations'])

def removeRepeatedBenchmarks(benchmark_list):
    new_benchmark_list = []
    last_bench = None
    for b in benchmark_list:
        name = b['name']
        is_stddev = name.endswith('_stddev')
        is_mean = name.endswith('_mean')
        if is_stddev:
            real_name = name[:-len('_stddev')]
        elif is_mean:
            real_name = name[:-len('_mean')]
        else:
            continue
        if is_mean:
            assert last_bench is None
            last_bench = dict(b)
            last_bench['name'] = real_name
        elif is_stddev:
            assert last_bench is not None
            last_bench['time_stddev'] = b['time']
            last_bench['cpu_time_stddev'] = b['cpu_time']
            last_bench['iterations_stddev'] = b['iterations']

def parseBenchmarkOutput(output):
    # Split the benchmark output header and results based on a line containing
    # only '-' characters.
    parts = ksplit_line_re.split(output, maxsplit=1)
    assert len(parts) == 2
    benchmark_list = [parseBenchmarkLine(l.strip())
                      for l in parts[1].split('\n') if l.strip()]
    has_repeats = len(benchmark_list) >= 4 and \
        benchmark_list[0]['name'] == benchmark_list[1]['name']
    benchmark_dict = {}
    if not has_repeats:
        benchmark_index = 0
        for b in benchmark_list:
            benchmark_index += 1
            b['index'] = benchmark_index
            benchmark_dict[b['name']] = b
    else:
        
    return benchmark_dict


def formatDiffString(key, diff, ours, theirs):
    cmp_str = 'FASTER' if diff[key] <= 0.0 else 'SLOWER'
    fmt_str = '{0:11} {1:8} {2} (ours={3}, theirs={4}, diff={5})'
    label = '%s:' % key
    percent = '%.3f%%' % abs(diff[key])
    return fmt_str.format(label, percent, cmp_str, ours[key], theirs[key],
                          ours[key]-theirs[key])


def formatFailDiff(diff, ours, theirs):
  return ('%s failed:\n    %s\n    %s\n    %s\n' %
          (ours['name'],
          formatDiffString('cpu_time', diff, ours, theirs),
          formatDiffString('iterations', diff, ours, theirs),
          formatDiffString('time', diff, ours, theirs)))
