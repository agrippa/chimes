"""
Runtime tests for OMP examples, designed to stress the checkpointing and restore
functionality of the numdebug runtime.
"""
import os
import sys
from common import RuntimeTest, parse_argv, NUM_DEBUG_HOME, run_runtime_test, \
         cleanup_runtime_files, find_file

OMP_H = find_file('omp.h', '/usr/')

BASIC_PARALLEL = RuntimeTest('BasicParallel', ['basic_parallel.cpp'], 0, 1,
                             includes=[os.path.dirname(OMP_H)])
TESTS = [BASIC_PARALLEL]

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cpp.sh'
OMP_INPUTS_DIR = NUM_DEBUG_HOME + '/src/tests/runtime/openmp'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_custom_compiler('/usr/local/bin/g++')
    CONFIG.add_custom_compiler_flag('-fopenmp')
    cleanup_runtime_files()

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, OMP_INPUTS_DIR, CONFIG)
