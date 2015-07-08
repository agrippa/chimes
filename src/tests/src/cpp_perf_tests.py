import os
from os import path
import sys

from common import PerfTest, RuntimeTest, parse_argv, CHIMES_HOME, \
         run_runtime_test, cleanup_runtime_files, run_perf_test, is_rodinia_supported, is_spec_supported
from shared_tests import ALL_RODINIA_RUNTIME_TESTS, ALL_SPEC_RUNTIME_TESTS, \
         MISC_CPP_RUNTIME_TESTS, RODINIA_DATA, RODINIA_HOME, \
         SPEC_BOTSALGN_ROOT, SPEC_BOTSSPAR_ROOT, SPEC_SMITHWA_ROOT, \
         SPEC_KDTREE_ROOT, PERF_CLI_ARGS
from exec_time_parsers import EXEC_TIME_PARSERS

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
NORMAL_COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_normal.sh'
CPP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/cpp'

TESTS = []

for test in MISC_CPP_RUNTIME_TESTS:
    TESTS.append(PerfTest(test, PERF_CLI_ARGS[test.name], EXEC_TIME_PARSERS[test.name]))

for test in ALL_RODINIA_RUNTIME_TESTS:
    TESTS.append(PerfTest(test, PERF_CLI_ARGS[test.name], EXEC_TIME_PARSERS[test.name]))

for test in ALL_SPEC_RUNTIME_TESTS:
    new_test = PerfTest(test, PERF_CLI_ARGS[test.name], EXEC_TIME_PARSERS[test.name])
    TESTS.append(new_test)

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_force_sequential()
    cleanup_runtime_files()

    for t in TESTS:
        run_perf_test(t, COMPILE_SCRIPT, NORMAL_COMPILE_SCRIPT, CPP_INPUTS_DIR,
                      CONFIG)

    if not CONFIG.quiet and os.path.isfile('cpp.perf'):
        print()
        print('Previous single-threaded performance results:')
        print('=============================================')
        fp = open('cpp.perf')
        print(fp.read())
        fp.close()
