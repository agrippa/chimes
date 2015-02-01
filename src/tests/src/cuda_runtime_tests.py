"""
Runtime tests for CUDA examples, designed to stress the checkpointing and
restore functionality of the numdebug runtime.
"""
import sys
from common import RuntimeTest, parse_argv, NUM_DEBUG_HOME, run_runtime_test, \
         cleanup_runtime_files

BASIC = RuntimeTest('Basic', 'basic.cu', 0, 1)
KERNEL = RuntimeTest('Kernel', 'kernel.cu', 0, 10)
TESTS = [BASIC, KERNEL]

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cuda.sh'
CPP_INPUTS_DIR = NUM_DEBUG_HOME + '/src/tests/runtime/cuda'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    cleanup_runtime_files()

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, CPP_INPUTS_DIR, CONFIG)
