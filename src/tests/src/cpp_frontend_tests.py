"""
Frontend tests for C++ examples, designed to stress the parsing and
transformation features of numdebug.
"""
import os
import sys
from common import FrontendTest, run_frontend_test, parse_argv, NUM_DEBUG_HOME

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples/cpp'
CPP_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/frontend/cpp'

SIMPLE_STENCIL = FrontendTest('SimpleStencil', ['simple_stencil.cpp'],
                              ['simple_stencil.cpp.pre.transformed.cpp'],
                              ['simple_stencil'], False)
PASS_BY_REF = FrontendTest('PassByRef', ['pass_by_ref.cpp'],
                           ['pass_by_ref.cpp.pre.transformed.cpp'], ['pass_by_ref'],
                           True)
DECL_IN_FOR = FrontendTest('DeclInFor', ['decl_in_for.cpp'],
                           ['decl_in_for.cpp.pre.transformed.cpp'], ['decl_in_for'],
                           False)
FUNC_CALL = FrontendTest('FuncCall', ['func_call.cpp'],
                         ['func_call.cpp.pre.transformed.cpp'], ['func_call'],
                         False)
GLOBALS = FrontendTest('Globals', ['globals.cpp'],
                       ['globals.cpp.pre.transformed.cpp'], ['globals'],
                       False)
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
TESTS = [GLOBALS, SIMPLE_STENCIL, PASS_BY_REF, DECL_IN_FOR, FUNC_CALL, ISO2D]


if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CPP_EXAMPLES_DIR, CPP_TEST_DIR,
                          CONFIG)
