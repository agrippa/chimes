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
GXX_FLAGS="-O3"
DEFINES=

while getopts ":kci:I:L:l:o:w:vpx:y:sD:d" opt; do
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

echo WORK_DIR = $WORK_DIR

OPT=$(find_opt)
GXX=${GXX:-/usr/bin/g++}
CLANG=$(find_clang)
TRANSFORM=${CHIMES_HOME}/src/preprocessing/clang/transform
BRACE_INSERT=${CHIMES_HOME}/src/preprocessing/brace_insert/brace_insert
FUNCTION_UNROLL=${CHIMES_HOME}/src/preprocessing/function_unroll/function_unroll
CALL_TRANSLATE=${CHIMES_HOME}/src/preprocessing/call_translate/call_translate
OMP_FINDER=${CHIMES_HOME}/src/preprocessing/openmp/openmp_finder.py
SCOP_FINDER=${CHIMES_HOME}/src/preprocessing/scop/find_scop.py
REGISTER_STACK_VAR_COND=${CHIMES_HOME}/src/preprocessing/module_init/register_stack_var_cond.py
MODULE_INIT=${CHIMES_HOME}/src/preprocessing/module_init/module_init.py
ADD_QUICK_VERSIONS=${CHIMES_HOME}/src/preprocessing/module_init/add_quick_versions.py
ADD_NPM_CONDS=${CHIMES_HOME}/src/preprocessing/module_init/add_cond_npm_vars.py
INSERT_LINES=${CHIMES_HOME}/src/preprocessing/insert_line_numbers.py
FIRSTPRIVATE_APPENDER=${CHIMES_HOME}/src/preprocessing/openmp/firstprivate_appender.py
CHIMES_DEF=-D__CHIMES_SUPPORT
LLVM_LIB=$(get_llvm_lib)

echo Using GXX ${GXX}

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

if [[ $ENABLE_OMP == 1 ]]; then
    GXX_FLAGS="${GXX_FLAGS} -fopenmp"
fi

for INPUT in ${ABS_INPUTS[@]}; do
    INFO_FILE_PREFIX=${WORK_DIR}/$(basename ${INPUT})
    PREPROCESS_FILE=${WORK_DIR}/$(basename ${INPUT}).pre.cpp
    PREPROCESSED_WITH_CONDS_FILE=${WORK_DIR}/$(basename ${INPUT}).pre.conds.cpp
    BITCODE_FILE=${WORK_DIR}/$(basename ${INPUT}).bc
    TMP_OBJ_FILE=${WORK_DIR}/$(basename ${INPUT}).o
    ANALYSIS_LOG_FILE=${WORK_DIR}/$(basename ${INPUT}).analysis.log

    if [[ $ENABLE_OMP == 1 ]]; then
        echo Looking for OpenMP pragmas in ${INPUT}
        cd ${WORK_DIR} && python ${OMP_FINDER} ${INPUT} > ${INFO_FILE_PREFIX}.omp.info
    else
        touch ${INFO_FILE_PREFIX}.omp.info
    fi

    cd ${WORK_DIR} && python ${SCOP_FINDER} ${INPUT} \
        ${INFO_FILE_PREFIX}.scop.info ${INFO_FILE_PREFIX}.scop.body

    echo Preprocessing ${INPUT} into ${PREPROCESS_FILE}
    cd ${WORK_DIR} && ${GXX} -I${CUDA_HOME}/include \
           -I${CHIMES_HOME}/src/libchimes ${INCLUDES} -E ${INPUT} \
           -o ${PREPROCESS_FILE} -g ${GXX_FLAGS} \
           -include${CHIMES_HOME}/src/libchimes/libchimes.h \
           ${CHIMES_DEF} ${DEFINES}

    echo Inserting line pragmas in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && cat ${PREPROCESS_FILE} | python ${INSERT_LINES} ${INPUT} > \
           ${PREPROCESS_FILE}.lines
    cp ${PREPROCESS_FILE}.lines ${PREPROCESS_FILE}

    echo Inserting braces in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && ${BRACE_INSERT} -o ${PREPROCESS_FILE}.braces \
        ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
        -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES}
    cp ${PREPROCESS_FILE}.braces ${PREPROCESS_FILE}

    echo Unrolling functions in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && ${FUNCTION_UNROLL} -o ${PREPROCESS_FILE}.unroll \
        -a ${PREPROCESS_FILE}.attrs ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
        -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES}
    cp ${PREPROCESS_FILE}.unroll ${PREPROCESS_FILE}

    echo Generating bitcode for ${PREPROCESS_FILE} into ${BITCODE_FILE}
    cd ${WORK_DIR} && $CLANG -I${CUDA_HOME}/include \
           -I${CHIMES_HOME}/src/libchimes ${INCLUDES} -S -emit-llvm \
           ${PREPROCESS_FILE} -o ${BITCODE_FILE} -g ${CHIMES_DEF} ${DEFINES}

    echo $OPT -basicaa -load $LLVM_LIB -play < \
           ${BITCODE_FILE}
    echo Analyzing ${BITCODE_FILE} and dumping info to ${WORK_DIR}
    cd ${WORK_DIR} && NOCHECKPOINT_FILE=${PREPROCESS_FILE}.attrs $OPT -basicaa -load $LLVM_LIB -play < \
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

    echo Setting up stack variable conditionals for ${PREPROCESS_FILE}
    cd ${WORK_DIR} && python ${REGISTER_STACK_VAR_COND} ${PREPROCESS_FILE} \
        ${PREPROCESSED_WITH_CONDS_FILE} ${INFO_FILE_PREFIX}.stack.info \
        ${INFO_FILE_PREFIX}.tree.info ${INFO_FILE_PREFIX}.lines.info \
        ${INFO_FILE_PREFIX}.exit.info
    mv ${PREPROCESSED_WITH_CONDS_FILE} ${PREPROCESS_FILE}

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
            -v ${INFO_FILE_PREFIX}.firstprivate.info \
            -b ${INFO_FILE_PREFIX}.tree.info \
            -q ${INFO_FILE_PREFIX}.quick \
            -n ${INFO_FILE_PREFIX}.npm \
            -e ${INFO_FILE_PREFIX}.locs \
            -g ${INFO_FILE_PREFIX}.list_of_externs \
            -j ${INFO_FILE_PREFIX}.fptrs \
            -u ${INFO_FILE_PREFIX}.merge \
            ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
            -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES}

    TRANSFORMED_FILE=$(basename ${PREPROCESS_FILE})
    EXT="${TRANSFORMED_FILE##*.}"
    NAME="${TRANSFORMED_FILE%.*}"
    TRANSFORMED_FILE=${NAME}.register.${EXT}
    INCLUDE_QUICK_FILE=${NAME}.quick.${EXT}
    FIRSTPRIVATE_FILE=${NAME}.fp.${EXT}
    NPM_FILE=${NAME}.npm.${EXT}
    HARDCODED_CALLS_FILE=${NAME}.hard.${EXT}
    NPM_CONDS_FILE=${NAME}.npm_conds.${EXT}
    FINAL_FILE=${NAME}.transformed.${EXT}

    echo Adding quick function declarations and bodies to $TRANSFORMED_FILE
    cd ${WORK_DIR} && python ${ADD_QUICK_VERSIONS} ${TRANSFORMED_FILE} ${INCLUDE_QUICK_FILE} \
        -b ${INFO_FILE_PREFIX}.quick.bodies -d ${INFO_FILE_PREFIX}.quick.decls

    echo Adding firstprivate clauses to parallel for loops in ${INCLUDE_QUICK_FILE}
    cd ${WORK_DIR} && python ${FIRSTPRIVATE_APPENDER} ${INCLUDE_QUICK_FILE} \
        ${INFO_FILE_PREFIX}.firstprivate.info > ${FIRSTPRIVATE_FILE}

    echo Adding NPM function declarations, bodies, and pointers to ${FIRSTPRIVATE_FILE}
    cd ${WORK_DIR} && python ${ADD_QUICK_VERSIONS} ${FIRSTPRIVATE_FILE} ${NPM_FILE} \
        -b ${INFO_FILE_PREFIX}.npm.bodies -d ${INFO_FILE_PREFIX}.npm.decls \
        -e ${INFO_FILE_PREFIX}.list_of_externs 

    echo Adding NPM conditionals to ${NPM_FILE}
    cd ${WORK_DIR} && python ${ADD_NPM_CONDS} ${NPM_FILE} \
        ${NPM_CONDS_FILE} ${INFO_FILE_PREFIX}.npm.decls \
        ${INFO_FILE_PREFIX}.list_of_externs

    echo Hardcoding quick/resumable/npm calls when possible in ${NPM_CONDS_FILE}
    cd ${WORK_DIR} && ${CALL_TRANSLATE} -o ${HARDCODED_CALLS_FILE} \
        -q ${INFO_FILE_PREFIX}.quick.decls -n ${INFO_FILE_PREFIX}.npm.decls \
        -e ${INFO_FILE_PREFIX}.externs ${NPM_CONDS_FILE} -- \
        -I${CHIMES_HOME}/src/libchimes -I${CUDA_HOME}/include $INCLUDES \
        ${CHIMES_DEF} ${DEFINES}

    echo Setting up module initialization for ${HARDCODED_CALLS_FILE}
    cd ${WORK_DIR} && python ${MODULE_INIT} -i ${HARDCODED_CALLS_FILE} -o ${FINAL_FILE} \
        -m ${INFO_FILE_PREFIX}.module.info -r ${INFO_FILE_PREFIX}.reachable.info \
        -g ${INFO_FILE_PREFIX}.globals.info -s ${INFO_FILE_PREFIX}.struct.info \
        -c ${INFO_FILE_PREFIX}.constants.info -v ${INFO_FILE_PREFIX}.stack.info \
        -t ${INFO_FILE_PREFIX}.tree.info -l ${INFO_FILE_PREFIX}.lines.info \
        -x ${INFO_FILE_PREFIX}.exit.info -f ${INFO_FILE_PREFIX}.func.info \
        -e ${INFO_FILE_PREFIX}.list_of_externs -n ${INFO_FILE_PREFIX}.npm.decls \
        -d ${INFO_FILE_PREFIX}.call.info -h ${INFO_FILE_PREFIX}.locs \
        -j ${INFO_FILE_PREFIX}.fptrs -ms ${INFO_FILE_PREFIX}.merge.static \
        -md ${INFO_FILE_PREFIX}.merge.dynamic

    echo Postprocessing ${FINAL_FILE}
    cd ${WORK_DIR} && ${GXX} -E -include stddef.h ${FINAL_FILE} ${CHIMES_DEF} ${DEFINES} \
        -o ${FINAL_FILE}.post
    mv ${WORK_DIR}/${FINAL_FILE}.post ${WORK_DIR}/${FINAL_FILE}

    FINAL_FILE=${WORK_DIR}/${FINAL_FILE}

    LAST_FILES+=($FINAL_FILE)
done

for f in ${LAST_FILES[@]}; do
    echo $f
done

if [[ $COMPILE == 1 ]]; then
    for FINAL_FILE in ${LAST_FILES[@]}; do
        OBJ_FILE=${FINAL_FILE}.o

        ${GXX} -c -I${CHIMES_HOME}/src/libchimes ${FINAL_FILE} \
            -o ${OBJ_FILE} ${GXX_FLAGS} ${INCLUDES} ${CHIMES_DEF} ${DEFINES}

        if [[ ! -f ${OBJ_FILE} ]]; then
            echo "Missing object file $OBJ_FILE for input $INPUT"
            exit 1
        fi

        echo $OBJ_FILE
    done
else
    FILES_STR=""
    for f in ${LAST_FILES[@]}; do
        FILES_STR="${FILES_STR} $f"
    done

    COMPILE_CMD="${GXX} -lpthread -I${CHIMES_HOME}/src/libchimes ${FILES_STR} \
        -o ${OUTPUT} ${LIB_PATHS} ${LIBS} ${GXX_FLAGS} ${INCLUDES} \
        ${LINKER_FLAGS}"
    # [[ ! $VERBOSE ]] || echo $COMPILE_CMD
    $COMPILE_CMD

    if [[ $KEEP == 0 ]]; then
        rm -rf ${WORK_DIR}
    fi
fi
