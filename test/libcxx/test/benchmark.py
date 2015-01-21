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
    import json
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
        'cpu_time': percentDifference(first['cpu_time'], second['cpu_time']),
        'time': percentDifference(first['time'], second['time']),
        'iterations': percentDifference(first['iterations'], second['iterations'])
    }
    return result


ksplit_line_re = re.compile('\n[-]+\n')
kbench_line_re = re.compile('^\s*([^\s]+)\s+([0-9]+)\s+([0-9]+)\s+([0-9]+)\s*')


def parseBenchmarkOutput(output):
    parts = ksplit_line_re.split(output, maxsplit=1)
    assert len(parts) == 2
    benchmark_list = {}
    for line in parts[1].split('\n'):
        line = line.strip()
        if not line:
            continue
        if line.startswith('DEBUG: '):
            line = line[len('DEBUG: '):]
        match = kbench_line_re.match(line)
        assert match is not None
        name = match.group(1)
        parsed_bench = {
            'name':       match.group(1),
            'time':       int(match.group(2)),
            'cpu_time':   int(match.group(3)),
            'iterations': int(match.group(4))
        }
        benchmark_list[name] = parsed_bench
    return benchmark_list
