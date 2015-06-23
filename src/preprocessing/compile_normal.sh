#!/bin/bash

set -e

script_dir="$(dirname $0)"
source ${script_dir}/common.sh
source ${CHIMES_HOME}/src/common.conf

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
GXX_FLAGS="-O3"
DEFINES=
ADDED_INCLUDES=

while getopts ":kci:I:L:l:o:w:vpy:D:snf:" opt; do
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
        y)
            GXX_FLAGS="${GXX_FLAGS} ${OPTARG}"
            ;;
        D)
            DEFINES="$DEFINES -D${OPTARG}"
            ;;
        s)
            ENABLE_OMP=0
            ;;
        n)
            GXX=${GCC}
            ;;
        f)
            ADDED_INCLUDES="$ADDED_INCLUDES -include ${OPTARG}"
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
    echo usage: compile_normal.sh [-c] [-k] [-v] [-p] [-I include-path] [-l libname] [-L lib-path] -i input.cpp
    exit 1
fi

if [[ $ENABLE_OMP == 1 ]]; then
    GXX_FLAGS="${GXX_FLAGS} -fopenmp"
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

echo Using GXX ${GXX}

if [[ -z ${WORK_DIR} ]]; then
    WORK_DIR=$(mktemp -d /tmp/chimes.XXXXXX)
fi

[[ $PROFILE == 0 ]] || GXX_FLAGS="${GXX_FLAGS} -pg"

for INPUT in ${ABS_INPUTS[@]}; do
    BASENAME=$(basename ${INPUT})
    EXT="${INPUT##*.}"

    OBJ_FILE=${INPUT}.o

    LAST_FILES+=($INPUT)
    OBJ_FILES+=($OBJ_FILE)

    if [[ ${EXT} == "cpp" || ${EXT} == "cc" || ${EXT} == "c" ]]; then
        ${GXX} -Xlinker ${EXPORT_DYNAMIC_FLAG} -c ${INPUT} -o ${OBJ_FILE} \
            ${GXX_FLAGS} ${INCLUDES} ${DEFINES} ${ADDED_INCLUDES}
    elif [[ ${EXT} == "cu" ]]; then
        nvcc -arch=sm_20 -c ${GXX_FLAGS} ${INPUT} -o ${OBJ_FILE} \
                   ${INCLUDES} ${DEFINES}
    else
        echo Unsupported file format: ${EXT}
        exit 1
    fi

    if [[ ! -f ${OBJ_FILE} ]]; then
        echo "Missing object file $OBJ_FILE for input $INPUT, possibly an unsupported file extension?"
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

    ${GXX} -Xlinker ${EXPORT_DYNAMIC_FLAG} -lpthread ${OBJ_FILE_STR} -o ${OUTPUT} ${LIB_PATHS} ${LIBS} \
        ${GXX_FLAGS} ${INCLUDES} -L${CUDA_HOME}/lib -L${CUDA_HOME}/lib64 \
        -lcudart ${DEFINES}

    if [[ $KEEP == 0 ]]; then
        rm -rf ${WORK_DIR}
    fi
fi
