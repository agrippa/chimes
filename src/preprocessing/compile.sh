#!/bin/bash

set -e

script_dir="$(dirname $0)"
source ${script_dir}/common.sh

KEEP=0
INPUTS=()
# CU_INPUTS=()
# CPP_INPUTS=()
OBJ_FILES=()
LAST_FILES=()
INCLUDES=
LINK_INCLUDES=
LIB_PATHS=
LINK_LIB_PATHS=
LIBS=
LINK_LIBS=
OUTPUT_FILE=a.out
VERBOSE=0

while getopts ":ki:I:L:l:vo:" opt; do
    case $opt in 
        i)
            INPUTS+=(${OPTARG})
            ;;
        I)
            INCLUDES="${INCLUDES} -I ${OPTARG}"
            LINK_INCLUDES="${LINK_INCLUDES} -I${OPTARG}"
            ;;
        L)
            LIB_PATHS="${LIB_PATHS} -L ${OPTARG}"
            LINK_LIB_PATHS="${LINK_LIB_PATHS} -L${OPTARG}"
            ;;
        l)
            LIBS="${LIBS} -l ${OPTARG}"
            LINK_LIBS="${LINK_LIBS} -l${OPTARG}"
            ;;
        k)
            KEEP=1
            ;;
        o)
            OUTPUT_FILE=${OPTARG}
            ;;
        v)
            VERBOSE=1
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

WORK_DIR=$(mktemp -d /tmp/numdebug.XXXXXX)
OUTPUT=$(pwd)/${OUTPUT_FILE}

if [[ "${#INPUTS[@]}" -eq "0" ]]; then
    echo usage: compile.sh [-k] [-I include-path] [-l libname] [-L lib-path] [-o output] -i input.cpp/cu
    exit 1
fi

COMPILER_FLAGS="${INCLUDES} ${LIB_PATHS} ${LIBS}"
[[ ! $VERBOSE ]] || COMPILER_FLAGS="${COMPILER_FLAGS} -v"

for INPUT in ${INPUTS[@]}; do
    BASENAME=$(basename ${INPUT})
    EXT="${INPUT##*.}"
    LOG_FILE=

    if [[ ${EXT} == "cpp" ]]; then
        # CPP file
        LOG_FILE=${WORK_DIR}/cpp.log
        COMPILE_CPP_CMD="${script_dir}/compile_cpp.sh -c -i ${INPUT} \
                         ${COMPILER_FLAGS} -w ${WORK_DIR}"
        [[ ! $VERBOSE ]] || echo $COMPILE_CPP_CMD
        ${COMPILE_CPP_CMD} > ${LOG_FILE}
    elif [[ ${EXT} == "cu" ]]; then
        # CU file
        LOG_FILE=${WORK_DIR}/cu.log
        COMPILE_CU_CMD="${script_dir}/compile_cuda.sh -c -i ${INPUT} \
                        ${COMPILER_FLAGS} -w ${WORK_DIR}"
        [[ ! $VERBOSE ]] || echo $COMPILE_CU_CMD
        $COMPILE_CU_CMD > ${LOG_FILE}
    else
        echo "Unsupported file extension ${EXT}"
        exit 1
    fi

    OBJ_FILES+=($(tail -n 1 ${LOG_FILE}))

    LINES=$(cat ${LOG_FILE} | wc -l)
    WANT_LINES=$(echo $LINES - 1 | bc)
    LAST_FILES+=($(head -n $WANT_LINES ${LOG_FILE} | tail -n 1))
done

OBJ_FILE_STR=""
for f in ${OBJ_FILES[@]}; do
    OBJ_FILE_STR="${OBJ_FILE_STR} $f"
done

LINK_CMD="g++ -lpthread -I${NUM_DEBUG_HOME}/src/libnumdebug \
        -L${NUM_DEBUG_HOME}/src/libnumdebug -L${CUDA_HOME}/lib -lnumdebug \
        -lcudart ${OBJ_FILE_STR} -o ${OUTPUT} ${LINK_INCLUDES} ${LINK_LIB_PATHS} \
        ${LINK_LIBS} -g -O0"
[[ ! $VERBOSE ]] || echo $LINK_CMD
$LINK_CMD

for f in ${LAST_FILES[@]}; do
    echo $f
done

if [[ $KEEP == 0 ]]; then
    rm -rf ${WORK_DIR}
    for f in ${OBJ_FILES[@]}; do
        rm -f $f
    done
fi
