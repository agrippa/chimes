#!/usr/bin/python
import os
import sys

class OMPInsert(object):
    def __init__(self, is_starting_insert, col, text):
        self.is_starting_insert = is_starting_insert
        self.col = col
        self.text = text
        self.matches = 0


def parseInserts(inserts_filename):
    inserts = {}

    fp = open(inserts_filename, 'r')
    line = fp.readline()
    while len(line) > 0:
        tokens = line.split()

        pragma_line = int(tokens[0])
        is_parallel_for = int(tokens[1])
        funcname = tokens[2]
        filename = tokens[3]
        body_start_line = int(tokens[4])
        body_start_col = int(tokens[5])
        body_end_line = int(tokens[6])
        body_end_col = int(tokens[7])

        if filename not in inserts.keys():
            inserts[filename] = {}

        before = fp.readline().strip()
        after = fp.readline().strip()
        at_start = fp.readline().strip()
        at_end = fp.readline().strip()

        assert pragma_line not in inserts[filename].keys()
        inserts[filename][pragma_line] = OMPInsert(True, -1, before + '\n# ' + str(pragma_line) +
                                     ' "' + filename + '"\n')

        assert body_end_line not in inserts[filename].keys()
        inserts[filename][body_end_line] = OMPInsert(False, body_end_col + 1, after)

        line = fp.readline()
    fp.close()

    return inserts

if len(sys.argv) != 4:
    print('usage: python openmp_inserter.py input-file inserts-file output-file')
    sys.exit(1)

inp = open(sys.argv[1], 'r')
outp = open(sys.argv[3], 'w')
inserts = parseInserts(sys.argv[2])

curr_line_no = -1
curr_filename = None
for line in inp:
    tokens = line.split()
    if len(tokens) >= 2 and tokens[0] == '#':
        curr_line_no = int(tokens[1])
        if len(tokens) > 2:
            curr_filename = tokens[2][1:len(tokens[2]) - 1]
    else:
        if curr_filename is not None and curr_filename in inserts.keys():
            file_inserts = inserts[curr_filename]
            if curr_line_no in file_inserts.keys():
                line_insert = file_inserts[curr_line_no]

                if line_insert.is_starting_insert:
                    if len(tokens) >= 2 and tokens[0] == '#pragma' and tokens[1] == 'omp':
                        line = line_insert.text + line
                        line_insert.matches += 1
                        # del file_inserts[curr_line_no]
                # else:
                #     line = line[:line_insert.col - 1] + line_insert.text + line[line_insert.col - 1:]
                #     del file_inserts[curr_line_no]

        curr_line_no += 1

    outp.write(line)

for filename in inserts.keys():
    for line_no in inserts[filename].keys():
        line_insert = inserts[filename][line_no]
        if line_insert.is_starting_insert:
            assert line_insert.matches == 2, 'Expected 2 matches for OMP ' + \
                                        '#pragma at line ' + str(line_no) + \
                                        ' but found ' + str(line_insert.matches)

inp.close()
outp.close()

