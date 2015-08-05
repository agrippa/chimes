#!/usr/bin/python
import sys

if len(sys.argv) != 2:
    print('usage: python filter.py filename')
    sys.exit(1)

filename = sys.argv[1]
fp = open(filename, 'r')

remove = ['RodiniaBfs', 'RodiniaNw']
rename = {'RodiniaBfs_refactored': 'RodiniaBfs',
          'RodiniaNw_refactored': 'RodiniaNw'}

lines = []

for line in fp:
    tokens = line.split()
    if tokens[0] in remove:
        continue
    if tokens[0] in rename.keys():
        tokens[0] = rename[tokens[0]]
    line = ' '.join(tokens)

    lines.append(line)

fp.close()

fp = open(filename, 'w')
fp.write('\n'.join(lines) + '\n')
fp.close()
