"""
Runtime tests for OMP examples, designed to stress the checkpointing and restore
functionality of the chimes runtime.
"""
import os
import sys
from common import RuntimeTest, parse_argv, CHIMES_HOME, run_runtime_test, \
         cleanup_runtime_files, find_file
from shared_tests import ALL_RODINIA_RUNTIME_TESTS, ALL_SPEC_RUNTIME_TESTS, \
         MISC_OMP_RUNTIME_TESTS

OMP_H = find_file('omp.h', '/usr/')
CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'

BASIC_PARALLEL = RuntimeTest('BasicParallel', ['basic_parallel.cpp'], 0, 1,
                             includes=[os.path.dirname(OMP_H)])
# Assertion should fail
FAIL_CHECKPOINT_IN_FOR = RuntimeTest('FailCheckpointInFor',
                                     ['fail_checkpoint_in_for.cpp'], -6, 0,
                                     includes=[os.path.dirname(OMP_H)])
PARALLEL_FOR_PIPELINE = RuntimeTest('ParallelForPipeline',
                                     ['parallel_for_pipeline.cpp'], 0, 1,
                                     includes=[os.path.dirname(OMP_H)])
RAY_TRACER_ARGS='-x 128 -y 128 -s 512,512,100,100,0.5,0.5,0.5 ' + \
                '-s 0,0,100,100,0.5,0.5,0.5 -t 10'
RAY_TRACER_OMP = RuntimeTest('RayTracer-OMP', ['ray_tracer.c'], 0, 10,
                             cli_args=RAY_TRACER_ARGS)

TESTS = [BASIC_PARALLEL, FAIL_CHECKPOINT_IN_FOR, PARALLEL_FOR_PIPELINE,
         RAY_TRACER_OMP]

for t in MISC_OMP_RUNTIME_TESTS:
    TESTS.append(t)

TESTS.extend(ALL_RODINIA_RUNTIME_TESTS)

for t in ALL_SPEC_RUNTIME_TESTS:
    t.extra_compile_args += ' -D SPEC_OMP -D SPEC_OPENMP '
TESTS.extend(ALL_SPEC_RUNTIME_TESTS)

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
OMP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/openmp'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.add_custom_compiler_flag('-fopenmp')
    cleanup_runtime_files()

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, OMP_INPUTS_DIR, CONFIG)
