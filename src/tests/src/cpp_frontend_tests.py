"""
Frontend tests for C++ examples, designed to stress the parsing and
transformation features of chimes.
"""
import os
import sys
from common import FrontendTest, run_frontend_test, parse_argv, \
                   CHIMES_HOME, construct_simple_frontend_test, \
                   get_platform_directory
from shared_frontend_tests import ALL_RODINIA_TESTS, ALL_SPEC_TESTS

COMPILE_SCRIPT = CHIMES_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'
CPP_TEST_DIR = CHIMES_HOME + '/src/tests/frontend/' + \
               get_platform_directory() + '/cpp'

PASS_BY_REF = FrontendTest('PassByRef', ['pass_by_ref.cpp'], 'pass_by_ref', True)
NOCHECKPOINT_ATTR = FrontendTest('NoCheckpointAttr', ['nocheckpoint_attr.cpp'],
                                 'nocheckpoint_attr', True)
SIMPLE_TESTS = ['func_ptr_as_arg.cpp',
                'if_braces.cpp',
                'if_else_braces.cpp',
                'if_elif_else_braces.cpp',
                'if_elif_braces.cpp',
                'func_ptr.cpp',
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
                     'iso2d', False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])
ISO3D = FrontendTest('Iso3D',
                     ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'],
                     'iso3d', False,
                     includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                     dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                                'libcommon2d.so')])
SMITH_WATERMAN = FrontendTest('SmithWaterman',
                              ['smithWaterman/smith_waterman.cpp'],
                              'smith_waterman', False)
LULESH = FrontendTest('Lulesh', ['lulesh/LULESH.cc'],
                      'lulesh', False, extra_cli_args='-s -y -O0')
COMD = FrontendTest('CoMD',
                    ['src-mpi/CoMD.c', 'src-mpi/decomposition.c',
                     'src-mpi/haloExchange.c', 'src-mpi/linkCells.c',
                     'src-mpi/mycommand.c',
                     'src-mpi/performanceTimers.c',
                     'src-mpi/timestep.c', 'src-mpi/cmdLineParser.c',
                     'src-mpi/eam.c', 'src-mpi/initAtoms.c',
                     'src-mpi/ljForce.c', 'src-mpi/parallel.c',
                     'src-mpi/random.c', 'src-mpi/yamlOutput.c'],
                     'CoMD', False, src_folder='CoMD')
UTS = FrontendTest('UTS', ['rng/brg_sha1.c', 'uts.c', 'uts_shm.c'], 'uts',
                   False, src_folder='uts', extra_cli_args='-s -D BRG_RNG')
RAY_TRACER = FrontendTest('RayTracer', ['ray_tracer.c'],
                          'ray_tracer', False, extra_cli_args='-s')

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

TESTS.extend(ALL_RODINIA_TESTS)

TESTS.extend(ALL_SPEC_TESTS)


# Imagick has some weird stuff in it, not sure if we can support it easily
# SPEC_IMAGICK_ROOT = os.path.join(SPEC_HOME, 'benchspec', 'OMP2012',
#                                  '367.imagick', 'src')
# SPEC_IMAGICK_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
#                       SPEC_IMAGICK_ROOT
# SPEC_IMAGICK_SRC = [f for f in os.listdir(SPEC_IMAGICK_ROOT) if \
#                     os.path.isfile(os.path.join(SPEC_IMAGICK_ROOT, f)) and \
#                             f != 'utilities_convert.c']
# SPEC_IMAGICK = FrontendTest('SPECImagick', SPEC_IMAGICK_SRC, 'spec-imagick',
#                             True, src_folder=SPEC_IMAGICK_ROOT,
#                             extra_cli_args=SPEC_IMAGICK_CUSTOM)

if __name__ == '__main__':
    CONFIG = parse_argv(sys.argv)
    CONFIG.set_force_sequential()

    for t in TESTS:
        run_frontend_test(t, COMPILE_SCRIPT, CPP_EXAMPLES_DIR, CPP_TEST_DIR,
                          CONFIG)
