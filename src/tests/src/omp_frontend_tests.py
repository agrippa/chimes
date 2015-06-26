"""
Frontend tests for OpenMP examples, designed to stress the parsing and
transformation features of chimes.
"""
import os
import sys
from common import run_frontend_test, parse_argv, \
                   CHIMES_HOME, construct_simple_frontend_test, find_file, \
                   get_platform_directory, FrontendTest
from shared_frontend_tests import ALL_RODINIA_TESTS, ALL_SPEC_TESTS

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
OMP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/openmp'
COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
OMP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/openmp'
OMP_TEST_DIR = CHIMES_HOME + '/src/tests/frontend/' + \
               get_platform_directory() + '/openmp'
OMP_H = find_file('omp.h', '/usr/')

SIMPLE_TESTS = ['basic_parallel.cpp', 'nested_parallel.cpp', 'for_parallel.cpp',
                'critical.cpp', 'barrier.cpp']
COMD_OMP = FrontendTest('CoMD-OMP',
                    ['src-openmp/CoMD.c', 'src-openmp/decomposition.c',
                     'src-openmp/haloExchange.c', 'src-openmp/linkCells.c',
                     'src-openmp/mycommand.c',
                     'src-openmp/performanceTimers.c',
                     'src-openmp/timestep.c', 'src-openmp/cmdLineParser.c',
                     'src-openmp/eam.c', 'src-openmp/initAtoms.c',
                     'src-openmp/ljForce.c', 'src-openmp/parallel.c',
                     'src-openmp/random.c', 'src-openmp/yamlOutput.c'],
                    'CoMD-openmp', False, src_folder='CoMD',
                    includes=[os.path.dirname(OMP_H)])
LULESH_OMP = FrontendTest('Lulesh-OMP', ['lulesh/LULESH_OMP.cc'],
                      'lulesh', False, extra_cli_args='-y -O0')
ISO3D = FrontendTest('Iso3D-OMP',
                     ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'],
                     'iso3d', False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(OMP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])
SMITH_WATERMAN_OMP = FrontendTest('SmithWaterman-OMP',
                                  ['smithWaterman/smith_waterman_omp.cpp'],
                                  'smith_waterman', False)
UTS_OMP = FrontendTest('UTS-OMP', ['rng/brg_sha1.c', 'uts.c', 'uts_shm.c'],
                       'uts', False, src_folder='uts',
                       extra_cli_args='-D BRG_RNG')
RAY_TRACER_OMP = FrontendTest('RayTracer-OMP', ['ray_tracer.c'],
                              'ray_tracer', False)

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

for t in ALL_RODINIA_TESTS:
    t.extra_cli_args += ' -D SPEC_OMP -D SPEC_OPENMP '
TESTS.extend(ALL_RODINIA_TESTS)

for t in ALL_SPEC_TESTS:
    t.extra_cli_args += ' -D SPEC_OMP -D SPEC_OPENMP '
TESTS.extend(ALL_SPEC_TESTS)

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.add_custom_compiler_flag('-fopenmp')

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, OMP_EXAMPLES_DIR, OMP_TEST_DIR,
                          CONFIG)
