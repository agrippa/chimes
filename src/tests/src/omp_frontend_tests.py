"""
Frontend tests for OpenMP examples, designed to stress the parsing and
transformation features of chimes.
"""
import os
import sys
from common import run_frontend_test, parse_argv, \
                   CHIMES_HOME, construct_simple_frontend_test, find_file, \
                   get_platform_directory, FrontendTest

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
OMP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/openmp'
COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
OMP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/openmp'
OMP_TEST_DIR = CHIMES_HOME + '/src/tests/frontend/' + \
               get_platform_directory() + '/openmp'
OMP_H = find_file('omp.h', '/usr/')

SIMPLE_TESTS = ['basic_parallel.cpp', 'nested_parallel.cpp', 'for_parallel.cpp']
COMD_OMP = FrontendTest('CoMD-OMP',
                    ['CoMD/src-openmp/CoMD.c', 'CoMD/src-openmp/decomposition.c',
                     'CoMD/src-openmp/haloExchange.c', 'CoMD/src-openmp/linkCells.c',
                     'CoMD/src-openmp/mycommand.c',
                     'CoMD/src-openmp/performanceTimers.c',
                     'CoMD/src-openmp/timestep.c', 'CoMD/src-openmp/cmdLineParser.c',
                     'CoMD/src-openmp/eam.c', 'CoMD/src-openmp/initAtoms.c',
                     'CoMD/src-openmp/ljForce.c', 'CoMD/src-openmp/parallel.c',
                     'CoMD/src-openmp/random.c', 'CoMD/src-openmp/yamlOutput.c'],
                    ['CoMD-openmp/CoMD.c.pre.transformed.cpp',
                     'CoMD-openmp/decomposition.c.pre.transformed.cpp',
                     'CoMD-openmp/haloExchange.c.pre.transformed.cpp',
                     'CoMD-openmp/linkCells.c.pre.transformed.cpp',
                     'CoMD-openmp/mycommand.c.pre.transformed.cpp',
                     'CoMD-openmp/performanceTimers.c.pre.transformed.cpp',
                     'CoMD-openmp/timestep.c.pre.transformed.cpp',
                     'CoMD-openmp/cmdLineParser.c.pre.transformed.cpp',
                     'CoMD-openmp/eam.c.pre.transformed.cpp',
                     'CoMD-openmp/initAtoms.c.pre.transformed.cpp',
                     'CoMD-openmp/ljForce.c.pre.transformed.cpp',
                     'CoMD-openmp/parallel.c.pre.transformed.cpp',
                     'CoMD-openmp/random.c.pre.transformed.cpp',
                     'CoMD-openmp/yamlOutput.c.pre.transformed.cpp'],
                    ['CoMD-openmp/CoMD', 'CoMD-openmp/decomposition', 'CoMD-openmp/haloExchange',
                     'CoMD-openmp/linkCells', 'CoMD-openmp/mycommand',
                     'CoMD-openmp/performanceTimers', 'CoMD-openmp/timestep',
                     'CoMD-openmp/cmdLineParser', 'CoMD-openmp/eam', 'CoMD-openmp/initAtoms',
                     'CoMD-openmp/ljForce', 'CoMD-openmp/parallel', 'CoMD-openmp/random',
                     'CoMD-openmp/yamlOutput'], False, includes=[os.path.dirname(OMP_H)])
LULESH_OMP = FrontendTest('Lulesh-OMP', ['lulesh/LULESH_OMP.cc'],
                      ['LULESH_OMP.cc.pre.transformed.cpp'], ['lulesh'], False)
ISO3D = FrontendTest('Iso3D-OMP',
                     ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'],
                     ['iso3d.cpp.pre.transformed.cpp',
                      'common.cpp.pre.transformed.cpp',
                      'common3d.cpp.pre.transformed.cpp'],
                     ['iso3d', 'common', 'common3d'],
                     False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(OMP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])
SMITH_WATERMAN_OMP = FrontendTest('SmithWaterman-OMP',
                                  ['smithWaterman/smith_waterman_omp.cpp'],
                                  ['smith_waterman_omp.cpp.pre.transformed.cpp'],
                                  ['smith_waterman'],
                                  False)
UTS_OMP = FrontendTest('UTS-OMP', ['uts/rng/brg_sha1.c', 'uts/uts.c', 'uts/uts_shm.c'],
                   ['brg_sha1.c.pre.transformed.cpp',
                    'uts.c.pre.transformed.cpp',
                    'uts_shm.c.pre.transformed.cpp'],
                   ['brg_sha1', 'uts', 'uts_shm'], False, extra_cli_args='-D BRG_RNG')
RAY_TRACER_OMP = FrontendTest('RayTracer-OMP', ['ray_tracer.c'],
                              ['ray_tracer.c.pre.transformed.cpp'],
                              ['ray_tracer'], False)

TESTS = []
for simple in SIMPLE_TESTS:
    test = construct_simple_frontend_test(simple)
    test.includes = []
    test.includes.append(os.path.dirname(OMP_H))
    TESTS.append(test)
TESTS.append(COMD_OMP)
TESTS.append(LULESH_OMP)
TESTS.append(ISO3D)
TESTS.append(SMITH_WATERMAN_OMP)
TESTS.append(UTS_OMP)
TESTS.append(RAY_TRACER_OMP)


if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_custom_compiler('/usr/local/bin/g++')
    CONFIG.add_custom_compiler_flag('-fopenmp')

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, OMP_EXAMPLES_DIR, OMP_TEST_DIR,
                          CONFIG)
