"""
Runtime tests for OMP examples, designed to stress the checkpointing and restore
functionality of the chimes runtime.
"""
import os
import sys
from common import RuntimeTest, parse_argv, CHIMES_HOME, run_runtime_test, \
         cleanup_runtime_files, find_file

OMP_H = find_file('omp.h', '/usr/')

BASIC_PARALLEL = RuntimeTest('BasicParallel', ['basic_parallel.cpp'], 0, 1,
                             includes=[os.path.dirname(OMP_H)])
# Assertion should fail
FAIL_CHECKPOINT_IN_FOR = RuntimeTest('FailCheckpointInFor',
                                     ['fail_checkpoint_in_for.cpp'], -6, 0,
                                     includes=[os.path.dirname(OMP_H)])
TESTS = [BASIC_PARALLEL, FAIL_CHECKPOINT_IN_FOR]

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
OMP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/openmp'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    # CONFIG.set_custom_compiler('/opt/apps/gcc/4.8.2/bin/g++')
    CONFIG.set_custom_compiler('/usr/local/bin/g++')
    CONFIG.add_custom_compiler_flag('-fopenmp')
    cleanup_runtime_files()

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, OMP_INPUTS_DIR, CONFIG)
