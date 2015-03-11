#!/bin/bash

set -e

script_dir="$(dirname $0)"
source ${script_dir}/common.sh

INFO_FILES="lines.info struct.info stack.info heap.info func.info call.info exit.info reachable.info globals.info"
KEEP=0
PROFILE=0
COMPILE=0
INPUTS=()
INCLUDES=
LIB_PATHS=
LIBS=
OUTPUT_FILE=a.out
WORK_DIR=
VERBOSE=0
LINKER_FLAGS=

while getopts ":kci:I:L:l:o:w:vp" opt; do
    case $opt in 
        i)
            INPUTS+=($(get_absolute_path ${OPTARG}))
            ;;
        I)
            INCLUDES="${INCLUDES} -I$(get_absolute_path ${OPTARG})"
            ;;
        L)
            LIB_PATHS="${LIB_PATHS} -L$(get_absolute_path ${OPTARG})"
            ;;
        l)
            LIBS="${LIBS} -l${OPTARG}"
            ;;
        k)
            KEEP=1
            ;;
        c)
            COMPILE=1
            ;;
        w)
            WORK_DIR=${OPTARG}
            ;;
        o)
            OUTPUT_FILE=${OPTARG}
            ;;
        v)
            VERBOSE=1
            ;;
        p)
            PROFILE=1
            ;;
        x)
            LINKER_FLAGS="${LINKER_FLAGS} ${OPTARG}"
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

if [[ "${#INPUTS[@]}" -eq "0" ]]; then
    echo usage: compile_cuda.sh [-c] [-k] [-p] [-v] [-I include-path] [-l libname] [-L lib-path] -i input.cu
    exit 1
fi

echo ${INPUTS[@]}

ABS_INPUTS=()
for f in ${INPUTS[@]}; do

    if [[ "${f:0:1}" != "/" ]]; then
        abs_f=($(pwd)/${f})
    else
        abs_f=($f)
    fi

    if [[ ! -f $abs_f ]]; then
        echo "$f is not a file"
        exit 1
    fi

    ABS_INPUTS+=($abs_f)
done

echo ${ABS_INPUTS[@]}

LAST_FILES=()
OBJ_FILES=()
OUTPUT=$(pwd)/${OUTPUT_FILE}
CUDA_LIB_PATH=${CUDA_HOME}/lib
if [[ -d ${CUDA_HOME}/lib64 ]]; then
    CUDA_LIB_PATH=${CUDA_HOME}/lib64
fi

if [[ -z ${WORK_DIR} ]]; then
    WORK_DIR=$(mktemp -d /tmp/numdebug.XXXXXX)
fi

NVCC_WORK_DIR=${WORK_DIR}/nvcc
COMPILE_HELPER_WORK_DIR=${WORK_DIR}/compile_helper

OPT=${LLVM_INSTALL}/Debug+Asserts/bin/opt
CLANG=${LLVM_INSTALL}/Debug+Asserts/bin/clang
TRANSFORM=${NUM_DEBUG_HOME}/src/preprocessing/clang/transform
OMP_FINDER=${NUM_DEBUG_HOME}/src/preprocessing/openmp/openmp_finder.py
MODULE_INIT=${NUM_DEBUG_HOME}/src/preprocessing/module_init/module_init.py
NUMDEBUG_DEF=-D__NUMDEBUG_SUPPORT

GXX_FLAGS="-g -O0 ${INCLUDES}"
[[ ! $PROFILE ]] || GXX_FLAGS="${GXX_FLAGS} -pg"

CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log
ENV_FILE=${COMPILE_HELPER_WORK_DIR}/log.env
PRE_CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log.pre
POST_CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log.post
CPP_FILE=${COMPILE_HELPER_WORK_DIR}/log.cpp
CPP_COMPILER_FILE=${COMPILE_HELPER_WORK_DIR}/compiler
ENV_POST_FILE=${COMPILE_HELPER_WORK_DIR}/log.env.post
CPP_COMPILER=

mkdir -p ${COMPILE_HELPER_WORK_DIR}
mkdir -p ${NVCC_WORK_DIR}

for INPUT in ${ABS_INPUTS[@]}; do
    OBJ_FILE=${INPUT}.o
    printf 'Compiling with nvcc...'
    cd ${NVCC_WORK_DIR} && nvcc -arch=sm_20 \
              --pre-include ${NUM_DEBUG_HOME}/src/libnumdebug/libnumdebug.h \
              -I${NUM_DEBUG_HOME}/src/libnumdebug ${GXX_FLAGS} \
              -L${NUM_DEBUG_HOME}/src/libnumdebug -lnumdebug --verbose --keep \
              --compile ${NUMDEBUG_DEF} ${INPUT} -o ${OBJ_FILE} &> ${CMD_FILE} || { \
                  printf 'FAILED\n'; cat ${CMD_FILE}; exit 1; }
    printf 'DONE\n'
    python ${NUM_DEBUG_HOME}/src/preprocessing/compile_helper.py \
              ${CMD_FILE} ${ENV_FILE} ${PRE_CMD_FILE} ${POST_CMD_FILE} \
              ${CPP_FILE} ${CPP_COMPILER_FILE}
    CPP_COMPILER=$(cat ${CPP_COMPILER_FILE})

    INFO_FILE_PREFIX=${NVCC_WORK_DIR}/$(basename ${INPUT})
    INTERMEDIATE_FILE=${NVCC_WORK_DIR}/$(cat ${CPP_FILE})
    BITCODE_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).bc
    TMP_OBJ_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).o
    ANALYSIS_LOG_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).analysis.log
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

    echo Looking for OpenMP pragmas in ${INPUT}
    cd ${NVCC_WORK_DIR} && python ${OMP_FINDER} ${INPUT} > ${INFO_FILE_PREFIX}.omp.info

    echo Generating bitcode for ${INTERMEDIATE_FILE} into ${BITCODE_FILE}
    cd ${NVCC_WORK_DIR} && $CLANG -I${CUDA_HOME}/include \
        -I${NUM_DEBUG_HOME}/src/libnumdebug ${INCLUDES} -S -emit-llvm \
        ${INTERMEDIATE_FILE} -o ${BITCODE_FILE} -g ${NUMDEBUG_DEF}

    echo Analyzing ${BITCODE_FILE} and dumping info to ${NVCC_WORK_DIR}
    cd ${NVCC_WORK_DIR} && $OPT -basicaa -load $LLVM_LIB -play < \
            ${BITCODE_FILE} > $TMP_OBJ_FILE &> ${ANALYSIS_LOG_FILE}
    rm ${TMP_OBJ_FILE}

    echo Saving info files
    for info_file in ${INFO_FILES}; do
        if [[ ! -f ${NVCC_WORK_DIR}/${info_file} ]]; then
            echo "Missing info file ${NVCC_WORK_DIR}/${info_file}"
            exit 1
        fi
        mv ${NVCC_WORK_DIR}/${info_file} ${INFO_FILE_PREFIX}.${info_file}

    done

    ${TRANSFORM} \
            -l ${INFO_FILE_PREFIX}.lines.info \
            -s ${INFO_FILE_PREFIX}.struct.info \
            -a ${INFO_FILE_PREFIX}.stack.info \
            -i ${INPUT} \
            -m ${INFO_FILE_PREFIX}.heap.info \
            -d ${INFO_FILE_PREFIX}.diag.info \
            -f ${INFO_FILE_PREFIX}.func.info \
            -k ${INFO_FILE_PREFIX}.call.info \
            -x ${INFO_FILE_PREFIX}.exit.info \
            -r ${INFO_FILE_PREFIX}.reachable.info \
            -o ${INFO_FILE_PREFIX}.module.info \
            -w ${NVCC_WORK_DIR} \
            -c true \
            -t ${INFO_FILE_PREFIX}.omp.info \
            ${INTERMEDIATE_FILE} -- -I${NUM_DEBUG_HOME}/src/libnumdebug \
            -I${CUDA_HOME}/include -I${STDDEF_FOLDER} ${INCLUDES} ${NUMDEBUG_DEF}

    TRANSFORMED_FILE=$(basename ${INTERMEDIATE_FILE})
    EXT="${TRANSFORMED_FILE##*.}"
    NAME="${TRANSFORMED_FILE%.*}"
    TRANSFORMED_FILE=${NAME}.register.${EXT}
    FINAL_FILE=${NAME}.transformed.${EXT}

    echo Setting up module initialization for ${TRANSFORMED_FILE}
    cd ${NVCC_WORK_DIR} && python ${MODULE_INIT} ${TRANSFORMED_FILE} ${FINAL_FILE} \
        ${INFO_FILE_PREFIX}.module.info ${INFO_FILE_PREFIX}.reachable.info \
        ${INFO_FILE_PREFIX}.globals.info ${INFO_FILE_PREFIX}.struct.info

    echo Postprocessing ${FINAL_FILE}
    cd ${NVCC_WORK_DIR} && ${CPP_COMPILER} -E -I${CUDA_HOME}/include -include stddef.h \
        ${NUMDEBUG_DEF} ${FINAL_FILE} -o ${FINAL_FILE}.post && mv \
        ${FINAL_FILE}.post ${FINAL_FILE}

    FINAL_FILE=$(dirname ${INTERMEDIATE_FILE})/${FINAL_FILE}

    LAST_FILES+=($FINAL_FILE)
    OBJ_FILES+=($OBJ_FILE)

    cp ${FINAL_FILE} ${INTERMEDIATE_FILE}
    cat ${ENV_FILE} ${POST_CMD_FILE} > ${ENV_POST_FILE}
    chmod +x ${ENV_POST_FILE}
    cd ${NVCC_WORK_DIR} && ${ENV_POST_FILE}

    if [[ ! -f ${OBJ_FILE} ]]; then
        echo "Missing object file $OBJ_FILE for input $INPUT"
        exit 1
    fi
done

for f in ${LAST_FILES[@]}; do
    echo $f
done

if [[ $COMPILE == 1 ]]; then
    for f in ${OBJ_FILES[@]}; do
        echo $f
    done
else
    OBJ_FILE_STR=""
    for f in ${OBJ_FILES[@]}; do
        OBJ_FILE_STR="${OBJ_FILE_STR} $f"
    done

    ${CPP_COMPILER} -lpthread -I${NUM_DEBUG_HOME}/src/libnumdebug \
            -L${NUM_DEBUG_HOME}/src/libnumdebug -L${CUDA_LIB_PATH} -lnumdebug \
            -lcudart ${OBJ_FILE_STR} -o ${OUTPUT} ${GXX_FLAGS} ${LIB_PATHS} \
            ${LIBS} ${LINKER_FLAGS}

    if [[ $KEEP == 0 ]]; then
        rm -rf ${WORK_DIR}
        for f in ${OBJ_FILES[@]}; do
            rm -f $f
        done
    fi
fi

exit 0
