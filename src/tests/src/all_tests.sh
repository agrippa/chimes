#!/bin/bash

set -e 

for f in $(ls *.py | grep -v common.py); do
    echo ===== Running $f =====
    python $f
    echo
done
