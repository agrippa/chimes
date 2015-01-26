import os
import sys
from common import Test, run_cmd, run_test, parse_argv, NUM_DEBUG_HOME

simple_stencil = Test('SimpleStencil', 'simple_stencil.cpp',
        'simple_stencil.register.cpp', 'simple_stencil', False)
pass_by_ref = Test('PassByRef', 'pass_by_ref.cpp', 'pass_by_ref.register.cpp',
        'pass_by_ref', True)
tests = [simple_stencil, pass_by_ref]

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples/cpp'
CPP_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/frontend/cpp'

if __name__ == '__main__':
    config = parse_argv(sys.argv)

    for t in tests:
        run_test(t, COMPILE_SCRIPT, CPP_EXAMPLES_DIR, CPP_TEST_DIR, config)
