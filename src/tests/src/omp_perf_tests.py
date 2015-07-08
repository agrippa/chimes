import os
import sys

from common import PerfTest, RuntimeTest, parse_argv, CHIMES_HOME, \
         run_runtime_test, cleanup_runtime_files, run_perf_test, is_rodinia_supported, is_spec_supported
from shared_tests import ALL_RODINIA_RUNTIME_TESTS, ALL_SPEC_RUNTIME_TESTS, \
         MISC_OMP_RUNTIME_TESTS, RODINIA_DATA, RODINIA_HOME, \
         SPEC_BOTSALGN_ROOT, SPEC_BOTSSPAR_ROOT, SPEC_SMITHWA_ROOT, \
         SPEC_KDTREE_ROOT, PERF_CLI_ARGS
from exec_time_parsers import EXEC_TIME_PARSERS

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
NORMAL_COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_normal.sh'
OMP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/openmp'

TESTS = []

for test in MISC_OMP_RUNTIME_TESTS:
    TESTS.append(PerfTest(test, PERF_CLI_ARGS[test.name], EXEC_TIME_PARSERS[test.name]))

for test in ALL_RODINIA_RUNTIME_TESTS:
    new_test = PerfTest(test, PERF_CLI_ARGS[test.name], EXEC_TIME_PARSERS[test.name])
    new_test.extra_compile_args += ' -D OPEN'
    TESTS.append(new_test)

for test in ALL_SPEC_RUNTIME_TESTS:
    new_test = PerfTest(test, PERF_CLI_ARGS[test.name], EXEC_TIME_PARSERS[test.name])
    new_test.extra_compile_args += ' -D SPEC_OMP -D SPEC_OPENMP '
    TESTS.append(new_test)

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.add_custom_compiler_flag('-fopenmp')
    cleanup_runtime_files()

    for t in TESTS:
        run_perf_test(t, COMPILE_SCRIPT, NORMAL_COMPILE_SCRIPT, OMP_INPUTS_DIR,
                      CONFIG)

    if not CONFIG.quiet and os.path.isfile('omp.perf'):
        print()
        print('Previous multi-threaded performance results:')
        print('=============================================')
        fp = open('omp.perf')
        print(fp.read())
        fp.close()
