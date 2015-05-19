#!/bin/bash

set -e

script_dir="$(dirname $0)"
source ${script_dir}/common.sh

INFO_FILES="lines.info struct.info stack.info heap.info func.info call.info exit.info reachable.info globals.info constants.info tree.info"
ENABLE_OMP=1
KEEP=0
PROFILE=0
DUMMY=0
COMPILE=0
INPUTS=()
INCLUDES=
LIB_PATHS=
LIBS=
OUTPUT_FILE=a.out
WORK_DIR=
VERBOSE=0
LINKER_FLAGS=
GXX_FLAGS="-g -O2"
DEFINES=

while getopts ":kci:I:L:l:o:w:vpx:y:sD:" opt; do
    case $opt in 
        d)
            DUMMY=1
            ;;
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
        y)
            GXX_FLAGS="${GXX_FLAGS} ${OPTARG}"
            ;;
        s)
            ENABLE_OMP=0
            ;;
        D)
            DEFINES="$DEFINES -D${OPTARG}"
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
    echo usage: compile_cuda.sh [-c] [-k] [-p] [-v] [-s] [-I include-path] [-l libname] [-L lib-path] -i input.cu
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
    WORK_DIR=$(mktemp -d /tmp/chimes.XXXXXX)
fi

NVCC_WORK_DIR=${WORK_DIR}/nvcc
COMPILE_HELPER_WORK_DIR=${WORK_DIR}/compile_helper

OPT=$(find_opt)
CLANG=$(find_clang)
TRANSFORM=${CHIMES_HOME}/src/preprocessing/clang/transform
BRACE_INSERT=${CHIMES_HOME}/src/preprocessing/brace_insert/brace_insert
FUNCTION_UNROLL=${CHIMES_HOME}/src/preprocessing/function_unroll/function_unroll
CALL_TRANSLATE=${CHIMES_HOME}/src/preprocessing/call_translate/call_translate
OMP_FINDER=${CHIMES_HOME}/src/preprocessing/openmp/openmp_finder.py
REGISTER_STACK_VAR_COND=${CHIMES_HOME}/src/preprocessing/module_init/register_stack_var_cond.py
MODULE_INIT=${CHIMES_HOME}/src/preprocessing/module_init/module_init.py
ADD_QUICK_VERSIONS=${CHIMES_HOME}/src/preprocessing/module_init/add_quick_versions.py
INSERT_LINES=${CHIMES_HOME}/src/preprocessing/insert_line_numbers.py
FIRSTPRIVATE_APPENDER=${CHIMES_HOME}/src/preprocessing/openmp/firstprivate_appender.py
CHIMES_DEF=-D__CHIMES_SUPPORT
LLVM_LIB=$(get_llvm_lib)

if [[ $PROFILE == 1 && $DUMMY == 1 ]]; then
    LINKER_FLAGS="${CHIMES_HOME}/src/libchimes/libchimes_dummy.a -L${CUDA_HOME}/lib -L${CUDA_HOME}/lib64 -lcudart -L${CHIMES_HOME}/src/libchimes/xxhash -lxxhash"
    GXX_FLAGS="${GXX_FLAGS} -pg"
elif [[ $PROFILE == 1 ]]; then
    LINKER_FLAGS="${CHIMES_HOME}/src/libchimes/libchimes.a -L${CUDA_HOME}/lib -L${CUDA_HOME}/lib64 -lcudart -L${CHIMES_HOME}/src/libchimes/xxhash -lxxhash"
    GXX_FLAGS="${GXX_FLAGS} -pg"
elif [[ $DUMMY == 1 ]]; then
    LINKER_FLAGS="-L${CHIMES_HOME}/src/libchimes -lchimes_dummy"
else
    LINKER_FLAGS="-L${CHIMES_HOME}/src/libchimes -lchimes"
fi

CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log
ENV_FILE=${COMPILE_HELPER_WORK_DIR}/log.env
PRE_CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log.pre
POST_CMD_FILE=${COMPILE_HELPER_WORK_DIR}/log.post
CPP_FILE=${COMPILE_HELPER_WORK_DIR}/log.cpp
CPP_COMPILER_FILE=${COMPILE_HELPER_WORK_DIR}/compiler
ENV_POST_FILE=${COMPILE_HELPER_WORK_DIR}/log.env.post
GXX=

mkdir -p ${COMPILE_HELPER_WORK_DIR}
mkdir -p ${NVCC_WORK_DIR}

for INPUT in ${ABS_INPUTS[@]}; do
    OBJ_FILE=${INPUT}.o
    printf 'Compiling with nvcc...'
    cd ${NVCC_WORK_DIR} && nvcc -arch=sm_20 \
              --pre-include ${CHIMES_HOME}/src/libchimes/libchimes.h \
              -I${CHIMES_HOME}/src/libchimes ${GXX_FLAGS} ${INCLUDES} \
              -L${CHIMES_HOME}/src/libchimes -lchimes --verbose --keep \
              --compile ${CHIMES_DEF} ${DEFINES} ${INPUT} -o ${OBJ_FILE} &> ${CMD_FILE} || { \
                  printf 'FAILED\n'; cat ${CMD_FILE}; exit 1; }
    printf 'DONE\n'
    python ${CHIMES_HOME}/src/preprocessing/compile_helper.py \
              ${CMD_FILE} ${ENV_FILE} ${PRE_CMD_FILE} ${POST_CMD_FILE} \
              ${CPP_FILE} ${CPP_COMPILER_FILE}
    GXX=$(cat ${CPP_COMPILER_FILE})

    INFO_FILE_PREFIX=${NVCC_WORK_DIR}/$(basename ${INPUT})
    INTERMEDIATE_FILE=${NVCC_WORK_DIR}/$(cat ${CPP_FILE})
    BITCODE_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).bc
    TMP_OBJ_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).o
    ANALYSIS_LOG_FILE=${NVCC_WORK_DIR}/$(basename ${INPUT}).analysis.log
    STDDEF_FOLDER=$(dirname $(find $(dirname $(dirname $(which gcc))) -name \
                "stddef.h" 2>/dev/null | head -n 1))

    if [[ $ENABLE_OMP == 1 ]]; then
        echo Looking for OpenMP pragmas in ${INPUT}
        cd ${NVCC_WORK_DIR} && python ${OMP_FINDER} ${INPUT} > ${INFO_FILE_PREFIX}.omp.info
    else
        touch ${INFO_FILE_PREFIX}.omp.info
    fi

    echo Inserting line pragmas in ${INTERMEDIATE_FILE}
    cd ${NVCC_WORK_DIR} && cat ${INTERMEDIATE_FILE} | python ${INSERT_LINES} \
        ${INPUT} > ${INTERMEDIATE_FILE}.lines
    mv ${INTERMEDIATE_FILE}.lines ${INTERMEDIATE_FILE}

    echo Inserting braces in ${INTERMEDIATE_FILE}
    cd ${NVCC_WORK_DIR} && ${BRACE_INSERT} -o ${INTERMEDIATE_FILE}.braces \
        ${INTERMEDIATE_FILE} -- -I${CHIMES_HOME}/src/libchimes \
        -I${CUDA_HOME}/include -I${STDDEF_FOLDER} $INCLUDES \
        ${CHIMES_DEF} ${DEFINES}
    cp ${INTERMEDIATE_FILE}.braces ${INTERMEDIATE_FILE}

    echo Unrolling functions in ${PREPROCESS_FILE}
    cd ${NVCC_WORK_DIR} && ${FUNCTION_UNROLL} -o ${INTERMEDIATE_FILE}.unroll \
        ${INTERMEDIATE_FILE} -- -I${CHIMES_HOME}/src/libchimes \
        -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES}
    cp ${INTERMEDIATE_FILE}.unroll ${INTERMEDIATE_FILE}

    echo Generating bitcode for ${INTERMEDIATE_FILE} into ${BITCODE_FILE}
    cd ${NVCC_WORK_DIR} && $CLANG -I${CUDA_HOME}/include \
        -I${CHIMES_HOME}/src/libchimes ${INCLUDES} -S -emit-llvm \
        ${INTERMEDIATE_FILE} -o ${BITCODE_FILE} -g ${CHIMES_DEF} ${DEFINES}

    echo Analyzing ${BITCODE_FILE} and dumping info to ${NVCC_WORK_DIR}
    cd ${NVCC_WORK_DIR} && $OPT -basicaa -load $LLVM_LIB -play < \
            ${BITCODE_FILE} > $TMP_OBJ_FILE &> ${ANALYSIS_LOG_FILE}
    rm ${TMP_OBJ_FILE}

    # Save info files off to a unique location
    echo Saving info files
    for info_file in ${INFO_FILES}; do
        if [[ ! -f ${NVCC_WORK_DIR}/${info_file} ]]; then
            echo "Missing info file ${NVCC_WORK_DIR}/${info_file}"
            exit 1
        fi
        mv ${NVCC_WORK_DIR}/${info_file} ${INFO_FILE_PREFIX}.${info_file}

    done

    echo Setting up stack variable conditionals for ${INTERMEDIATE_FILE}
    cd ${NVCC_WORK_DIR} && python ${REGISTER_STACK_VAR_COND} ${INTERMEDIATE_FILE} \
        ${INTERMEDIATE_FILE}.conds ${INFO_FILE_PREFIX}.stack.info \
        ${INFO_FILE_PREFIX}.tree.info ${INFO_FILE_PREFIX}.lines.info \
        ${INFO_FILE_PREFIX}.exit.info
    mv ${INTERMEDIATE_FILE}.conds ${INTERMEDIATE_FILE}

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
            -v ${INFO_FILE_PREFIX}.firstprivate.info \
            -b ${INFO_FILE_PREFIX}.tree.info \
            -q ${INFO_FILE_PREFIX}.quick \
            -n ${INFO_FILE_PREFIX}.npm \
            ${INTERMEDIATE_FILE} -- -I${CHIMES_HOME}/src/libchimes \
            -I${CUDA_HOME}/include -I${STDDEF_FOLDER} $INCLUDES ${CHIMES_DEF} ${DEFINES}

    TRANSFORMED_FILE=$(basename ${INTERMEDIATE_FILE})
    EXT="${TRANSFORMED_FILE##*.}"
    NAME="${TRANSFORMED_FILE%.*}"
    TRANSFORMED_FILE=${NAME}.register.${EXT}
    INCLUDE_QUICK_FILE=${NAME}.quick.${EXT}
    HARDCODED_CALLS_FILE=${NAME}.hard.${EXT}
    FIRSTPRIVATE_FILE=${NAME}.fp.${EXT}
    NPM_FILE=${NAME}.npm.${EXT}
    FINAL_FILE=${NAME}.transformed.${EXT}

    echo Adding quick function declarations and bodies to $TRANSFORMED_FILE
    cd ${NVCC_WORK_DIR} && python ${ADD_QUICK_VERSIONS} ${TRANSFORMED_FILE} ${INCLUDE_QUICK_FILE} \
        -b ${INFO_FILE_PREFIX}.quick.bodies -d ${INFO_FILE_PREFIX}.quick.decls

    echo Adding firstprivate clauses to parallel for loops in ${INCLUDE_QUICK_FILE}
    cd ${NVCC_WORK_DIR} && python ${FIRSTPRIVATE_APPENDER} ${INCLUDE_QUICK_FILE} \
        ${INFO_FILE_PREFIX}.firstprivate.info > ${FIRSTPRIVATE_FILE}

    echo Adding NPM function declarations and bodies to $FIRSTPRIVATE_FILE
    cd ${NVCC_WORK_DIR} && python ${ADD_QUICK_VERSIONS} ${FIRSTPRIVATE_FILE} ${NPM_FILE} \
        -b ${INFO_FILE_PREFIX}.npm.bodies -d ${INFO_FILE_PREFIX}.npm.decls

    echo Hardcoding quick/resumable/npm calls when possible in ${NPM_FILE}
    cd ${NVCC_WORK_DIR} && ${CALL_TRANSLATE} -o ${HARDCODED_CALLS_FILE} \
        -q ${INFO_FILE_PREFIX}.quick.decls -n ${INFO_FILE_PREFIX}.npm.decls \
        ${NPM_FILE} -- -I${CHIMES_HOME}/src/libchimes -I${CUDA_HOME}/include \
        $INCLUDES ${CHIMES_DEF} ${DEFINES}

    echo Setting up module initialization for ${HARDCODED_CALLS_FILE}
    cd ${NVCC_WORK_DIR} && python ${MODULE_INIT} ${HARDCODED_CALLS_FILE} ${FINAL_FILE} \
        ${INFO_FILE_PREFIX}.module.info ${INFO_FILE_PREFIX}.reachable.info \
        ${INFO_FILE_PREFIX}.globals.info ${INFO_FILE_PREFIX}.struct.info \
        ${INFO_FILE_PREFIX}.constants.info ${INFO_FILE_PREFIX}.stack.info \
        ${INFO_FILE_PREFIX}.tree.info ${INFO_FILE_PREFIX}.lines.info \
        ${INFO_FILE_PREFIX}.exit.info ${INFO_FILE_PREFIX}.func.info


    echo Postprocessing ${FINAL_FILE}
    cd ${NVCC_WORK_DIR} && ${GXX} -E -I${CUDA_HOME}/include -include stddef.h \
        ${CHIMES_DEF} ${DEFINES} ${FINAL_FILE} -o ${FINAL_FILE}.post && mv \
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

    ${GXX} -lpthread -I${CHIMES_HOME}/src/libchimes \
            -L${CUDA_HOME}/lib -L${CUDA_HOME}/lib64 -lcudart ${OBJ_FILE_STR} \
            -o ${OUTPUT} ${GXX_FLAGS} ${INCLUDES} ${LIB_PATHS} ${LIBS} \
            ${LINKER_FLAGS}

    if [[ $KEEP == 0 ]]; then
        rm -rf ${WORK_DIR}
        for f in ${OBJ_FILES[@]}; do
            rm -f $f
        done
    fi
fi

exit 0
