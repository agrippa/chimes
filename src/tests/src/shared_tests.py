#!/usr/bin/python
import os
from os import path
import sys
from common import FrontendTest, RuntimeTest, CHIMES_HOME

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'

# Rodinia benchmarks
RODINIA_HOME = os.environ['RODINIA_HOME']
RODINIA_DATA = path.join(RODINIA_HOME, 'data')
RODINIA_TESTS = ['backprop', 'bfs', 'b+tree', 'heartwall', 'hotspot',
                 'kmeans', 'lavaMD', 'lud', 'myocyte',
                 'nn', 'nw', 'particlefilter', 'srad']
RODINIA_CLI_ARGS = {'backprop': '65536',
                    'bfs': '4 ' + path.join(RODINIA_DATA, 'bfs/graph1MW_6.txt'),
                    'b+tree': 'core 2 file ' + path.join(RODINIA_DATA,
                                                         'b+tree/mil.txt') + \
                              ' command ' + path.join(RODINIA_DATA,
                                                      'b+tree/command.txt'),
                    'heartwall': path.join(RODINIA_DATA,
                                           'heartwall/test.avi') + ' 20 4',
                    'hotspot': '512 512 2 4 ' + path.join(RODINIA_DATA,
                                                          'hotspot/temp_512') + \
                               ' ' + path.join(RODINIA_DATA,
                                               'hotspot/power_512'),
                    'kmeans': '-n 4 -i ' + path.join(RODINIA_DATA,
                                                     'kmeans/kdd_cup'),
                    'lavaMD': '-cores 4 -boxes1d 10',
                    'leukocyte': '5 4 ' + \
                                        path.join(RODINIA_DATA,
                                                  'leukocyte/testfile.avi'),
                    'lud': '-i ' + path.join(RODINIA_DATA, 'lud/512.dat'),
                    'myocyte': '100 1 0 4',
                    'nn': path.join(RODINIA_HOME, 'openmp', 'nn',
                                    'filelist_4') + ' 5 30 90',
                    'nw': '2048 10 2',
                    'particlefilter': '-x 128 -y 128 -z 10 -np 100',
                    'srad': '100 0.5 502 458 4'}
EXCLUDED_FILES={'lud': ['omp/lud.c', 'omp/lud_omp.c', 'gen_input.c'],
                'nn': ['hurricane_gen.c'],
                'srad': ['srad_v2/srad.cpp']}
# Just for future reference.
#   1. cfd uses C++ constructs that i don't support yet
#   2. mummergpu uses CUDA
#   3. pathfinder uses C++
#   3. streamcluster uses C++
#   4. leukocyte uses function calls within defines. This seems to break
#      everything, as the function call location is set at column 0 from LLVM.
EXCLUDED_RODINIA_TEST = ['cfd', 'mummergpu', 'pathfinder', 'streamcluster',
                         'leukocyte']
ALL_RODINIA_FRONTEND_TESTS = []
ALL_RODINIA_RUNTIME_TESTS = []
for rtest in RODINIA_TESTS:
    test_path = path.join(RODINIA_HOME, 'openmp', rtest)
    test_name = 'Rodinia' + rtest.replace('/', '').capitalize()

    source_files = []
    for root, dirnames, filenames in os.walk(test_path):
        for filename in filenames:
            full_path = path.join(root, filename)
            is_source = filename.endswith('.c') or filename.endswith('.cpp')

            is_included = True
            if rtest in EXCLUDED_FILES:
                for excluded in EXCLUDED_FILES[rtest]:
                    if full_path.endswith(excluded):
                        is_included = False
                        break

            if is_source and is_included:
                source_files.append(full_path)

    compilation_args = '-D ANSI_C'

    if rtest == 'leukocyte':
        compilation_args += ' -I ' + path.join(RODINIA_HOME, 'openmp',
                                                 'leukocyte', 'meschach_lib')
        # compilation_args += ' -x ' + path.join(RODINIA_HOME, 'openmp',
        #                                          'leukocyte', 'meschach_lib',
        #                                          'libmeschach.a')
    elif rtest == 'lud':
        compilation_args += ' -I ' + path.join(RODINIA_HOME, 'openmp', 'lud',
                                                  'common')

    frontend_test_obj = FrontendTest(test_name, source_files,
                            'rodinia-' + rtest.replace('/', ''),
                            False, src_folder='/',
                            extra_cli_args=compilation_args)
    ALL_RODINIA_FRONTEND_TESTS.append(frontend_test_obj)
    runtime_test_obj = RuntimeTest(test_name, source_files, 0, -1,
                                   src_folder='/',
                                   extra_compile_args=compilation_args,
                                   cli_args=RODINIA_CLI_ARGS[rtest])
    ALL_RODINIA_RUNTIME_TESTS.append(runtime_test_obj)

# SPEC tests
SPEC_HOME = os.environ['SPEC_HOME']
ALL_SPEC_FRONTEND_TESTS = []
ALL_SPEC_RUNTIME_TESTS = []

SPEC_BOTSALGN_ROOT = path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                  '358.botsalgn', 'src')
SPEC_BOTSALGN_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                       SPEC_BOTSALGN_ROOT + '/common -I ' + \
                       SPEC_BOTSALGN_ROOT + '/omp-tasks/alignment/alignment_for'
SPEC_BOTSALGN_FRONTEND = FrontendTest('SPECBotsAlgn',
                             ['common/bots_common.c','common/bots_main.c',
                              'omp-tasks/alignment/alignment_for/alignment.c',
                              'omp-tasks/alignment/alignment_for/sequence.c'],
                             'spec-botsalgn', True,
                             src_folder=SPEC_BOTSALGN_ROOT,
                             extra_cli_args=SPEC_BOTSALGN_CUSTOM)
# ../bin/runspec --config=davinci.cfg --size=ref --noreportable --tune=base \
#                --iterations=1 --threads=12 botsalgn --verbose=1000 &> log
SPEC_BOTSALGN_RUNTIME = RuntimeTest(SPEC_BOTSALGN_FRONTEND.name,
                                    SPEC_BOTSALGN_FRONTEND.input_files, 0, -1,
                                    src_folder=SPEC_BOTSALGN_FRONTEND.src_folder,
                                    extra_compile_args=SPEC_BOTSALGN_FRONTEND.extra_cli_args,
                                    cli_args='-f ' + path.join(SPEC_BOTSALGN_ROOT, '..',
                                                       'run', 'run_base_test_davinci.0000',
                                                       'botsalgn'))
ALL_SPEC_FRONTEND_TESTS.append(SPEC_BOTSALGN_FRONTEND)
ALL_SPEC_RUNTIME_TESTS.append(SPEC_BOTSALGN_RUNTIME)

SPEC_BOTSSPAR_ROOT = path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                  '359.botsspar', 'src')
SPEC_BOTSSPAR_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                       SPEC_BOTSSPAR_ROOT + '/common -I ' + \
                       SPEC_BOTSSPAR_ROOT + '/omp-tasks/sparselu/sparselu_single'
SPEC_BOTSSPAR_FRONTEND = FrontendTest('SPECBotsSpar',
                             ['common/bots_common.c', 'common/bots_main.c',
                              'omp-tasks/sparselu/sparselu_single/sparselu.c'],
                             'spec-botsspar', True,
                             src_folder=SPEC_BOTSSPAR_ROOT,
                             extra_cli_args=SPEC_BOTSSPAR_CUSTOM)
SPEC_BOTSSPAR_RUNTIME = RuntimeTest(SPEC_BOTSSPAR_FRONTEND.name,
                                    SPEC_BOTSSPAR_FRONTEND.input_files, 0, -1,
                                    src_folder=SPEC_BOTSSPAR_FRONTEND.src_folder,
                                    extra_compile_args=SPEC_BOTSSPAR_FRONTEND.extra_cli_args,
                                    cli_args='-n 50 -m 25')
ALL_SPEC_FRONTEND_TESTS.append(SPEC_BOTSSPAR_FRONTEND)
ALL_SPEC_RUNTIME_TESTS.append(SPEC_BOTSSPAR_RUNTIME)

SPEC_SMITHWA_ROOT = path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                  '372.smithwa', 'src')
SPEC_SMITHWA_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                      SPEC_SMITHWA_ROOT
SPEC_SMITHWA_FRONTEND = FrontendTest('SPECSmithwa',
                            ['dispElapsedTime.c', 'genScalData.c',
                             'genSimMatrix.c', 'getUserParameters.c',
                             'mergeAlignment.c', 'pairwiseAlign.c',
                             'scanBackward.c', 'sequenceAlignment.c',
                             'specrand.c', 'verifyAlignment.c', 'verifyData.c',
                             'verifyMergeAlignment.c'], 'spec-smithwa', True,
                            src_folder=SPEC_SMITHWA_ROOT,
                            extra_cli_args=SPEC_SMITHWA_CUSTOM)
SPEC_SMITHWA_RUNTIME = RuntimeTest(SPEC_SMITHWA_FRONTEND.name,
                                    SPEC_SMITHWA_FRONTEND.input_files, 0, -1,
                                    src_folder=SPEC_SMITHWA_FRONTEND.src_folder,
                                    extra_compile_args=SPEC_SMITHWA_FRONTEND.extra_cli_args,
                                    cli_args='30')
ALL_SPEC_FRONTEND_TESTS.append(SPEC_SMITHWA_FRONTEND)
ALL_SPEC_RUNTIME_TESTS.append(SPEC_SMITHWA_RUNTIME)

SPEC_KDTREE_ROOT = path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                '376.kdtree', 'src')
SPEC_KDTREE_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                      SPEC_KDTREE_ROOT
SPEC_KDTREE_FRONTEND = FrontendTest('SPECKDTree', ['specrand.c', 'kdtree.cc'],
                           'spec-kdtree', True, src_folder=SPEC_KDTREE_ROOT,
                           extra_cli_args=SPEC_KDTREE_CUSTOM)
SPEC_KDTREE_RUNTIME = RuntimeTest(SPEC_KDTREE_FRONTEND.name,
                                  SPEC_KDTREE_FRONTEND.input_files, 0, -1,
                                  src_folder=SPEC_KDTREE_FRONTEND.src_folder,
                                  extra_compile_args=SPEC_KDTREE_FRONTEND.extra_cli_args,
                                  cli_args='100000 10 2')
ALL_SPEC_FRONTEND_TESTS.append(SPEC_KDTREE_FRONTEND)
ALL_SPEC_RUNTIME_TESTS.append(SPEC_KDTREE_RUNTIME)

# Miscellaneous tests

MISC_CPP_RUNTIME_TESTS = []
ISO3D = RuntimeTest('Iso3D',
                    ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'], 0, -1,
                    includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                    dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                               'libcommon2d.so')],
                    cli_args='-i 3')
SMITH_WATERMAN = RuntimeTest('SmithWaterman',
                             ['smithWaterman/smith_waterman.cpp'], 0, -1,
                             cli_args='20 20 2')
LULESH = RuntimeTest('Lulesh', ['lulesh/LULESH.cc'], 0, -1, cli_args='1',
                     extra_compile_args='-y -O0')
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
                  0, -1, cli_args='-t 2 -d 2', defines=['BRG_RNG'])
MISC_CPP_RUNTIME_TESTS.append(ISO3D)
MISC_CPP_RUNTIME_TESTS.append(SMITH_WATERMAN)
MISC_CPP_RUNTIME_TESTS.append(LULESH)
MISC_CPP_RUNTIME_TESTS.append(COMD)
MISC_CPP_RUNTIME_TESTS.append(UTS)

MISC_OMP_RUNTIME_TESTS = []
ISO3D_OMP = RuntimeTest('Iso3D',
                    ['iso3d.cpp', 'lib/common.cpp', 'lib/common3d.cpp'], 0, -1,
                    includes=[os.path.join(CPP_EXAMPLES_DIR, 'include')],
                    dependencies=[os.path.join(CPP_EXAMPLES_DIR, 'lib',
                                               'libcommon2d.so')],
                    cli_args='-i 10')
SMITH_WATERMAN_OMP = RuntimeTest('SmithWaterman-OMP',
                             ['smithWaterman/smith_waterman_omp.cpp'], 0, -1,
                             cli_args='12 12 1 1')
LULESH_OMP = RuntimeTest('Lulesh-OMP', ['lulesh/LULESH_OMP.cc'], 0, -1,
                         cli_args='1', extra_compile_args='-y -O0')
COMD_OMP = RuntimeTest('CoMD', ['CoMD/src-openmp/CoMD.c', 'CoMD/src-openmp/decomposition.c',
                     'CoMD/src-openmp/haloExchange.c', 'CoMD/src-openmp/linkCells.c',
                     'CoMD/src-openmp/mycommand.c',
                     'CoMD/src-openmp/performanceTimers.c',
                     'CoMD/src-openmp/timestep.c', 'CoMD/src-openmp/cmdLineParser.c',
                     'CoMD/src-openmp/eam.c', 'CoMD/src-openmp/initAtoms.c',
                     'CoMD/src-openmp/ljForce.c', 'CoMD/src-openmp/parallel.c',
                     'CoMD/src-openmp/random.c', 'CoMD/src-openmp/yamlOutput.c'],
                     0, -1, cli_args='-N 1 -x 12 -y 12 -z 12')
UTS_OMP = RuntimeTest('UTS', ['uts/rng/brg_sha1.c', 'uts/uts.c', 'uts/uts_shm.c'],
                  0, -1, cli_args='-t 2 -d 2', defines=['BRG_RNG'])
MISC_OMP_RUNTIME_TESTS.append(ISO3D_OMP)
MISC_OMP_RUNTIME_TESTS.append(SMITH_WATERMAN_OMP)
MISC_OMP_RUNTIME_TESTS.append(LULESH_OMP)
MISC_OMP_RUNTIME_TESTS.append(COMD_OMP)
MISC_OMP_RUNTIME_TESTS.append(UTS_OMP)

PERF_CLI_ARGS = {'Iso3D': '-x 1024 -y 1024 -z 256 -i 20',
                 'SmithWaterman': '1204000 7000 700',
                 'SmithWaterman-OMP': '1204000 7000 12040 700',
                 'Lulesh': '20',
                 'Lulesh-OMP': '50',
                 'CoMD': '-N 10 -x 100 -y 20 -z 20',
                 'UTS': '-t 1 -g 20 -b 1.8 -d 80',
                 'RodiniaBackprop':       '65536',
                 'RodiniaBfs':            '4 ' + path.join(RODINIA_DATA, 'bfs/graph1MW_6.txt'),
                 'RodiniaB+tree':         'core 2 file ' + path.join(RODINIA_DATA,
                                                                     'b+tree/mil.txt') + \
                                          ' command ' + path.join(RODINIA_DATA,
                                                                  'b+tree/command.txt'),
                 'RodiniaHeartwall':      path.join(RODINIA_DATA,
                                                'heartwall/test.avi') + ' 20 4',
                 'RodiniaHotspot':        '512 512 2 4 ' + path.join(RODINIA_DATA,
                                                                     'hotspot/temp_512') + \
                                          ' ' + path.join(RODINIA_DATA,
                                                          'hotspot/power_512'),
                 'RodiniaKmeans':         '-n 4 -i ' + path.join(RODINIA_DATA,
                                                                 'kmeans/kdd_cup'),
                 'RodiniaLavamd':         '-cores 4 -boxes1d 10',
                 'RodiniaLud':            '-i ' + path.join(RODINIA_DATA, 'lud/512.dat'),
                 'RodiniaMyocyte':        '100 1 0 4',
                 'RodiniaNn':             path.join(RODINIA_HOME, 'openmp', 'nn',
                                                    'filelist_4') + ' 5 30 90',
                 'RodiniaNw':             '2048 10 2',
                 'RodiniaParticlefilter': '-x 128 -y 128 -z 10 -np 100',
                 'RodiniaSrad':           '100 0.5 502 458 4',
                 'SPECBotsAlgn':          '-f ' + path.join(SPEC_BOTSALGN_ROOT, '..',
                                                            'run', 'run_base_test_davinci.0000',
                                                            'botsalgn'),
                 'SPECBotsSpar':          '-n 50 -m 25',
                 'SPECSmithwa':           '30',
                 'SPECKDTree':            '100000 10 2'
                }

