#!/bin/bash

set -e

KEEP=0
INPUT=

while getopts ":ki:" opt; do
    case $opt in 
        i)
            INPUT=${OPTARG}
            ;;
        k)
            KEEP=1
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

if [[ -z ${INPUT} ]]; then
    echo usage: compile_cpp.sh [-k] -i input.cpp
    exit 1
fi

if [[ ! -f ${INPUT} ]]; then
    echo 'input is not a file'
    exit 1
fi

if [[ "${INPUT:0:1}" != "/" ]]; then
    INPUT=$(pwd)/${INPUT}
fi
OUTPUT=$(pwd)/a.out

WORK_DIR=$(mktemp -d /tmp/numdebug.XXXXXX)

OPT=${LLVM_INSTALL}/Debug+Asserts/bin/opt
CLANG=${LLVM_INSTALL}/Debug+Asserts/bin/clang
TRANSFORM=${NUM_DEBUG_HOME}/src/preprocessing/clang/transform

echo WORK_DIR = $WORK_DIR

BITCODE_FILE=${WORK_DIR}/$(basename ${INPUT}).bc
TMP_OBJ_FILE=${WORK_DIR}/$(basename ${INPUT}).o
ANALYSIS_LOG_FILE=${WORK_DIR}/analysis.log
STDDEF_FOLDER=$(dirname $(find $(dirname $(dirname $(which gcc))) -name \
            "stddef.h" 2>/dev/null | head -n 1))

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
       ${BITCODE_FILE} &>${ANALYSIS_LOG_FILE} > $TMP_OBJ_FILE
rm ${TMP_OBJ_FILE}

${TRANSFORM} \
        -l ${WORK_DIR}/lines.info \
        -s ${WORK_DIR}/struct.info \
        -a ${WORK_DIR}/stack.info \
        -i ${INPUT} \
        -m ${WORK_DIR}/heap.info \
        -d ${WORK_DIR}/diag.info \
        -w ${WORK_DIR} \
        -c false \
        ${INPUT} -- -I${NUM_DEBUG_HOME}/src/libnumdebug \
        -I${CUDA_HOME}/include \
        -I${STDDEF_FOLDER} \
        -include${NUM_DEBUG_HOME}/src/libnumdebug/libnumdebug.h

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

if [[ $KEEP == 0 ]]; then
    rm -rf ${WORK_DIR}
fi
