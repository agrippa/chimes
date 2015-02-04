"""
Frontend tests for CUDA examples, designed to stress the parsing and
transformation features of numdebug.
"""
import sys
from common import FrontendTest, run_frontend_test, parse_argv, NUM_DEBUG_HOME

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cuda.sh'
CUDA_EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples/cuda'
CPP_EXAMPLES_DIR = '../cpp' # relative to CUDA_EXAMPLES_DIR
CUDA_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/frontend/cuda'

VECTOR_SUM = FrontendTest('VectorSum', ['vector_sum.cu'],
                          ['vector_sum.cudafe1.transformed.cpp'], ['vector_sum'],
                          False)
DIM3 = FrontendTest('Dim3', ['dim3.cu'], ['dim3.cudafe1.transformed.cpp'],
                    ['dim3'], False)
TESTS = [VECTOR_SUM, DIM3]

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CUDA_EXAMPLES_DIR, CUDA_TEST_DIR,
                          CONFIG)
