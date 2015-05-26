#!/bin/bash

set -e 

for f in $(ls *.py | grep -v common.py | grep -v cuda); do
    echo ===== Running $f =====
    python $f
    echo
done
