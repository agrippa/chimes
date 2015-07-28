#!/bin/bash

if [[ $# != 2 ]]; then
    echo usage: plot-overheads.sh machine model
    exit 1
fi

MACHINE=$1
MODEL=$2

if [[ $MODEL != cpp && $MODEL != omp ]]; then
    echo Unknown model $MODEL, must be cpp or omp
    exit 1
fi

GNUPLOT_DIR="$CHIMES_HOME/src/tests/src/results/gnuplot"
DUMMY_FILE="$GNUPLOT_DIR/../$MACHINE.$MODEL.noblock.dummy.perf"
BLOCK_FILE="$GNUPLOT_DIR/../$MACHINE.$MODEL.block.nodummy.perf"
CHECKPOINT_FILE="$GNUPLOT_DIR/../$MACHINE.$MODEL.noblock.nodummy.perf"

for FILE in $DUMMY_FILE $BLOCK_FILE $CHECKPOINT_FILE; do
    if [[ ! -f $FILE ]]; then
        echo Missing input file $FILE
        exit 1
    fi
    if [[ $(wc -l $FILE | awk '{ print $1 }') != 23 ]]; then
        echo Invalid file $FILE, expected 23 tests
        exit 1
    fi
done

echo -e 'Test\tEmpty\tNo-Checkpoint\tCheckpoint' > data
awk 'NR==FNR{a[FNR]=$4; next} NR<=46{b[FNR]=$4; next} {print $1,"\t",a[FNR],"\t",b[FNR],"\t",$4}' \
        $DUMMY_FILE $BLOCK_FILE $CHECKPOINT_FILE >> data
MEDIAN=$(cat $CHECKPOINT_FILE | awk '{ print $4 }' | python ./get_median.py)
gnuplot -e "output_file=\"$MACHINE.$MODEL.png\"" -e "full_title=\"$MACHINE $MODEL\"" -e "full_median=$MEDIAN" plot-overheads.gnu
echo $MEDIAN
