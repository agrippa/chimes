#!/bin/bash

if [[ $# != 1 ]]; then
    echo usage: generate_vector_sum_info.sh file.bc
    exit 1
fi

OBJ_FILE=tmp.o
BITCODE_FILE=$1
OPT=${LLVM_INSTALL}/Debug+Asserts/bin/opt

LIB=${LLVM_INSTALL}/Debug+Asserts/lib/LLVMPlay.dylib
if [[ ! -f $LIB ]]; then
    LIB=${LLVM_INSTALL}/Debug+Asserts/lib/LLVMPlay.so
fi

if [[ ! -f $LIB ]]; then
    echo "Missing LLVMPlay lib"
    exit 1
fi

$OPT -basicaa -load $LIB -play < ${BITCODE_FILE} > $OBJ_FILE
rm $OBJ_FILE
