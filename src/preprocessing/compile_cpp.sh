#!/bin/bash

set -e

KEEP=0
INPUT=
INCLUDES=
LIB_PATHS=
LIBS=

while getopts ":ki:I:L:l:" opt; do
    case $opt in 
        i)
            INPUT=${OPTARG}
            ;;
        I)
            INCLUDES="${INCLUDES} -I${OPTARG}"
            ;;
        L)
            LIB_PATHS="${LIB_PATHS} -L${OPTARG}"
            ;;
        l)
            LIBS="${LIBS} -l${OPTARG}"
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
    echo usage: compile_cpp.sh [-k] [-I include-path] [-l libname] [-L lib-path] -i input.cpp
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

PREPROCESS_FILE=${WORK_DIR}/$(basename ${INPUT}).pre.cpp
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

echo Preprocessing ${INPUT} into ${PREPROCESS_FILE}
cd ${WORK_DIR} && $CLANG -I${CUDA_HOME}/include \
       -I${NUM_DEBUG_HOME}/src/libnumdebug ${INCLUDES} -E ${INPUT} \
       -o ${PREPROCESS_FILE} -g \
       -include${NUM_DEBUG_HOME}/src/libnumdebug/libnumdebug.h \
       -include stddef.h -include stdio.h

echo Generating bitcode for ${PREPROCESS_FILE} into ${BITCODE_FILE}
cd ${WORK_DIR} && $CLANG -I${CUDA_HOME}/include \
       -I${NUM_DEBUG_HOME}/src/libnumdebug ${INCLUDES} -S -emit-llvm \
       ${PREPROCESS_FILE} -o ${BITCODE_FILE} -g

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
        -c true \
        ${PREPROCESS_FILE} -- -I${NUM_DEBUG_HOME}/src/libnumdebug \
        -I${CUDA_HOME}/include \
        -I${STDDEF_FOLDER} \
        $INCLUDES

LAST_FILE=$(basename ${PREPROCESS_FILE})
EXT="${LAST_FILE##*.}"
NAME="${LAST_FILE%.*}"
LAST_FILE=${NAME}.register.${EXT}

echo Postprocessing ${LAST_FILE}
cd ${WORK_DIR} && g++ -E -include stddef.h ${LAST_FILE} -o ${LAST_FILE}.post && mv ${LAST_FILE}.post ${LAST_FILE}

LAST_FILE=${WORK_DIR}/${LAST_FILE}
echo $LAST_FILE

g++ -lpthread -I${NUM_DEBUG_HOME}/src/libnumdebug \
        -L${NUM_DEBUG_HOME}/src/libnumdebug -lnumdebug ${LAST_FILE} -o $OUTPUT \
        ${INCLUDES} ${LIB_PATHS} ${LIBS}

if [[ $KEEP == 0 ]]; then
    rm -rf ${WORK_DIR}
fi
