#!/bin/bash

set -e

INFO_FILES="lines.info struct.info stack.info heap.info func.info call.info exit.info reachable.info"
KEEP=0
COMPILE=0
INPUTS=()
INCLUDES=
LIB_PATHS=
LIBS=
OUTPUT_FILE=a.out
WORK_DIR=

while getopts ":kci:I:L:l:o:w:" opt; do
    case $opt in 
        i)
            INPUTS+=(${OPTARG})
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
        c)
            COMPILE=1
            ;;
        w)
            WORK_DIR=${OPTARG}
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

if [[ "${#INPUTS[@]}" -eq "0" ]]; then
    echo usage: compile_cpp.sh [-k] [-I include-path] [-l libname] [-L lib-path] -i input.cpp
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
    WORK_DIR=$(mktemp -d /tmp/numdebug.XXXXXX)
fi

OPT=${LLVM_INSTALL}/Debug+Asserts/bin/opt
CLANG=${LLVM_INSTALL}/Debug+Asserts/bin/clang
TRANSFORM=${NUM_DEBUG_HOME}/src/preprocessing/clang/transform

echo WORK_DIR = $WORK_DIR

for INPUT in ${ABS_INPUTS[@]}; do
    INFO_FILE_PREFIX=${WORK_DIR}/$(basename ${INPUT})
    PREPROCESS_FILE=${WORK_DIR}/$(basename ${INPUT}).pre.cpp
    BITCODE_FILE=${WORK_DIR}/$(basename ${INPUT}).bc
    TMP_OBJ_FILE=${WORK_DIR}/$(basename ${INPUT}).o
    ANALYSIS_LOG_FILE=${WORK_DIR}/$(basename ${INPUT}).analysis.log
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
            -w ${WORK_DIR} \
            -c true \
            ${PREPROCESS_FILE} -- -I${NUM_DEBUG_HOME}/src/libnumdebug \
            -I${CUDA_HOME}/include -I${STDDEF_FOLDER} $INCLUDES

    LAST_FILE=$(basename ${PREPROCESS_FILE})
    EXT="${LAST_FILE##*.}"
    NAME="${LAST_FILE%.*}"
    LAST_FILE=${NAME}.register.${EXT}

    echo Postprocessing ${LAST_FILE}
    cd ${WORK_DIR} && g++ -E -include stddef.h ${LAST_FILE} \
        -o ${LAST_FILE}.post && mv ${LAST_FILE}.post ${LAST_FILE}

    LAST_FILE=${WORK_DIR}/${LAST_FILE}
    OBJ_FILE=${LAST_FILE}.o

    LAST_FILES+=($LAST_FILE)
    OBJ_FILES+=($OBJ_FILE)

    g++ --compile -I${NUM_DEBUG_HOME}/src/libnumdebug ${LAST_FILE} \
        -o ${OBJ_FILE} ${INCLUDES} -g -O0

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

    g++ -lpthread -I${NUM_DEBUG_HOME}/src/libnumdebug \
            -L${NUM_DEBUG_HOME}/src/libnumdebug -lnumdebug ${OBJ_FILE_STR} \
            -o ${OUTPUT} ${INCLUDES} ${LIB_PATHS} ${LIBS} -g -O0

    if [[ $KEEP == 0 ]]; then
        rm -rf ${WORK_DIR}
    fi
fi
