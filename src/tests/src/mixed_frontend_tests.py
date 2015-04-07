"""
Frontend tests for CUDA examples, designed to stress the parsing and
transformation features of chimes.
"""
import os
import sys
from common import FrontendTest, run_frontend_test, parse_argv, CHIMES_HOME, \
                   get_platform_directory

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile.sh'
CUDA_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cuda'
CPP_EXAMPLES_DIR = '../cpp' # relative to CUDA_EXAMPLES_DIR
CUDA_TEST_DIR = CHIMES_HOME + '/src/tests/frontend/' + \
                get_platform_directory() + '/cuda'

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
ISO3D = FrontendTest('Iso3D',
                     ['iso3d.cu', CPP_EXAMPLES_DIR + '/lib/common.cpp',
                      CPP_EXAMPLES_DIR + '/lib/common3d.cpp'],
                     ['iso3d.cudafe1.transformed.cpp',
                      'common.cpp.pre.transformed.cpp',
                      'common3d.cpp.pre.transformed.cpp'],
                     ['iso3d', 'common', 'common3d'], False,
                     includes=[os.path.join(CUDA_EXAMPLES_DIR, CPP_EXAMPLES_DIR,
                                            'include')],
                     dependencies=[os.path.join(CUDA_EXAMPLES_DIR,
                                                CPP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])

TESTS = [ISO2D, ISO3D]

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CUDA_EXAMPLES_DIR, CUDA_TEST_DIR,
                          CONFIG)
