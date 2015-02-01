"""
Frontend tests for CUDA examples, designed to stress the parsing and
transformation features of numdebug.
"""
import sys
from common import FrontendTest, run_frontend_test, parse_argv, NUM_DEBUG_HOME

VECTOR_SUM = FrontendTest('VectorSum', ['vector_sum.cu'],
                          ['vector_sum.cudafe1.register.cpp'], ['vector_sum'],
                          False)
TESTS = [VECTOR_SUM]

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cuda.sh'
CUDA_EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples/cuda'
CUDA_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/frontend/cuda'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CUDA_EXAMPLES_DIR, CUDA_TEST_DIR,
                          CONFIG)
