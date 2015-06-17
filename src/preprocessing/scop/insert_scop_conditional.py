#!/usr/bin/python
import os
import sys

class Accesses(object):
    def __init__(self, filename):
        self.filename = filename
        # mapping from line number (int) to list of accessed aliases (strings)
        self.accesses = {}

    def add_access(self, line_no, accessed):
        if line_no not in self.accesses.keys():
            self.accesses[line_no] = []
        self.accesses[line_no].append(accessed)

    def get_accesses(self, line_no):
        if line_no in self.accesses.keys():
            return self.accesses[line_no]
        else:
            return []


class Scop(object):
    def __init__(self, start_line, end_line, filename):
        self.start_line = start_line
        self.end_line = end_line
        self.filename = filename


def parseAccesses(filename):
    fp = open(filename, 'r')
    accessed_per_file = {}
    for line in fp:
        # /home/jmg3/polybench-c-3.2/datamining/correlation/correlation.c 74 149 157
        tokens = line.split()
        filename = tokens[0]
        line_no = int(tokens[1])

        if filename not in accessed_per_file.keys():
            accessed_per_file[filename] = Accesses(filename)

        for acc in tokens[2:]:
            accessed_per_file[filename].add_access(line_no, acc)

    fp.close()
    return accessed_per_file


def parseScops(filename):
    scops = {}
    fp = open(filename, 'r')

    first_line = fp.readline()
    while len(first_line) > 0:
        # /home/jmg3/polybench-c-3.2/datamining/correlation/correlation.c 72 start
        second_line = fp.readline()

        first_tokens = first_line.split()
        second_tokens = second_line.split()

        assert first_tokens[2] == 'start'
        assert second_tokens[2] == 'end'

        assert first_tokens[0] == second_tokens[0]
        filename = first_tokens[0]
        start_line = int(first_tokens[1])
        end_line = int(second_tokens[1])
        assert end_line > start_line

        assert start_line not in scops.keys()
        scops[start_line] = Scop(start_line, end_line, filename)

        first_line = fp.readline()

    fp.close()
    return scops


def findAccessesBetweenExclusive(filename, start_line, end_line, accessed_per_file):
    result = set()
    if filename not in accessed_per_file.keys():
        return result

    accessed = accessed_per_file[filename]

    for line_no in range(start_line + 1, end_line):
        for access in accessed.get_accesses(line_no):
            result.add(access)

    return result


def isNumber(s):
    try :
        int(s)
        return True
    except ValueError:
        return False


def parseLineControl(tokens):
    if len(tokens) < 2:
        return None

    if tokens[0] != '#':
        return None

    if not isNumber(tokens[1]):
        return None

    if len(tokens) == 2:
        return (int(tokens[1]), None)
    else:
        return (int(tokens[1]), tokens[2])


if __name__ == '__main__':
    if len(sys.argv) != 5:
        print('usage: find_scop.py input-file accessed-file scop-file output-file')
        sys.exit(1)

    input_fp = open(sys.argv[1], 'r')
    transformed = open(sys.argv[4], 'w')
    accesses = parseAccesses(sys.argv[2])
    scops = parseScops(sys.argv[3])

    currentFile = None
    currentLineNo = None

    acc = ''

    lastWasStart = False
    for line in input_fp:
        tokens = line.split()
        line_info = parseLineControl(tokens)

        if line_info is not None:
            currentLineNo = line_info[0]
            currentFile = line_info[1][1:len(line_info[1]) - 1] if line_info[1] is not None else currentFile
            transformed.write(line)
        else:
            if line.strip() == '#pragma scop':
                assert not lastWasStart
                lastWasStart = True
                print('Found open pragma on line ' + str(currentLineNo) + ' of file ' + currentFile)

                assert currentLineNo in scops.keys()
                scop = scops[currentLineNo]
                assert scop.filename == currentFile, 'currentFile=' + currentFile + ' scop.filename=' + scop.filename

                accesses = findAccessesBetweenExclusive(currentFile, currentLineNo, scop.end_line, accesses)

                transformed.write('if (!any_aliased(' + str(len(accesses)))
                for a in accesses:
                    transformed.write(', ' + a)
                transformed.write(')) {\n')
                transformed.write(line)

                acc = ''
            elif line.strip() == '#pragma endscop':
                assert lastWasStart
                print('Found close pragma on line ' + str(currentLineNo) + ' of file ' + currentFile)
                lastWasStart = False

                transformed.write(line)
                transformed.write('} else {\n')
                transformed.write(acc)
                transformed.write('}\n')
            else:
                acc += line
                transformed.write(line)

            currentLineNo += 1


    # acc = ''
    # for line in input_fp:
    #     if line.strip() == '#pragma scop':
    #         assert not lastWasStart

    #         transformed.write('if (!any_aliased(0)) {\n')
    #         line_no += 1 # for the added any_aliased if
    #         transformed.write(line)

    #         lastWasStart = True
    #         startLineNo = line_no
    #         acc = ''

    #         info_fp.write(sys.argv[1] + ' ' + str(line_no) + ' start\n')
    #     elif line.strip() == '#pragma endscop':
    #         assert lastWasStart
    #         assert startLineNo is not None
    #         info_fp.write(sys.argv[1] + ' ' + str(line_no) + ' end\n')
    #         body_fp.write(sys.argv[1] + ' ' + str(startLineNo) + '\n')
    #         body_fp.write(acc)
    #         body_fp.write('\n')

    #         transformed.write(line)
    #         line_no += 1
    #         transformed.write('} else {\n')
    #         line_no += 1
    #         transformed.write(acc)
    #         line_no += acc.count('\n')
    #         transformed.write('}\n')

    #         lastWasStart = False
    #     else:
    #         transformed.write(line)
    #         acc += line

    #     line_no += 1

    assert not lastWasStart

    input_fp.close()
    transformed.close()
