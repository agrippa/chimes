"""
Runtime tests for OMP examples, designed to stress the checkpointing and restore
functionality of the chimes runtime.
"""
import os
import sys
from common import RuntimeTest, parse_argv, CHIMES_HOME, run_runtime_test, \
         cleanup_runtime_files, find_file, set_custom_compiler

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
ISO3D_OMP = RuntimeTest('Iso3D-OMP',
                    ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'], 0, -1,
                    includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                    dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                               'libcommon2d.so')],
                    cli_args='-i 10')
SMITH_WATERMAN_OMP = RuntimeTest('SmithWaterman-OMP',
                             ['smithWaterman/smith_waterman_omp.cpp'], 0, -1,
                             cli_args='12 12 1 1')
LULESH_OMP = RuntimeTest('Lulesh-OMP', ['lulesh/LULESH_OMP.cc'], 0, -1, cli_args='1')
COMD_OMP = RuntimeTest('CoMD-OMP', ['CoMD/src-openmp/CoMD.c', 'CoMD/src-openmp/decomposition.c',
                     'CoMD/src-openmp/haloExchange.c', 'CoMD/src-openmp/linkCells.c',
                     'CoMD/src-openmp/mycommand.c',
                     'CoMD/src-openmp/performanceTimers.c',
                     'CoMD/src-openmp/timestep.c', 'CoMD/src-openmp/cmdLineParser.c',
                     'CoMD/src-openmp/eam.c', 'CoMD/src-openmp/initAtoms.c',
                     'CoMD/src-openmp/ljForce.c', 'CoMD/src-openmp/parallel.c',
                     'CoMD/src-openmp/random.c', 'CoMD/src-openmp/yamlOutput.c'],
                     0, -1, cli_args='-N 1 -x 12 -y 12 -z 12')
UTS_OMP = RuntimeTest('UTS-OMP', ['uts/rng/brg_sha1.c', 'uts/uts.c', 'uts/uts_shm.c'],
                  0, -1, cli_args='-t 2 -d 5', defines=['BRG_RNG'])
RAY_TRACER_ARGS='-x 128 -y 128 -s 512,512,100,100,0.5,0.5,0.5 ' + \
                '-s 0,0,100,100,0.5,0.5,0.5 -t 10'
RAY_TRACER_OMP = RuntimeTest('RayTracer-OMP', ['ray_tracer.c'], 0, 10,
                             cli_args=RAY_TRACER_ARGS)

TESTS = [BASIC_PARALLEL, FAIL_CHECKPOINT_IN_FOR, PARALLEL_FOR_PIPELINE,
         LULESH_OMP, COMD_OMP, SMITH_WATERMAN_OMP, ISO3D_OMP, UTS_OMP,
         RAY_TRACER_OMP]

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
OMP_INPUTS_DIR = CHIMES_HOME + '/src/tests/runtime/openmp'

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    set_custom_compiler(CONFIG)
    CONFIG.add_custom_compiler_flag('-fopenmp')
    cleanup_runtime_files()

    for t in TESTS:
        run_runtime_test(t, COMPILE_SCRIPT, OMP_INPUTS_DIR, CONFIG)
