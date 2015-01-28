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

SIMPLE_STENCIL = FrontendTest('SimpleStencil', 'simple_stencil.cpp',
                              'simple_stencil.cpp.pre.register.cpp',
                              'simple_stencil', False)
PASS_BY_REF = FrontendTest('PassByRef', 'pass_by_ref.cpp',
                           'pass_by_ref.cpp.pre.register.cpp', 'pass_by_ref',
                           True)
DECL_IN_FOR = FrontendTest('DeclInFor', 'decl_in_for.cpp',
                           'decl_in_for.register.cpp', 'decl_in_for', False)
ISO2D = FrontendTest('Iso2D', 'iso2d.cpp', 'iso2d.cpp.pre.register.cpp',
                     'iso2d', False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                   'libcommon2d.so')])
TESTS = [SIMPLE_STENCIL, PASS_BY_REF, DECL_IN_FOR, ISO2D]
# TESTS = [SIMPLE_STENCIL, PASS_BY_REF, DECL_IN_FOR]


if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CPP_EXAMPLES_DIR, CPP_TEST_DIR,
                          CONFIG)
