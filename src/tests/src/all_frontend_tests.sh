#!/bin/bash

set -e 

for f in $(ls *frontend_tests.py); do
    echo ===== Running $f =====
    python $f
    echo
done
