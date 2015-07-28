#!/usr/bin/python
import sys

def median(lst):
    assert len(lst) > 0
    lst = sorted(lst)
    if len(lst) % 2 == 1:
        return lst[((len(lst)+1)/2)-1]
    else:
        return float(sum(lst[(len(lst)/2)-1:(len(lst)/2)+1]))/2.0

acc = []
for line in sys.stdin:
    line = line.strip()
    if line[len(line) - 1] == '%':
        line = line[:len(line) - 1]
    acc.append(float(line))
print(str(median(acc)))
