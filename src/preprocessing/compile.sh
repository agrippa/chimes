#!/bin/bash

set -e

script_dir="$(dirname $0)"

KEEP=0
CU_INPUTS=()
CPP_INPUTS=()
OBJ_FILES=()
LAST_FILES=()
INCLUDES=
LINK_INCLUDES=
LIB_PATHS=
LINK_LIB_PATHS=
LIBS=
LINK_LIBS=
OUTPUT_FILE=a.out

while getopts ":ki:I:L:l:" opt; do
    case $opt in 
        i)
            BASENAME=$(basename ${OPTARG})
            EXT="${BASENAME##*.}"
            if [[ ${EXT} == "cpp" ]]; then
                CPP_INPUTS+=(${OPTARG})
            elif [[ ${EXT} == "cu" ]]; then
                CU_INPUTS+=(${OPTARG})
            else
                echo "Unsupported file extension ${EXT}"
                exit 1
            fi
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

N_CU_INPUTS=${#CU_INPUTS[@]}
N_CPP_INPUTS=${#CPP_INPUTS[@]}
TOTAL=$(echo $N_CU_INPUTS + $N_CPP_INPUTS | bc)

if [ "$TOTAL" == "0" ]; then
    echo usage: compile.sh [-k] [-I include-path] [-l libname] [-L lib-path] [-o output]-i input.cpp/cu
    exit 1
fi

if [[ $N_CPP_INPUTS -gt 0 ]]; then
    CPP_INPUTS_STR=""
    for f in ${CPP_INPUTS[@]}; do
        CPP_INPUTS_STR="${CPP_INPUTS_STR} -i $f"
    done

    ${script_dir}/compile_cpp.sh -c ${CPP_INPUTS_STR} ${INCLUDES} ${LIB_PATHS} \
            ${LIBS} -w ${WORK_DIR} > ${WORK_DIR}/cpp.log

    for f in $(cat ${WORK_DIR}/cpp.log | tail -n ${N_CPP_INPUTS}); do
        OBJ_FILES+=($f)
    done

    LINES=$(cat ${WORK_DIR}/cpp.log | wc -l)
    WANT_LINES=$(echo $LINES - $N_CPP_INPUTS | bc)
    for f in $(head -n $WANT_LINES ${WORK_DIR}/cpp.log | tail -n $N_CPP_INPUTS); do
        LAST_FILES+=($f)
    done
fi

if [[ $N_CU_INPUTS -gt 0 ]]; then
    CU_INPUTS_STR=""
    for f in ${CU_INPUTS[@]}; do
        CU_INPUTS_STR="${CU_INPUTS_STR} -i $f"
    done

    ${script_dir}/compile_cuda.sh -c ${CU_INPUTS_STR} ${INCLUDES} ${LIB_PATHS} \
            ${LIBS} -w ${WORK_DIR} > ${WORK_DIR}/cu.log

    for f in $(cat ${WORK_DIR}/cu.log | tail -n ${N_CU_INPUTS}); do
        OBJ_FILES+=($f)
    done

    LINES=$(cat ${WORK_DIR}/cu.log | wc -l)
    WANT_LINES=$(echo $LINES - $N_CU_INPUTS | bc)
    for f in $(head -n $WANT_LINES ${WORK_DIR}/cu.log | tail -n $N_CU_INPUTS); do
        LAST_FILES+=($f)
    done
fi

OBJ_FILE_STR=""
for f in ${OBJ_FILES[@]}; do
    OBJ_FILE_STR="${OBJ_FILE_STR} $f"
done

g++ -lpthread -I${NUM_DEBUG_HOME}/src/libnumdebug \
        -L${NUM_DEBUG_HOME}/src/libnumdebug -L${CUDA_HOME}/lib -lnumdebug \
        -lcudart ${OBJ_FILE_STR} -o ${OUTPUT} ${LINK_INCLUDES} ${LINK_LIB_PATHS} \
        ${LINK_LIBS} -g -O0

for f in ${LAST_FILES[@]}; do
    echo $f
done

if [[ $KEEP == 0 ]]; then
    rm -rf ${WORK_DIR}
    for f in ${OBJ_FILES[@]}; do
        rm -f $f
    done
fi
