import os
from os import path
import sys

from common import PerfTest, RuntimeTest, parse_argv, CHIMES_HOME, \
         run_runtime_test, run_perf_test, \
         is_rodinia_supported, is_spec_supported, get_machine_name
from shared_tests import MISC_CPP_RUNTIME_TESTS
from exec_time_parsers import EXEC_TIME_PARSERS

perf_cli_args_classname = get_machine_name().replace('.', '_') + '_perf_args'
perf_cli_args_mod = __import__(perf_cli_args_classname)

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
NORMAL_COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_normal.sh'
CPP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/cpp'

TESTS = []

for test in MISC_CPP_RUNTIME_TESTS:
    TESTS.append(PerfTest(test, perf_cli_args_mod.PERF_CLI_ARGS[test.name],
                          EXEC_TIME_PARSERS[test.name]))

if is_rodinia_supported():
    from rodinia_tests import ALL_RODINIA_RUNTIME_TESTS
    for test in ALL_RODINIA_RUNTIME_TESTS:
        TESTS.append(PerfTest(test, perf_cli_args_mod.PERF_CLI_ARGS[test.name],
                              EXEC_TIME_PARSERS[test.name]))

if is_spec_supported():
    from spec_tests import ALL_SPEC_RUNTIME_TESTS
    for test in ALL_SPEC_RUNTIME_TESTS:
        new_test = PerfTest(test, perf_cli_args_mod.PERF_CLI_ARGS[test.name],
                            EXEC_TIME_PARSERS[test.name])
        TESTS.append(new_test)

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_force_sequential()

    for t in TESTS:
        run_perf_test(t, COMPILE_SCRIPT, NORMAL_COMPILE_SCRIPT, CPP_INPUTS_DIR,
                      CONFIG)

    PERF_FILENAME = os.path.join('results', get_machine_name() + '.cpp.noblock.nodummy.perf')
    if not CONFIG.quiet and not CONFIG.do_list and os.path.isfile(PERF_FILENAME):
        print('')
        print('Previous single-threaded performance results:')
        print('=============================================')
        fp = open(PERF_FILENAME)
        print(fp.read())
        fp.close()
