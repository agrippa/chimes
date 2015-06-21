"""
Frontend tests for C++ examples, designed to stress the parsing and
transformation features of chimes.
"""
import os
import sys
from common import FrontendTest, run_frontend_test, parse_argv, \
                   CHIMES_HOME, construct_simple_frontend_test, \
                   get_platform_directory

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
CPP_TEST_DIR = CHIMES_HOME + '/src/tests/frontend/' + \
               get_platform_directory() + '/cpp'

PASS_BY_REF = FrontendTest('PassByRef', ['pass_by_ref.cpp'],
                           ['pass_by_ref.cpp.pre.transformed.cpp'], ['pass_by_ref'],
                           True)
NOCHECKPOINT_ATTR = FrontendTest('NoCheckpointAttr', ['nocheckpoint_attr.cpp'],
                                 ['nocheckpoint_attr.cpp.pre.transformed.cpp'],
                                 ['nocheckpoint_attr'], True)
SIMPLE_TESTS = ['func_ptr.cpp',
                'npm.cpp',
                'nested_call.cpp',
                'nested_indirect_call.cpp',
                'nested_call_complex.cpp',
                'switch.cpp',
                'braces.cpp',
                'struct.cpp',
                'simple_stencil.cpp',
                'decl_in_for.cpp',
                'func_call.cpp',
                'globals.cpp',
                'func_with_no_return.cpp',
                'func_with_two_ptr_returns.cpp',
                'func_with_one_ptr_return.cpp',
                'func_with_only_return.cpp',
                'func_with_two_void_returns.cpp',
                'cond_void_return.cpp',
                'propagation.cpp',
                'cond_ptr_return.cpp',
                'stack_array.cpp',
                'multi_line_decl.cpp',
                'calloc.cpp', 'custom_init_example.cpp',
                'call_passed_directly_to_call.cpp',
                'call_passed_indirectly_to_call.cpp']

ISO2D = FrontendTest('Iso2D',
                     ['iso2d.cpp', 'lib/common.cpp', 'lib/common2d.cpp'],
                     ['iso2d.cpp.pre.transformed.cpp',
                      'common.cpp.pre.transformed.cpp',
                      'common2d.cpp.pre.transformed.cpp'],
                     ['iso2d', 'common', 'common2d'],
                     False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])
ISO3D = FrontendTest('Iso3D',
                     ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'],
                     ['iso3d.cpp.pre.transformed.cpp',
                      'common.cpp.pre.transformed.cpp',
                      'common3d.cpp.pre.transformed.cpp'],
                     ['iso3d', 'common', 'common3d'],
                     False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])
SMITH_WATERMAN = FrontendTest('SmithWaterman',
                              ['smithWaterman/smith_waterman.cpp'],
                              ['smith_waterman.cpp.pre.transformed.cpp'],
                              ['smith_waterman'],
                              False)
LULESH = FrontendTest('Lulesh', ['lulesh/LULESH.cc'],
                      ['LULESH.cc.pre.transformed.cpp'], ['lulesh'], False,
                      extra_cli_args='-s -y -O0')
COMD = FrontendTest('CoMD',
                    ['CoMD/src-mpi/CoMD.c', 'CoMD/src-mpi/decomposition.c',
                     'CoMD/src-mpi/haloExchange.c', 'CoMD/src-mpi/linkCells.c',
                     'CoMD/src-mpi/mycommand.c',
                     'CoMD/src-mpi/performanceTimers.c',
                     'CoMD/src-mpi/timestep.c', 'CoMD/src-mpi/cmdLineParser.c',
                     'CoMD/src-mpi/eam.c', 'CoMD/src-mpi/initAtoms.c',
                     'CoMD/src-mpi/ljForce.c', 'CoMD/src-mpi/parallel.c',
                     'CoMD/src-mpi/random.c', 'CoMD/src-mpi/yamlOutput.c'],
                    ['CoMD/CoMD.c.pre.transformed.cpp',
                     'CoMD/decomposition.c.pre.transformed.cpp',
                     'CoMD/haloExchange.c.pre.transformed.cpp',
                     'CoMD/linkCells.c.pre.transformed.cpp',
                     'CoMD/mycommand.c.pre.transformed.cpp',
                     'CoMD/performanceTimers.c.pre.transformed.cpp',
                     'CoMD/timestep.c.pre.transformed.cpp',
                     'CoMD/cmdLineParser.c.pre.transformed.cpp',
                     'CoMD/eam.c.pre.transformed.cpp',
                     'CoMD/initAtoms.c.pre.transformed.cpp',
                     'CoMD/ljForce.c.pre.transformed.cpp',
                     'CoMD/parallel.c.pre.transformed.cpp',
                     'CoMD/random.c.pre.transformed.cpp',
                     'CoMD/yamlOutput.c.pre.transformed.cpp'],
                    ['CoMD/CoMD', 'CoMD/decomposition', 'CoMD/haloExchange', 'CoMD/linkCells',
                     'CoMD/mycommand', 'CoMD/performanceTimers', 'CoMD/timestep',
                     'CoMD/cmdLineParser', 'CoMD/eam', 'CoMD/initAtoms', 'CoMD/ljForce', 'CoMD/parallel',
                     'CoMD/random', 'CoMD/yamlOutput'], False)
UTS = FrontendTest('UTS', ['uts/rng/brg_sha1.c', 'uts/uts.c', 'uts/uts_shm.c'],
                   ['brg_sha1.c.pre.transformed.cpp',
                    'uts.c.pre.transformed.cpp',
                    'uts_shm.c.pre.transformed.cpp'],
                   ['brg_sha1', 'uts', 'uts_shm'], False, extra_cli_args='-s -D BRG_RNG')
RAY_TRACER = FrontendTest('RayTracer', ['ray_tracer.c'],
                          ['ray_tracer.c.pre.transformed.cpp'], ['ray_tracer'],
                          False, extra_cli_args='-s')

TESTS = [PASS_BY_REF, NOCHECKPOINT_ATTR]
for simple in SIMPLE_TESTS:
    TESTS.append(construct_simple_frontend_test(simple))
TESTS.append(ISO2D)
TESTS.append(ISO3D)
TESTS.append(SMITH_WATERMAN)
TESTS.append(LULESH)
TESTS.append(COMD)
TESTS.append(UTS)
TESTS.append(RAY_TRACER)


if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_force_sequential()

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CPP_EXAMPLES_DIR, CPP_TEST_DIR,
                          CONFIG)
