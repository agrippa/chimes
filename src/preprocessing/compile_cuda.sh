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
    echo usage: compile_cuda.sh [-k] -i input.cu
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

NVCC_WORK_DIR=${WORK_DIR}/nvcc
COMPILE_HELPER_WORK_DIR=${WORK_DIR}/compile_helper

OPT=${LLVM_INSTALL}/Debug+Asserts/bin/opt
CLANG=${LLVM_INSTALL}/Debug+Asserts/bin/clang
TRANSFORM=${NUM_DEBUG_HOME}/src/preprocessing/clang/transform

CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log
ENV_FILE=${COMPILE_HELPER_WORK_DIR}/log.env
PRE_CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log.pre
POST_CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log.post
CPP_FILE=${COMPILE_HELPER_WORK_DIR}/log.cpp
ENV_POST_FILE=${COMPILE_HELPER_WORK_DIR}/log.env.post

mkdir ${COMPILE_HELPER_WORK_DIR}
printf 'Compiling with nvcc...'
mkdir ${NVCC_WORK_DIR} && cd ${NVCC_WORK_DIR} && nvcc -arch=sm_20 \
          --pre-include ${NUM_DEBUG_HOME}/src/libnumdebug/libnumdebug.h \
          -I${NUM_DEBUG_HOME}/src/libnumdebug \
          -L${NUM_DEBUG_HOME}/src/libnumdebug -lnumdebug --verbose --keep\
          ${INPUT} -o ${OUTPUT} &> ${CMD_FILE} || { printf 'FAILED\n'; cat ${CMD_FILE}; exit 1; }
printf 'DONE\n'
python ${NUM_DEBUG_HOME}/src/preprocessing/compile_helper.py \
          ${CMD_FILE} ${ENV_FILE} ${PRE_CMD_FILE} ${POST_CMD_FILE} ${CPP_FILE}

INTERMEDIATE_FILE=${NVCC_WORK_DIR}/$(cat ${CPP_FILE})
BITCODE_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).bc
TMP_OBJ_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).o
ANALYSIS_LOG_FILE=${NVCC_WORK_DIR}/analysis.log
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

echo Generating bitcode for ${INTERMEDIATE_FILE} into ${BITCODE_FILE}
cd ${NVCC_WORK_DIR} && $CLANG -I${CUDA_HOME}/include -I${NUM_DEBUG_HOME}/src/libnumdebug -S \
        -emit-llvm ${INTERMEDIATE_FILE} -o ${BITCODE_FILE} -g

echo Analyzing ${BITCODE_FILE} and dumping info to ${NVCC_WORK_DIR}
cd ${NVCC_WORK_DIR} && $OPT -basicaa -load $LLVM_LIB -play < \
        ${BITCODE_FILE} > $TMP_OBJ_FILE &> ${ANALYSIS_LOG_FILE}
rm ${TMP_OBJ_FILE}

${TRANSFORM} \
        -l ${NVCC_WORK_DIR}/lines.info \
        -s ${NVCC_WORK_DIR}/struct.info \
        -a ${NVCC_WORK_DIR}/stack.info \
        -i ${INPUT} \
        -m ${NVCC_WORK_DIR}/heap.info \
        -d ${NVCC_WORK_DIR}/diag.info \
        -w ${NVCC_WORK_DIR} \
        -c true \
        ${INTERMEDIATE_FILE} -- -I${NUM_DEBUG_HOME}/src/libnumdebug \
        -I${CUDA_HOME}/include -I${STDDEF_FOLDER}

LAST_FILE=$(basename ${INTERMEDIATE_FILE})
EXT="${LAST_FILE##*.}"
NAME="${LAST_FILE%.*}"
LAST_FILE=${NAME}.register.${EXT}
LAST_FILE=$(dirname ${INTERMEDIATE_FILE})/${LAST_FILE}
echo $LAST_FILE

cp ${LAST_FILE} ${INTERMEDIATE_FILE}
cat ${ENV_FILE} ${POST_CMD_FILE} > ${ENV_POST_FILE}
chmod +x ${ENV_POST_FILE}
cd ${NVCC_WORK_DIR} && ${ENV_POST_FILE}

if [[ $KEEP == 0 ]]; then
    rm -rf ${WORK_DIR}
fi
