"""
Runtime tests for C++ examples, designed to stress the checkpointing and restore
functionality of the chimes runtime.
"""
import os
import sys
from common import RuntimeTest, parse_argv, CHIMES_HOME, run_runtime_test, \
         cleanup_runtime_files

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'

NESTED_CALLS = RuntimeTest('NestedCalls', ['nested_calls.cpp'], 15, 2)
STACK_SCALAR = RuntimeTest('StackScalar', ['stack_scalar.cpp'], 3, 1)
STACK_STRUCT = RuntimeTest('StackStruct', ['stack_struct.cpp'], 4, 1)
STACK_ARRAY = RuntimeTest('StackArray', ['stack_array.cpp'], 44, 1)
NESTED_STACK_SCALAR = RuntimeTest('NestedStackScalar',
                                  ['nested_stack_scalar.cpp'], 5, 1)
NESTED_STACK_STRUCT = RuntimeTest('NestedStackStruct',
                                  ['nested_stack_struct.cpp'], 0, 1)
NESTED_MALLOCS = RuntimeTest('NestedMallocs',
                             ['nested_mallocs.cpp'], 0, 1)
NESTED_STRUCT_PTRS = RuntimeTest('NestedStructPtrs', ['nested_struct_ptrs.cpp'],
                                 0, 3)
ARRAY_OF_PTRS_STRUCT_MEMBER = RuntimeTest('ArrayOfPtrsStructMember',
                                          ['array_of_ptrs_struct_member.cpp'],
                                          0, 3)
VOID_PTR = RuntimeTest('VoidPtr', ['void_ptr.cpp'], 0, 2)
FUNC_PTR = RuntimeTest('FuncPtr', ['func_ptr.cpp'], 11, 1)
COMD_FREE = RuntimeTest('ComdFree', ['comd_free.cpp'], 0, 1)
COMD_FREE_COMPLEX = RuntimeTest('ComdFreeComplex', ['comd_free_complex.cpp'], 30,
                                1)
COMD_FREE_MULTI_FILE = RuntimeTest('ComdFreeMultiFile',
                                   ['comd_free_multi_file_1.cpp',
                                    'comd_free_multi_file_2.cpp'], 30, 1)
HEAP = RuntimeTest('Heap', ['heap.cpp'], 42, 1)
STRESS_HASHING = RuntimeTest('StressHashing', ['stress_hashing.cpp'], 0, 3)
HEAP_POINTERS = RuntimeTest('HeapPointers', ['heap_pointers.cpp'], 0, 1)
HEAP_INDIRECTION = RuntimeTest('HeapIndirection', ['heap_indirection.cpp'], 0, 1)
FREE = RuntimeTest('Free', ['free.cpp'], 42, 1)
REALLOC = RuntimeTest('Realloc', ['realloc.cpp'], 42, 1)
CALLOC = RuntimeTest('Calloc', ['calloc.cpp'], 42, 1)
GLOBALS = RuntimeTest('Globals', ['globals.cpp'], 7, 1)
CONSTANTS = RuntimeTest('Constants', ['constants.cpp'], 1, 1)
PARTIAL_CHECKPOINT = RuntimeTest('PartialCheckpoint', ['partial_checkpoint.cpp'], 0, 2)
SWAPPED_PTRS = RuntimeTest('SwappedPointers', ['swapped_ptrs.cpp'], 0, 2)
SWAPPED_NESTED_PTRS = RuntimeTest('SwappedNestedPointers', ['swapped_nested_ptrs.cpp'], 0, 2)
MULTI_CHECKPOINT = RuntimeTest('MultiCheckpoint', ['multi_checkpoint.cpp'], 100,
                               100)
ISO2D = RuntimeTest('Iso2D',
                    ['iso2d.cpp', 'lib/common.cpp', 'lib/common2d.cpp'], 0, -1,
                    includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                    dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                               'libcommon2d.so')],
                    cli_args='-i 10')
ISO3D = RuntimeTest('Iso3D',
                    ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'], 0, -1,
                    includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                    dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                               'libcommon2d.so')],
                    cli_args='-i 3')
SMITH_WATERMAN = RuntimeTest('SmithWaterman',
                             ['smithWaterman/smith_waterman.cpp'], 0, -1,
                             cli_args='20 20')
LULESH = RuntimeTest('Lulesh', ['lulesh/LULESH.cc'], 0, -1, cli_args='1')
COMD = RuntimeTest('CoMD',
                   ['CoMD/src-mpi/CoMD.c', 'CoMD/src-mpi/decomposition.c',
                    'CoMD/src-mpi/haloExchange.c', 'CoMD/src-mpi/linkCells.c',
                    'CoMD/src-mpi/mycommand.c',
                    'CoMD/src-mpi/performanceTimers.c',
                    'CoMD/src-mpi/timestep.c', 'CoMD/src-mpi/cmdLineParser.c',
                    'CoMD/src-mpi/eam.c', 'CoMD/src-mpi/initAtoms.c',
                    'CoMD/src-mpi/ljForce.c', 'CoMD/src-mpi/parallel.c',
                    'CoMD/src-mpi/random.c', 'CoMD/src-mpi/yamlOutput.c'], 0,
                   -1, cli_args='-N 1 -x 12 -y 12 -z 12')
UTS = RuntimeTest('UTS', ['uts/rng/brg_sha1.c', 'uts/uts.c', 'uts/uts_shm.c'],
                  0, -1, cli_args='-t 2 -d 5', defines=['BRG_RNG'])
RAY_TRACER_ARGS='-x 128 -y 128 -s 512,512,100,100,0.5,0.5,0.5 ' + \
                '-s 0,0,100,100,0.5,0.5,0.5 -t 10'
RAY_TRACER = RuntimeTest('RayTracer', ['ray_tracer.c'], 0, 10,
                         cli_args=RAY_TRACER_ARGS)

TESTS = [NESTED_CALLS, STACK_SCALAR, STACK_STRUCT, STACK_ARRAY, NESTED_STACK_SCALAR,
         NESTED_STACK_STRUCT, NESTED_MALLOCS, NESTED_STRUCT_PTRS,
         ARRAY_OF_PTRS_STRUCT_MEMBER, VOID_PTR, COMD_FREE,
         COMD_FREE_COMPLEX, COMD_FREE_MULTI_FILE, FUNC_PTR, HEAP,
         STRESS_HASHING, HEAP_POINTERS, HEAP_INDIRECTION, FREE, REALLOC, CALLOC,
         GLOBALS, CONSTANTS, PARTIAL_CHECKPOINT, SWAPPED_PTRS,
         SWAPPED_NESTED_PTRS, MULTI_CHECKPOINT, ISO2D, ISO3D, SMITH_WATERMAN,
         LULESH, COMD, UTS, RAY_TRACER]

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/cpp'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_force_sequential()
    cleanup_runtime_files()

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, CPP_INPUTS_DIR, CONFIG)
