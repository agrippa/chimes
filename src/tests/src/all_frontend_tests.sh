#!/bin/bash

set -e 

for f in $(ls *frontend_tests.py | grep -v cuda); do
    echo ===== Running $f =====
    python $f
    echo
done
