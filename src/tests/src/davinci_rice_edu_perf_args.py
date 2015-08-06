#!/usr/bin/python
import os
from os import path
import sys
from common import is_rodinia_supported, is_spec_supported, get_num_cores

CORES = str(get_num_cores())

PERF_CLI_ARGS = {'Iso3D': '-x 1024 -y 1024 -z 256 -i 30',
                 'SmithWaterman': '1204000 7000 700',
                 'SmithWaterman-OMP': '1204000 7000 12040 700',
                 'Lulesh': '20',
                 'Lulesh-OMP': '60',
                 'CoMD': '-N 100 -x 100 -y 100 -z 20',
                 'UTS': '-t 1 -g 20 -b 1.8 -d 80'
                }

if is_rodinia_supported():
    from rodinia_tests import RODINIA_DATA
    RODINIA_PERF_CLI_ARGS = \
            {'RodiniaBackprop':       '134217728',
             'RodiniaBfs':            CORES + ' ' + path.join(RODINIA_DATA, 'bfs/inputGen/graph64M.txt'),
             'RodiniaBfs_refactored': CORES + ' ' + path.join(RODINIA_DATA, 'bfs/inputGen/graph64M.txt'),
             'RodiniaB+tree':         'cores ' + CORES + ' file ' + path.join(RODINIA_DATA,
                                                                 'b+tree/mil.txt') + \
                                      ' command ' + path.join(RODINIA_DATA,
                                                              'b+tree/command.txt'),
             'RodiniaHeartwall':      path.join(RODINIA_DATA,
                                            'heartwall/test.avi') + ' 104 ' + CORES,
             'RodiniaHotspot':        '4096 4096 100 ' + CORES + ' ' + path.join(RODINIA_DATA,
                                                                 'hotspot/temp_4096') + \
                                      ' ' + path.join(RODINIA_DATA,
                                                      'hotspot/power_4096'),
             'RodiniaKmeans':         '-n ' + CORES + ' -i ' + path.join(RODINIA_DATA,
                                                             'kmeans/kdd_cup'),
             'RodiniaLavamd':         '-cores ' + CORES + ' -boxes1d 14',
             'RodiniaLud':            '-i ' + path.join(RODINIA_DATA, 'lud/2048.dat'),
             'RodiniaMyocyte':        '8000 100 ' + CORES,
             'RodiniaNn':             path.join(RODINIA_DATA, 'nn',
                                                'list320k_32.txt') + ' 5 30 90',
             'RodiniaNw':             '40960 10 ' + CORES,
             # 'RodiniaNw_refactored':  '40960 10 ' + CORES,
             'RodiniaNw_refactored':  '16384 10 ' + CORES,
             'RodiniaParticlefilter': '-x 512 -y 512 -z 200 -np 1000',
             'RodiniaSrad':           '400 0.5 2008 1832 ' + CORES,
            }

    PERF_CLI_ARGS.update(RODINIA_PERF_CLI_ARGS)

if is_spec_supported():
    from spec_tests import SPEC_BOTSALGN_ROOT
    SPEC_PERF_CLI_ARGS = \
            {
             'SPECBotsAlgn':          '-f ' + path.join(SPEC_BOTSALGN_ROOT, '..',
                                                        'run', 'run_base_test_davinci.0000',
                                                        'botsalgn'),
             'SPECBotsSpar':          '-n 200 -m 100',
             'SPECSmithwa':           '34',
             # 'SPECKDTree':            '3000000 10 2'
             'SPECKDTree':            '200000 10 2'
            }

    PERF_CLI_ARGS.update(SPEC_PERF_CLI_ARGS)
