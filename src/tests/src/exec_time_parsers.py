def get_first_line_containing(s, find, append=0):
    lines = s.split('\n')
    line_index = 0

    for line_index in range(len(lines)):
        l = lines[line_index]
        if find in l:
            acc = [l]
            for a in range(append):
                acc.append(lines[line_index + 1 + a])
            return '\n'.join(acc)

    print('Failed to find "' + find + '" when searching in:\n')
    print(s)
    print()
    sys.exit(1)

def iso3d_parser(stdout, stderr):
    return float(get_first_line_containing(stderr, 'total').split()[1])

def sw_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'computation').split()[3])

def lulesh_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'Elapsed').split()[3])

def comd_parser(stdout, stderr):
    return float(get_first_line_containing(get_first_line_containing(stdout,
                    'Timings for Rank 0', append=3), 'total').split()[4])

def uts_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'Wallcl').split()[3])

def rodinia_parser(stdout, stderr):
    l = get_first_line_containing(stdout, 'execution took')
    tokens = l.split()
    for index in range(len(tokens)):
        if tokens[index] == 'execution' and tokens[index + 1] == 'took':
            return float(tokens[index + 2])
    assert false

def lud_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'Time consumed').split()[2])

def particle_filter_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'ENTIRE PROGRAM TOOK').split()[3])

def srad_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'Total time:').split()[2])

def kdtree_parser(stdout, stderr):
    return float(get_first_line_containing(stdout, 'Total time is').split()[3])


EXEC_TIME_PARSERS = {'Iso3D': iso3d_parser,
                     'SmithWaterman': sw_parser,
                     'SmithWaterman-OMP': sw_parser,
                     'Lulesh': lulesh_parser,
                     'Lulesh-OMP': lulesh_parser,
                     'CoMD': comd_parser,
                     'UTS': uts_parser,
                     'RodiniaBackprop': rodinia_parser,
                     'RodiniaBfs': rodinia_parser,
                     'RodiniaB+tree': rodinia_parser,
                     'RodiniaHeartwall': rodinia_parser,
                     'RodiniaHotspot': rodinia_parser,
                     'RodiniaKmeans': rodinia_parser,
                     'RodiniaLavamd': rodinia_parser,
                     'RodiniaLud': lud_parser,
                     'RodiniaMyocyte': rodinia_parser,
                     'RodiniaNn': rodinia_parser,
                     'RodiniaNw': rodinia_parser,
                     'RodiniaNw_refactored': rodinia_parser,
                     'RodiniaParticlefilter': particle_filter_parser,
                     'RodiniaSrad': srad_parser,
                     'SPECBotsAlgn': rodinia_parser,
                     'SPECBotsSpar': rodinia_parser,
                     'SPECSmithwa': rodinia_parser,
                     'SPECKDTree': kdtree_parser
                    }
