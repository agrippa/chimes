#!/usr/bin/python
import os
from os import path
import sys
from common import FrontendTest, RuntimeTest, CHIMES_HOME
from shared_tests import PERF_CLI_ARGS

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


SPEC_PERF_CLI_ARGS = \
        {
         'SPECBotsAlgn':          '-f ' + path.join(SPEC_BOTSALGN_ROOT, '..',
                                                    'run', 'run_base_test_davinci.0000',
                                                    'botsalgn'),
         'SPECBotsSpar':          '-n 50 -m 25',
         'SPECSmithwa':           '30',
         'SPECKDTree':            '100000 10 2'
        }
PERF_CLI_ARGS.update(SPEC_PERF_CLI_ARGS)