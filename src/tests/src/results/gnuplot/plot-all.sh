#!/bin/bash

set -e

for MACHINE in davinci.rice.edu biou.rice.edu rcsg.rice.edu; do
    ./plot-efficiency.sh $MACHINE
    for MODEL in cpp omp; do
        ./plot-overheads.sh $MACHINE $MODEL
    done
done
