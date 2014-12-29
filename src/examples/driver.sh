#!/bin/bash

set -e

if [[ $# != 2 ]]; then
    echo usage: driver.sh file out-exe
    exit 1
fi

INFILE=$1
OUT=$2
TRANSFORMED_FILE=$(basename ${INFILE})
TRANSFORMED_FILE=${TRANSFORMED_FILE%.*}.transformed.${TRANSFORMED_FILE##*.}

/Users/mgrossman/dev/llvm/llvm/lib/Transforms/Play/run.sh $INFILE ./
rm -f *.info

g++ -include stddef.h -include stdio.h -include ../libnumdebug/libnumdebug.h \
        -I../libnumdebug -L../libnumdebug -lnumdebug $TRANSFORMED_FILE -o $OUT

# rm -f $TRANSFORMED_FILE
