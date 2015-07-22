#!/usr/bin/python
import os
from os import path
import sys
from common import FrontendTest, RuntimeTest, CHIMES_HOME, get_num_cores

# Rodinia benchmarks
RODINIA_HOME = os.environ['RODINIA_HOME']
if not os.path.isdir(RODINIA_HOME):
    print('RODINIA_HOME does not seem to be a directory (' + RODINIA_HOME + ')')
    print('If you are a Habanero member and need to restore the Rodinia ' +
          'benchmarks, you can copy them from the ZIP under:')
    print('  https://svn.rice.edu/r/parsoft/projects/' +
          'Max-Grossman-Masters-Thesis/Benchmarks/')
    sys.exit(1)

RODINIA_DATA = path.join(RODINIA_HOME, 'data')
RODINIA_TESTS = ['backprop', 'bfs', 'bfs_refactored', 'b+tree', 'heartwall', 'hotspot',
                 'kmeans', 'lavaMD', 'lud', 'myocyte',
                 'nn', 'nw', 'nw_refactored', 'particlefilter', 'srad']
RODINIA_CLI_ARGS = {'backprop': '65536',
                    'bfs': '4 ' + path.join(RODINIA_DATA, 'bfs/graph1MW_6.txt'),
                    'bfs_refactored': '4 ' + path.join(RODINIA_DATA, 'bfs/graph1MW_6.txt'),
                    'b+tree': 'core 2 file ' + path.join(RODINIA_DATA,
                                                         'b+tree/mil.txt') + \
                              ' command ' + path.join(RODINIA_DATA,
                                                      'b+tree/command-small.txt'),
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
                    'myocyte': '100 1 4',
                    'nn': path.join(RODINIA_DATA, 'nn', 'list40k_4.txt') +
                          ' 5 30 90',
                    'nw': '2048 10 2',
                    'nw_refactored': '2048 10 2',
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
