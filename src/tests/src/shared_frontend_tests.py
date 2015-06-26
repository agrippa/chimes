#!/usr/bin/python
import os
import sys
from common import FrontendTest

# Rodinia benchmarks
RODINIA_HOME = os.environ['RODINIA_HOME']
RODINIA_TESTS = ['backprop', 'bfs', 'b+tree', 'heartwall', 'hotspot',
                 'kmeans', 'lavaMD', 'leukocyte/OpenMP', 'lud', 'myocyte',
                 'nn', 'nw', 'particlefilter', 'srad']
EXCLUDED_FILES={'lud': ['omp/lud.c', 'omp/lud_omp.c', 'gen_input.c'],
                'nn': ['hurricane_gen.c'],
                'srad': ['srad_v2/srad.cpp']}
# Just for future reference.
#   1. cfd uses C++ constructs that i don't support yet
#   2. mummergpu uses CUDA
#   3. pathfinder uses C++
#   3. streamcluster uses C++
EXCLUDED_RODINIA_TEST = ['cfd', 'mummergpu', 'pathfinder', 'streamcluster']
ALL_RODINIA_TESTS = []
for rtest in RODINIA_TESTS:
    test_path = os.path.join(RODINIA_HOME, 'openmp', rtest)
    test_name = 'Rodinia' + rtest.replace('/', '').capitalize()

    source_files = []
    for root, dirnames, filenames in os.walk(test_path):
        for filename in filenames:
            full_path = os.path.join(root, filename)
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

    if rtest == 'leukocyte/OpenMP':
        compilation_args += ' -I ' + os.path.join(RODINIA_HOME, 'openmp',
                                                 'leukocyte', 'meschach_lib')
        compilation_args += ' -x ' + os.path.join(RODINIA_HOME, 'openmp',
                                                 'leukocyte', 'meschach_lib',
                                                 'libmeschach.a')
    elif rtest == 'lud':
        compilation_args += ' -I ' + os.path.join(RODINIA_HOME, 'openmp', 'lud',
                                                  'common')

    test_obj = FrontendTest(test_name, source_files, 'rodinia-' + rtest.replace('/', ''),
                            False, src_folder='/',
                            extra_cli_args=compilation_args)
    ALL_RODINIA_TESTS.append(test_obj)

# SPEC tests
SPEC_HOME = os.environ['SPEC_HOME']
ALL_SPEC_TESTS = []

SPEC_BOTSALGN_ROOT = os.path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                  '358.botsalgn', 'src')
SPEC_BOTSALGN_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                       SPEC_BOTSALGN_ROOT + '/common -I ' + \
                       SPEC_BOTSALGN_ROOT + '/omp-tasks/alignment/alignment_for'
SPEC_BOTSALGN = FrontendTest('SPECBotsAlgn',
                             ['common/bots_common.c','common/bots_main.c',
                              'omp-tasks/alignment/alignment_for/alignment.c',
                              'omp-tasks/alignment/alignment_for/sequence.c'],
                             'spec-botsalgn', True,
                             src_folder=SPEC_BOTSALGN_ROOT,
                             extra_cli_args=SPEC_BOTSALGN_CUSTOM)
ALL_SPEC_TESTS.append(SPEC_BOTSALGN)

SPEC_BOTSSPAR_ROOT = os.path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                  '359.botsspar', 'src')
SPEC_BOTSSPAR_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                       SPEC_BOTSSPAR_ROOT + '/common -I ' + \
                       SPEC_BOTSSPAR_ROOT + '/omp-tasks/sparselu/sparselu_single'
SPEC_BOTSSPAR = FrontendTest('SPECBotsSpar',
                             ['common/bots_common.c', 'common/bots_main.c',
                              'omp-tasks/sparselu/sparselu_single/sparselu.c'],
                             'spec-botsspar', True,
                             src_folder=SPEC_BOTSSPAR_ROOT,
                             extra_cli_args=SPEC_BOTSSPAR_CUSTOM)
ALL_SPEC_TESTS.append(SPEC_BOTSSPAR)

SPEC_SMITHWA_ROOT = os.path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                  '372.smithwa', 'src')
SPEC_SMITHWA_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                      SPEC_SMITHWA_ROOT
SPEC_SMITHWA = FrontendTest('SPECSmithwa',
                            ['dispElapsedTime.c', 'genScalData.c',
                             'genSimMatrix.c', 'getUserParameters.c',
                             'mergeAlignment.c', 'pairwiseAlign.c',
                             'scanBackward.c', 'sequenceAlignment.c',
                             'specrand.c', 'verifyAlignment.c', 'verifyData.c',
                             'verifyMergeAlignment.c'], 'spec-smithwa', True,
                            src_folder=SPEC_SMITHWA_ROOT,
                            extra_cli_args=SPEC_SMITHWA_CUSTOM)
ALL_SPEC_TESTS.append(SPEC_SMITHWA)

SPEC_KDTREE_ROOT = os.path.join(SPEC_HOME, 'benchspec', 'OMP2012',
                                '376.kdtree', 'src')
SPEC_KDTREE_CUSTOM = '-D SPEC -D NDEBUG -D NOREDUCE -D NOPERFLIB -I ' + \
                      SPEC_KDTREE_ROOT
SPEC_KDTREE = FrontendTest('SPECKDTree', ['specrand.c'], 'spec-kdtree', True,
                           src_folder=SPEC_KDTREE_ROOT,
                           extra_cli_args=SPEC_KDTREE_CUSTOM)
ALL_SPEC_TESTS.append(SPEC_KDTREE)


