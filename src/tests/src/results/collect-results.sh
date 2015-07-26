#!/bin/bash

DUMMY=0
BLOCK=0
OMP=0

while getopts "dbm" opt; do
    case $opt in 
        d)
            DUMMY=1
            ;;
        b)
            BLOCK=1
            ;;
        m)
            OMP=1
            ;;
        \?)
            echo "unrecognized option -$OPTARG" >&2
            exit 1
            ;;
        :)
            echo "option -$OPTARG requires an argument" >&2
            exit 1
            ;;
    esac
done

OMP_SCRIPT=$CHIMES_HOME/src/tests/src/omp_perf_tests.py
CPP_SCRIPT=$CHIMES_HOME/src/tests/src/cpp_perf_tests.py

LIST_CMD=
if [[ $OMP == 1 ]]; then
    LIST_CMD="python $OMP_SCRIPT -l"
else
    LIST_CMD="python $CPP_SCRIPT -l"
fi

FILE_SUFFIX=

if [[ $OMP == 1 ]]; then
    FILE_SUFFIX="omp"
else
    FILE_SUFFIX="cpp"
fi

if [[ $DUMMY == 1 ]]; then
    FILE_SUFFIX="$FILE_SUFFIX.dummy"
else
    FILE_SUFFIX="$FILE_SUFFIX.nodummy"
fi

if [[ $BLOCK == 1 ]]; then
    FILE_SUFFIX="$FILE_SUFFIX.block"
else
    FILE_SUFFIX="$FILE_SUFFIX.noblock"
fi

for t in $(eval $LIST_CMD); do
    cat $SHARED_SCRATCH/jmg3/outputs/$t.$FILE_SUFFIX.stdout | grep "checkpoint file";
done
