#!/usr/bin/python
import os
from os import path
import sys
from common import FrontendTest, RuntimeTest

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
