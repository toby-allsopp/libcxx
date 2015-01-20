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
        test = dict(rt)
        test['code'] = stringToCode(rt['code'])
        tests[rt['name']] = test
    return tests