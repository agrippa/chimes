"""
Frontend tests for OpenMP examples, designed to stress the parsing and
transformation features of chimes.
"""
import os
import sys
from common import run_frontend_test, parse_argv, \
                   CHIMES_HOME, construct_simple_frontend_test, find_file

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
OMP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/openmp'
OMP_TEST_DIR = CHIMES_HOME + '/src/tests/frontend/openmp'
OMP_H = find_file('omp.h', '/usr/')

SIMPLE_TESTS = ['basic_parallel.cpp', 'nested_parallel.cpp']

TESTS = []
for simple in SIMPLE_TESTS:
    test = construct_simple_frontend_test(simple)
    test.includes = []
    test.includes.append(os.path.dirname(OMP_H))
    TESTS.append(test)


if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_custom_compiler('/usr/local/bin/g++')
    CONFIG.add_custom_compiler_flag('-fopenmp')

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, OMP_EXAMPLES_DIR, OMP_TEST_DIR,
                          CONFIG)
