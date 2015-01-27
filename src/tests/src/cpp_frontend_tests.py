"""
Frontend tests for C++ examples, designed to stress the parsing and
transformation features of numdebug.
"""
import sys
from common import FrontendTest, run_frontend_test, parse_argv, NUM_DEBUG_HOME

SIMPLE_STENCIL = FrontendTest('SimpleStencil', 'simple_stencil.cpp',
                              'simple_stencil.register.cpp', 'simple_stencil',
                              False)
PASS_BY_REF = FrontendTest('PassByRef', 'pass_by_ref.cpp',
                           'pass_by_ref.register.cpp', 'pass_by_ref', True)
TESTS = [SIMPLE_STENCIL, PASS_BY_REF]

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples/cpp'
CPP_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/frontend/cpp'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CPP_EXAMPLES_DIR, CPP_TEST_DIR,
                          CONFIG)
