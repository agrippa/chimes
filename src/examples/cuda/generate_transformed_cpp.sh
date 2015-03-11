#!/bin/bash

if [[ $# != 2 ]]; then
    echo usage: generate_transformed_cpp.sh input original
    exit 1
fi

INFILE=$1
ORIGINAL=$2
OUT_DIR=.

LINE_INFO_FILE=lines.info
FUNCTION_START_FILE=func_start.info
FUNCTION_EXIT_FILE=exit.info
STACK_FILE=stack.info
HEAP_FILE=heap.info
LOC_FILE=loc.info
GOTO_FILE=goto.info
STRUCT_FILE=struct.info
DECL_FILE=decl.info
INSTRUMENTED_FILE=$(basename ${INFILE})
INSTRUMENTED_FILE=${INSTRUMENTED_FILE%.*}.transformed.${INSTRUMENTED_FILE##*.}

python ${CHIMES_HOME}/src/preprocessing/InsertTrackingCalls.py ${INFILE} ${ORIGINAL} \
           ${LINE_INFO_FILE} ${FUNCTION_START_FILE} ${FUNCTION_EXIT_FILE} \
           ${STACK_FILE} ${HEAP_FILE} ${LOC_FILE} ${GOTO_FILE} ${STRUCT_FILE} \
           ${DECL_FILE} ${OUT_DIR}/${INSTRUMENTED_FILE}

