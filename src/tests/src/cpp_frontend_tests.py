"""
Frontend tests for C++ examples, designed to stress the parsing and
transformation features of chimes.
"""
import os
import sys
from common import FrontendTest, run_frontend_test, parse_argv, \
                   CHIMES_HOME, construct_simple_frontend_test

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
CPP_TEST_DIR = CHIMES_HOME + '/src/tests/frontend/cpp'

PASS_BY_REF = FrontendTest('PassByRef', ['pass_by_ref.cpp'],
                           ['pass_by_ref.cpp.pre.transformed.cpp'], ['pass_by_ref'],
                           True)
SIMPLE_TESTS = ['simple_stencil.cpp',
                'decl_in_for.cpp',
                'func_call.cpp',
                'globals.cpp',
                'func_with_no_return.cpp',
                'func_with_two_ptr_returns.cpp',
                'func_with_one_ptr_return.cpp',
                'func_with_only_return.cpp',
                'func_with_two_void_returns.cpp',
                'cond_void_return.cpp',
                'propagation.cpp',
                'cond_ptr_return.cpp']

ISO2D = FrontendTest('Iso2D',
                     ['iso2d.cpp', 'lib/common.cpp', 'lib/common2d.cpp'],
                     ['iso2d.cpp.pre.transformed.cpp',
                      'common.cpp.pre.transformed.cpp',
                      'common2d.cpp.pre.transformed.cpp'],
                     ['iso2d', 'common', 'common2d'],
                     False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])

TESTS = [PASS_BY_REF]
for simple in SIMPLE_TESTS:
    TESTS.append(construct_simple_frontend_test(simple))
TESTS.append(ISO2D)


if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CPP_EXAMPLES_DIR, CPP_TEST_DIR,
                          CONFIG)
