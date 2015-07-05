import os
import sys

from common import PerfTest, RuntimeTest, parse_argv, CHIMES_HOME, \
         run_runtime_test, cleanup_runtime_files, run_perf_test
from shared_tests import ALL_RODINIA_RUNTIME_TESTS, ALL_SPEC_RUNTIME_TESTS, \
         MISC_CPP_RUNTIME_TESTS

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
NORMAL_COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_normal.sh'
CPP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/cpp'

def get_first_line_containing(s, find, append=0):
    lines = s.split('\n')
    line_index = 0

    for line_index in range(len(lines)):
        l = lines[line_index]
        if find in l:
            acc = [l]
            for a in range(append):
                acc.append(lines[line_index + 1 + a])
            return '\n'.join(acc)

    print('Failed to find "' + find + '" when searching in:\n')
    print(s)
    print()
    sys.exit(1)

def iso3d_parser(stdout, stderr):
    return float(get_first_line_containing(stderr, 'total').split()[1])

def sw_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'computation').split()[3])

def lulesh_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'Elapsed').split()[3])

def comd_parser(stdout, stderr):
    return float(get_first_line_containing(get_first_line_containing(stdout,
                    'Timings for Rank 0', append=3), 'total').split()[4])

def uts_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'Wallcl').split()[3])

EXEC_TIME_PARSERS = {'Iso3D': iso3d_parser,
                     'SmithWaterman': sw_parser,
                     'Lulesh': lulesh_parser,
                     'CoMD': comd_parser,
                     'UTS': uts_parser
                    }

CLI_ARGS = {'Iso3D': '-x 1024 -y 1024 -z 256 -i 20',
            'SmithWaterman': '1204000 7000 700',
            'Lulesh': '20',
            'CoMD': '-N 10 -x 100 -y 20 -z 20',
            'UTS': '-t 1 -g 20 -b 1.8 -d 80'
           }

TESTS = []

for test in MISC_CPP_RUNTIME_TESTS:
    TESTS.append(PerfTest(test, CLI_ARGS[test.name], EXEC_TIME_PARSERS[test.name]))

# for test in ALL_RODINIA_RUNTIME_TESTS:
#     TESTS.append(PerfTest(test, EXEC_TIME_PARSERS[test.name]))
# 
# for test in ALL_SPEC_RUNTIME_TESTS:
#     TESTS.append(PerfTest(test, EXEC_TIME_PARSERS[test.name]))

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_force_sequential()
    cleanup_runtime_files()

    for t in TESTS:
        run_perf_test(t, COMPILE_SCRIPT, NORMAL_COMPILE_SCRIPT, CPP_INPUTS_DIR,
                      CONFIG)

    if os.path.isfile('cpp.perf'):
        print()
        print('Previous single-threaded performance results:')
        print('=============================================')
        fp = open('cpp.perf')
        print(fp.read())
        fp.close()
