#!/usr/bin/python
import os
import sys

if __name__ == '__main__':
    if len(sys.argv) != 4:
        print('usage: find_scop.py input-file info-file body-file')
        sys.exit(1)

    input_fp = open(sys.argv[1], 'r')
    info_fp = open(sys.argv[2], 'w')
    body_fp = open(sys.argv[3], 'w')

    line_no = 1
    lastWasStart = False
    startLineNo = None
    acc = ''
    for line in input_fp:
        if line.strip() == '#pragma scop':
            assert not lastWasStart
            info_fp.write(sys.argv[1] + ' ' + str(line_no) + ' start\n')
            lastWasStart = True
            startLineNo = line_no
            acc = ''
        elif line.strip() == '#pragma endscop':
            assert lastWasStart
            assert startLineNo is not None
            info_fp.write(sys.argv[1] + ' ' + str(line_no) + ' end\n')
            body_fp.write(sys.argv[1] + ' ' + str(startLineNo) + '\n')
            body_fp.write(acc)
            body_fp.write('\n')
            lastWasStart = False
        else:
            acc += line

        line_no += 1

    assert not lastWasStart

    input_fp.close()
    info_fp.close()
    body_fp.close()
