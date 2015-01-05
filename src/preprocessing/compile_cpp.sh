#!/bin/bash

set -e

if [[ $# != 1 ]]; then
    echo usage: compile_cuda.sh input.cpp
    exit 1
fi

INPUT=$1
INPUT=$(pwd)/${INPUT}
OUTPUT=$(pwd)/a.out

WORK_DIR=$(mktemp -d)

OPT=${LLVM_INSTALL}/Debug+Asserts/bin/opt
CLANG=${LLVM_INSTALL}/Debug+Asserts/bin/clang
TRANSFORM=${NUM_DEBUG_HOME}/src/preprocessing/clang/transform

echo $WORK_DIR

BITCODE_FILE=${WORK_DIR}/$(basename ${INPUT}).bc
TMP_OBJ_FILE=${WORK_DIR}/$(basename ${INPUT}).o
ANALYSIS_LOG_FILE=${WORK_DIR}/analysis.log
STDDEF_FOLDER=$(dirname $(find $(dirname $(dirname $(which gcc))) -name \
            "stddef.h"))
LLVM_LIB=${LLVM_INSTALL}/Debug+Asserts/lib/LLVMPlay.dylib
if [[ ! -f $LLVM_LIB ]]; then
    LLVM_LIB=${LLVM_INSTALL}/Debug+Asserts/lib/LLVMPlay.so
fi
if [[ ! -f $LLVM_LIB ]]; then
    echo "Missing LLVMPlay lib"
    exit 1
fi

echo Generating bitcode for ${INPUT} into ${BITCODE_FILE}
cd ${WORK_DIR} && $CLANG -I${CUDA_HOME}/include -I${NUM_DEBUG_HOME}/src/libnumdebug -S \
        -emit-llvm ${INPUT} -o ${BITCODE_FILE} -g

echo Analyzing ${BITCODE_FILE} and dumping info to ${WORK_DIR}
cd ${WORK_DIR} && $OPT -basicaa -load $LLVM_LIB -play < \
       ${BITCODE_FILE} > $TMP_OBJ_FILE &> ${ANALYSIS_LOG_FILE}
rm ${TMP_OBJ_FILE}

${TRANSFORM} \
        -extra-arg="-I${NUM_DEBUG_HOME}/src/libnumdebug" \
        -extra-arg="-I${CUDA_HOME}/include" \
        -extra-arg="-I${STDDEF_FOLDER}" \
        -extra-arg="-include${NUM_DEBUG_HOME}/src/libnumdebug/libnumdebug.h" \
        -l ${WORK_DIR}/lines.info \
        -f ${WORK_DIR}/func_start.info \
        -s ${WORK_DIR}/struct.info \
        -x ${WORK_DIR}/exit.info \
        -i ${INPUT} \
        -d ${WORK_DIR}/decl.info \
        -a ${WORK_DIR}/stack.info \
        -m ${WORK_DIR}/heap.info \
        -b ${WORK_DIR}/loc.info \
        ${INPUT} --

LAST_FILE=$(basename ${INPUT})
EXT="${LAST_FILE##*.}"
NAME="${LAST_FILE%.*}"
LAST_FILE=${NAME}.register.${EXT}
LAST_FILE=${WORK_DIR}/${LAST_FILE}
echo $LAST_FILE

g++ -lpthread -include stddef.h -include stdio.h \
        -include ${NUM_DEBUG_HOME}/src/libnumdebug/libnumdebug.h \
        -I${NUM_DEBUG_HOME}/src/libnumdebug \
        -L${NUM_DEBUG_HOME}/src/libnumdebug -lnumdebug ${LAST_FILE} -o $OUTPUT

rm -rf ${WORK_DIR}
