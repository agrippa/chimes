#!/bin/bash

set -e

script_dir="$(dirname $0)"
source ${script_dir}/common.sh

INFO_FILES="lines.info struct.info stack.info heap.info func.info call.info exit.info reachable.info globals.info"
ENABLE_OMP=1
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
DEFINES=

while getopts ":kci:I:L:l:o:w:vpx:sD:" opt; do
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
    echo usage: compile_cpp.sh [-c] [-k] [-p] [-v] [-s] [-I include-path] [-l libname] [-L lib-path] -i input.cpp
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

if [[ -z ${WORK_DIR} ]]; then
    WORK_DIR=$(mktemp -d /tmp/chimes.XXXXXX)
fi

OPT=$(find_opt)
GXX=${GXX:-/usr/bin/g++}
CLANG=$(find_clang)
TRANSFORM=${CHIMES_HOME}/src/preprocessing/clang/transform
OMP_FINDER=${CHIMES_HOME}/src/preprocessing/openmp/openmp_finder.py
MODULE_INIT=${CHIMES_HOME}/src/preprocessing/module_init/module_init.py
INSERT_LINES=${CHIMES_HOME}/src/preprocessing/insert_line_numbers.py
CHIMES_DEF=-D__CHIMES_SUPPORT
LLVM_LIB=$(get_llvm_lib)

GXX_FLAGS="-g -O0 ${INCLUDES}"
[[ ! $PROFILE ]] || GXX_FLAGS="${GXX_FLAGS} -pg"

echo WORK_DIR = $WORK_DIR

for INPUT in ${ABS_INPUTS[@]}; do
    INFO_FILE_PREFIX=${WORK_DIR}/$(basename ${INPUT})
    PREPROCESS_FILE=${WORK_DIR}/$(basename ${INPUT}).pre.cpp
    BITCODE_FILE=${WORK_DIR}/$(basename ${INPUT}).bc
    TMP_OBJ_FILE=${WORK_DIR}/$(basename ${INPUT}).o
    ANALYSIS_LOG_FILE=${WORK_DIR}/$(basename ${INPUT}).analysis.log
    STDDEF_FOLDER=$(dirname $(find $(dirname $(dirname $(which gcc))) -name \
                "stddef.h" 2>/dev/null | head -n 1))

    if [[ $ENABLE_OMP == 1 ]]; then
        echo Looking for OpenMP pragmas in ${INPUT}
        cd ${WORK_DIR} && python ${OMP_FINDER} ${INPUT} > ${INFO_FILE_PREFIX}.omp.info
    else
        touch ${INFO_FILE_PREFIX}.omp.info
    fi

    echo Preprocessing ${INPUT} into ${PREPROCESS_FILE}
    cd ${WORK_DIR} && ${GXX} -I${CUDA_HOME}/include \
           -I${CHIMES_HOME}/src/libchimes ${INCLUDES} -E ${INPUT} \
           -o ${PREPROCESS_FILE} -g ${LINKER_FLAGS} \
           -include${CHIMES_HOME}/src/libchimes/libchimes.h \
           -include stddef.h -include stdio.h ${CHIMES_DEF} ${DEFINES}

    echo Inserting line pragmas in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && cat ${PREPROCESS_FILE} | python ${INSERT_LINES} ${INPUT} > \
           ${PREPROCESS_FILE}.lines
    mv ${PREPROCESS_FILE}.lines ${PREPROCESS_FILE}

    echo Generating bitcode for ${PREPROCESS_FILE} into ${BITCODE_FILE}
    cd ${WORK_DIR} && $CLANG -I${CUDA_HOME}/include \
           -I${CHIMES_HOME}/src/libchimes ${INCLUDES} -S -emit-llvm \
           ${PREPROCESS_FILE} -o ${BITCODE_FILE} -g ${CHIMES_DEF} ${DEFINES}

    echo Analyzing ${BITCODE_FILE} and dumping info to ${WORK_DIR}
    cd ${WORK_DIR} && $OPT -basicaa -load $LLVM_LIB -play < \
           ${BITCODE_FILE} &>${ANALYSIS_LOG_FILE} > $TMP_OBJ_FILE
    rm ${TMP_OBJ_FILE}

    # Save info files off to a unique location
    echo Saving info files
    for info_file in ${INFO_FILES}; do
        if [[ ! -f ${WORK_DIR}/${info_file} ]]; then
            echo "Missing info file ${WORK_DIR}/${info_file}"
            exit 1
        fi
        mv ${WORK_DIR}/${info_file} ${INFO_FILE_PREFIX}.${info_file}

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
            -w ${WORK_DIR} \
            -c true \
            -t ${INFO_FILE_PREFIX}.omp.info \
            ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
            -I${CUDA_HOME}/include -I${STDDEF_FOLDER} $INCLUDES ${CHIMES_DEF} ${DEFINES}

    TRANSFORMED_FILE=$(basename ${PREPROCESS_FILE})
    EXT="${TRANSFORMED_FILE##*.}"
    NAME="${TRANSFORMED_FILE%.*}"
    TRANSFORMED_FILE=${NAME}.register.${EXT}
    FINAL_FILE=${NAME}.transformed.${EXT}

    echo Setting up module initialization for ${TRANSFORMED_FILE}
    cd ${WORK_DIR} && python ${MODULE_INIT} ${TRANSFORMED_FILE} ${FINAL_FILE} \
        ${INFO_FILE_PREFIX}.module.info ${INFO_FILE_PREFIX}.reachable.info \
        ${INFO_FILE_PREFIX}.globals.info ${INFO_FILE_PREFIX}.struct.info

    echo Postprocessing ${FINAL_FILE}
    cd ${WORK_DIR} && ${GXX} -E -include stddef.h ${FINAL_FILE} ${CHIMES_DEF} ${DEFINES} \
        -o ${FINAL_FILE}.post && mv ${FINAL_FILE}.post ${FINAL_FILE}

    FINAL_FILE=${WORK_DIR}/${FINAL_FILE}
    OBJ_FILE=${FINAL_FILE}.o

    LAST_FILES+=($FINAL_FILE)
    OBJ_FILES+=($OBJ_FILE)

    ${GXX} --compile -I${CHIMES_HOME}/src/libchimes ${FINAL_FILE} \
        -o ${OBJ_FILE} ${GXX_FLAGS} ${CHIMES_DEF} ${DEFINES}

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
            -L${CHIMES_HOME}/src/libchimes -lchimes ${OBJ_FILE_STR} \
            -o ${OUTPUT} ${LIB_PATHS} ${LIBS} ${GXX_FLAGS} ${LINKER_FLAGS}

    if [[ $KEEP == 0 ]]; then
        rm -rf ${WORK_DIR}
    fi
fi
