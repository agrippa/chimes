"""
Runtime tests for C++ examples, designed to stress the checkpointing and restore
functionality of the chimes runtime.
"""
import os
import sys
from common import RuntimeTest, parse_argv, CHIMES_HOME, run_runtime_test, \
         cleanup_runtime_files

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'

STACK_SCALAR = RuntimeTest('StackScalar', ['stack_scalar.cpp'], 3, 1)
STACK_STRUCT = RuntimeTest('StackStruct', ['stack_struct.cpp'], 4, 1)
STACK_ARRAY = RuntimeTest('StackArray', ['stack_array.cpp'], 44, 1)
NESTED_STACK_SCALAR = RuntimeTest('NestedStackScalar',
                                  ['nested_stack_scalar.cpp'], 5, 1)
NESTED_STACK_STRUCT = RuntimeTest('NestedStackStruct',
                                  ['nested_stack_struct.cpp'], 0, 1)
NESTED_MALLOCS = RuntimeTest('NestedMallocs',
                             ['nested_mallocs.cpp'], 0, 1)
FUNC_PTR = RuntimeTest('FuncPtr', ['func_ptr.cpp'], 11, 1)
COMD_FREE = RuntimeTest('ComdFree', ['comd_free.cpp'], 0, 1)
COMD_FREE_COMPLEX = RuntimeTest('ComdFreeComplex', ['comd_free_complex.cpp'], 30,
                                1)
COMD_FREE_MULTI_FILE = RuntimeTest('ComdFreeMultiFile',
                                   ['comd_free_multi_file_1.cpp',
                                    'comd_free_multi_file_2.cpp'], 30, 1)
HEAP = RuntimeTest('Heap', ['heap.cpp'], 42, 1)
HEAP_POINTERS = RuntimeTest('HeapPointers', ['heap_pointers.cpp'], 0, 1)
HEAP_INDIRECTION = RuntimeTest('HeapIndirection', ['heap_indirection.cpp'], 0, 1)
FREE = RuntimeTest('Free', ['free.cpp'], 42, 1)
REALLOC = RuntimeTest('Realloc', ['realloc.cpp'], 42, 1)
CALLOC = RuntimeTest('Calloc', ['calloc.cpp'], 42, 1)
GLOBALS = RuntimeTest('Globals', ['globals.cpp'], 7, 1)
MULTI_CHECKPOINT = RuntimeTest('MultiCheckpoint', ['multi_checkpoint.cpp'], 100,
                               100)
ISO2D = RuntimeTest('Iso2D',
                    ['iso2d.cpp', 'lib/common.cpp', 'lib/common2d.cpp'], 0, 1,
                    includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                    dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                               'libcommon2d.so')],
                    cli_args='-i 1')
ISO3D = RuntimeTest('Iso3D',
                    ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'], 0, 1,
                    includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                    dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                               'libcommon2d.so')],
                    cli_args='-i 1')
SMITH_WATERMAN_ARGS=CHIMES_HOME + \
                    '/src/tests/runtime/cpp/smithWaterman/string1.txt ' + \
                    CHIMES_HOME + \
                    '/src/tests/runtime/cpp/smithWaterman/string2.txt ' + \
                    '1 1'
SMITH_WATERMAN = RuntimeTest('SmithWaterman',
                             ['smithWaterman/smith_waterman.cpp'], 0, -1,
                             cli_args=SMITH_WATERMAN_ARGS)

TESTS = [STACK_SCALAR, STACK_STRUCT, STACK_ARRAY, NESTED_STACK_SCALAR,
         NESTED_STACK_STRUCT, NESTED_MALLOCS, COMD_FREE, COMD_FREE_COMPLEX,
         COMD_FREE_MULTI_FILE, FUNC_PTR, HEAP, HEAP_POINTERS, HEAP_INDIRECTION,
         FREE, REALLOC, CALLOC, GLOBALS, MULTI_CHECKPOINT, ISO2D, ISO3D, SMITH_WATERMAN]

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/cpp'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    cleanup_runtime_files()

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, CPP_INPUTS_DIR, CONFIG)
