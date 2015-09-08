#!/bin/bash

if [[ $# != 1 ]]; then
    echo usage: plot-ncheckpoints.sh machine
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
    if [[ $(wc -l $FILE | awk '{ print $1 }') != 21 ]]; then
        echo Invalid file $FILE, expected 21 tests
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

for N in $(cat $CPP_FILE | awk '{ print $7 }'); do
    CPP_RESULTS+=($N)
done

for N in $(cat $OMP_FILE | awk '{ print $7 }'); do
    OMP_RESULTS+=($N)
done

for ((i=0;i<${#CPP_RESULTS[@]};++i)); do
    printf "%s\t%s\t%s\n" "${TESTS[i]}" "${CPP_RESULTS[i]}" "${OMP_RESULTS[i]}" >> data
done

CUSTOM_MACHINE=$MACHINE
if [[ $MACHINE == "davinci.rice.edu" ]] ; then
    CUSTOM_MACHINE="Platform A"
elif [[ $MACHINE == "biou.rice.edu" ]]; then
    CUSTOM_MACHINE="Platform B"
fi

gnuplot -e "output_file=\"ncheckpoints.$MACHINE.png\"" -e "full_title=\"$CUSTOM_MACHINE\"" plot-ncheckpoints.gnu
