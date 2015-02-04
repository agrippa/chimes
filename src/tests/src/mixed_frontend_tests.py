"""
Frontend tests for CUDA examples, designed to stress the parsing and
transformation features of numdebug.
"""
import os
import sys
from common import FrontendTest, run_frontend_test, parse_argv, NUM_DEBUG_HOME

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile.sh'
CUDA_EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples/cuda'
CPP_EXAMPLES_DIR = '../cpp' # relative to CUDA_EXAMPLES_DIR
CUDA_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/frontend/cuda'

ISO2D = FrontendTest('Iso2D',
                     ['iso2d.cu', CPP_EXAMPLES_DIR + '/lib/common.cpp',
                      CPP_EXAMPLES_DIR + '/lib/common2d.cpp'],
                     ['iso2d.cudafe1.transformed.cpp',
                      'common.cpp.pre.transformed.cpp',
                      'common2d.cpp.pre.transformed.cpp'],
                     ['iso2d', 'common', 'common2d'], False,
                     includes=[os.path.join(CUDA_EXAMPLES_DIR, CPP_EXAMPLES_DIR,
                                            'include')],
                     dependencies=[os.path.join(CUDA_EXAMPLES_DIR,
                                                CPP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])
TESTS = [ISO2D]

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CUDA_EXAMPLES_DIR, CUDA_TEST_DIR,
                          CONFIG)
