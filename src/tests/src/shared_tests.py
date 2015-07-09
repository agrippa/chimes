#!/usr/bin/python
import os
from os import path
import sys
from common import FrontendTest, RuntimeTest, CHIMES_HOME

CPP_EXAMPLES_DIR = CHIMES_HOME + '/src/examples/cpp'

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
                 'Lulesh-OMP': '20',
                 'CoMD': '-N 10 -x 100 -y 20 -z 20',
                 'UTS': '-t 1 -g 20 -b 1.8 -d 80'
                }

