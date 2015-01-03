#!/bin/bash
# This script takes an input source file and output directory to generate a
# version of the input with the necessary callbacks inserted for interfacing the
# the num-debug library. This is a three step process:
#
#   1. Use the clang frontend to convert a .cpp to its bitcode representation
#      (including line number debug information).
#   2. Use the new -play analysis pass (really need a better name) with the
#      basic alias analysis pass to analyze that bitcode and produce a number of
#      diagnostic files about the functions in the bitcode, and the changes they
#      make to program state.
#   3. Use InsertTrackingCalls.py with the generated diagnostic files and the
#      original source to generate a transformed source with callbacks inserted
#      as needed.
#
# Example usage:
#
#   $ ./run.sh ~/dev/num-debug/src/examples/test.cpp \
#             /Users/mgrossman/dev/num-debug/src/libnumdebug/examples/
#

set -e

if [[ $# != 2 ]]; then
    echo "usage: run.sh file.cpp output-dir"
    exit 1
fi

OPT=${LLVM_INSTALL}/Debug+Asserts/bin/opt
CLANG=${LLVM_INSTALL}/Debug+Asserts/bin/clang

INFILE=$1
OUT_DIR=$2
BITCODE_FILE=tmp.bc
OBJ_FILE=tmp.o
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

if [[ -z "${NUM_DEBUG_HOME}" ]]; then
    echo "NUM_DEBUG_HOME must be set"
    exit 1
fi

if [[ -z "${LLVM_INSTALL}" ]]; then
    echo "LLVM_INSTALL must be set"
    exit 1
fi

$CLANG -I${NUM_DEBUG_HOME}/src/libnumdebug -S -emit-llvm ${INFILE} -o ${BITCODE_FILE} -g
$OPT -basicaa -load ${LLVM_INSTALL}/Debug+Asserts/lib/LLVMPlay.dylib -play < ${BITCODE_FILE} > ${OBJ_FILE}
rm ${OBJ_FILE}

# python ${NUM_DEBUG_HOME}/src/preprocessing/InsertTrackingCalls.py ${INFILE} ${INFILE} \
#            ${LINE_INFO_FILE} ${FUNCTION_START_FILE} ${FUNCTION_EXIT_FILE} \
#            ${STACK_FILE} ${HEAP_FILE} ${LOC_FILE} ${GOTO_FILE} ${STRUCT_FILE} \
#            ${DECL_FILE} ${OUT_DIR}/${INSTRUMENTED_FILE}

# cleanup
# rm ${INSTRUMENTED_FILE}
