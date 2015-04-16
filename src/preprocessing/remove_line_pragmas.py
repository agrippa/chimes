#!/usr/bin/python
import sys
import os

# This simple script removes line number pragmas from a file (passed to it
# through STDIN). Note that this script is not a part of the main code
# transformation pipeline, but is simply provided as a utility for cleaning up
# auto-generated code before it is inspected. The numerous line number pragmas
# inserted by cpp and our own preprocessing passes can interfere with the
# readability of code. The filtered code is written to STDOUT.

for line in sys.stdin:
    if line.find('# ') != 0:
        sys.stdout.write(line)
