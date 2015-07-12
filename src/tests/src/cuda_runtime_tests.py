"""
Runtime tests for CUDA examples, designed to stress the checkpointing and
restore functionality of the chimes runtime.
"""
import sys
from common import RuntimeTest, parse_argv, CHIMES_HOME, run_runtime_test

BASIC = RuntimeTest('Basic', ['basic.cu'], 0, 1)
KERNEL = RuntimeTest('Kernel', ['kernel.cu'], 0, 10)
INDIRECTION = RuntimeTest('Indirection', ['indirection.cu'], 0, 3)
TESTS = [BASIC, KERNEL, INDIRECTION]

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cuda.sh'
CPP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/cuda'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, CPP_INPUTS_DIR, CONFIG)
