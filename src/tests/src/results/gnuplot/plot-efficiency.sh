#!/bin/bash

if [[ $# != 1 ]]; then
    echo usage: plot-overheads.sh machine
    exit 1
fi

MACHINE=$1

GNUPLOT_DIR="$CHIMES_HOME/src/tests/src/results/gnuplot"
CPP_FILE="$GNUPLOT_DIR/../$MACHINE.cpp.noblock.nodummy.perf"
OMP_FILE="$GNUPLOT_DIR/../$MACHINE.omp.noblock.nodummy.perf"

for FILE in $OMP_FILE $CPP_FILE; do
    if [[ ! -f $FILE ]]; then
        echo Missing input file $FILE
        exit 1
    fi
    if [[ $(wc -l $FILE | awk '{ print $1 }') != 23 ]]; then
        echo Invalid file $FILE, expected 23 tests
        exit 1
    fi
done

TESTS=()
CPP_RESULTS=()
OMP_RESULTS=()
echo -e 'Test\tCPP\tOMP' > data

for TEST in $(cat $CPP_FILE | awk '{ print $1 }'); do
    TESTS+=($TEST)
done

for PERC in $(cat $CPP_FILE | awk '{ print $11 }'); do
    PERC=${PERC:11}
    PERC=${PERC:0:$(echo ${#PERC} - 2 | bc)}
    CPP_RESULTS+=($PERC)
done

for token in $(cat $OMP_FILE | awk '{ print $11 }'); do
    token=${token:11}
    token=${token:0:$(echo ${#token} - 2 | bc)}
    OMP_RESULTS+=($token)
done

for ((i=0;i<${#CPP_RESULTS[@]};++i)); do
    printf "%s\t%s\t%s\n" "${TESTS[i]}" "${CPP_RESULTS[i]}" "${OMP_RESULTS[i]}" >> data
done

gnuplot -e "output_file=\"efficiency.$MACHINE.png\"" -e "full_title=\"$MACHINE\"" plot-efficiency.gnu
