#!/usr/bin/python
import os
import sys

if __name__ == '__main__':
    if len(sys.argv) != 3:
        print('usage: find_scop.py input-file info-file')
        sys.exit(1)

    input_fp = open(sys.argv[1], 'r')
    info_fp = open(sys.argv[2], 'w')

    line_no = 1
    lastWasStart = False
    for line in input_fp:
        if line.strip() == '#pragma scop':
            assert not lastWasStart
            lastWasStart = True
            info_fp.write(sys.argv[1] + ' ' + str(line_no) + ' start\n')
        elif line.strip() == '#pragma endscop':
            assert lastWasStart
            lastWasStart = False
            info_fp.write(sys.argv[1] + ' ' + str(line_no) + ' end\n')

        line_no += 1

    assert not lastWasStart

    input_fp.close()
    info_fp.close()
