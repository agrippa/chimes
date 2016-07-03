#!/bin/bash

set -e

script_dir="$(dirname $0)"
source ${script_dir}/common.sh
source ${CHIMES_HOME}/src/common.conf

INFO_FILES="lines.info struct.info stack.info heap.info func.info call.info \
    exit.info reachable.info globals.info constants.info tree.info"
ENABLE_OMP=1
KEEP=0
PROFILE=0
DUMMY=0
BLOCK_CHECKPOINTS="false"
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
ADDED_INCLUDES=
CHIMES_PROFILE=0
PASS_THROUGH_FLAGS=""

if [[ -z "${EXPORT_DYNAMIC_FLAG}" ]]; then
    echo "Missing EXPORT_DYNAMIC_FLAG from the environment. For example, when \
        using the GNU toolchain set:"
    echo "    export EXPORT_DYNAMIC_FLAG=-export-dynamic"
    exit 1
fi

while [ $# -gt 0 ]; do
    case $1 in
        -g)
            CHIMES_PROFILE=1
            ;;
        -d)
            DUMMY=1
            ;;
        -b)
            BLOCK_CHECKPOINTS="true"
            ;;
        *.cpp|*.cc|*.c|*.cxx)
            INPUTS+=($(get_absolute_path $1))
            ;;
        -I*)
            INCLUDES="$INCLUDES -I$(get_absolute_path ${1:2})"
            ;;
        -L*)
            LIB_PATHS="$LIB_PATHS -L$(get_absolute_path ${1:2})"
            ;;
        -l*)
            LIBS="$LIBS $1"
            ;;
        -k)
            KEEP=1
            ;;
        -c)
            COMPILE=1
            ;;
        -w)
            WORK_DIR=$2
            shift
            ;;
        -o)
            OUTPUT_FILE=$2
            shift
            ;;
        -v)
            VERBOSE=1
            ;;
        -p)
            PROFILE=1
            ;;
        -x)
            LINKER_FLAGS="$LINKER_FLAGS $2"
            shift
            ;;
        -y)
            GXX_FLAGS="$GXX_FLAGS $2"
            shift
            ;;
        -s)
            ENABLE_OMP=0
            ;;
        -D*)
            DEFINES="$DEFINES $1"
            ;;
        -n)
            GXX=$GCC
            ;;
        *)
            # Catch all other flags and just pass them through to $GXX
            GXX_FLAGS="$GXX_FLAGS $1"
            ;;
    esac

    shift
done

if [[ "${#INPUTS[@]}" -eq "0" ]]; then
    echo usage: compile_cpp.sh [-c] [-k] [-p] [-v] [-s] [-I include-path] \
        [-l libname] [-L lib-path] -i input.cpp
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
if [[ $OUTPUT_FILE = /* ]]; then
    OUTPUT=$OUTPUT_FILE
else
    OUTPUT=$(pwd)/${OUTPUT_FILE}
fi

if [[ -z ${WORK_DIR} ]]; then
    WORK_DIR=$(mktemp -d /tmp/chimes.XXXXXX)
else
    # In case it doesn't exist
    mkdir -p $WORK_DIR
fi

echo WORK_DIR = $WORK_DIR

OPT=$(find_opt)
CLANG=$(find_clang)
TRANSFORM=${CHIMES_HOME}/src/preprocessing/clang/transform
BRACE_INSERT=${CHIMES_HOME}/src/preprocessing/brace_insert/brace_insert
FUNCTION_UNROLL=${CHIMES_HOME}/src/preprocessing/function_unroll/function_unroll
RETURN_UNROLL=${CHIMES_HOME}/src/preprocessing/return_unroll/return_unroll
CALL_TRANSLATE=${CHIMES_HOME}/src/preprocessing/call_translate/call_translate
FIND_ALLOCATORS=${CHIMES_HOME}/src/preprocessing/find_allocators/find_allocators
FIND_NONCHKPTING=${CHIMES_HOME}/src/preprocessing/find_nonchkpting_fptrs/find_nonchkpting_fptrs
OMP_FINDER=${CHIMES_HOME}/src/preprocessing/openmp/openmp_finder.py
OMP_INSERTER=${CHIMES_HOME}/src/preprocessing/openmp/openmp_inserter.py
OMP_APPENDER=${CHIMES_HOME}/src/preprocessing/openmp_appender/openmp_appender
REGISTER_STACK_VAR_COND=${CHIMES_HOME}/src/preprocessing/module_init/register_stack_var_cond.py
MODULE_INIT=${CHIMES_HOME}/src/preprocessing/module_init/module_init.py
ADD_QUICK_VERSIONS=${CHIMES_HOME}/src/preprocessing/module_init/add_quick_versions.py
ADD_NPM_CONDS=${CHIMES_HOME}/src/preprocessing/module_init/add_cond_npm_vars.py
INSERT_LINES=${CHIMES_HOME}/src/preprocessing/insert_line_numbers.py
FIRSTPRIVATE_APPENDER=${CHIMES_HOME}/src/preprocessing/openmp/firstprivate_appender.py
CHIMES_DEF=-D__CHIMES_SUPPORT
LLVM_LIB=$(get_llvm_lib)

echo Using GXX ${GXX}
[[ $VERBOSE -eq 0 ]] || echo "Verbose output ($VERBOSE)"

if [[ $COMPILE == 1 ]]; then
    [[ $VERBOSE -eq 0 ]] || echo Compiling only, not linking

    if [[ ${#INPUTS[@]} != 1 ]]; then
        echo 'You cannot specify -c with multiple input files'
        exit 1
    fi
fi

LCHIMES=
if [[ $DUMMY == 1 && $CHIMES_PROFILE == 1 ]]; then
    LCHIMES=-lchimes_profile_dummy
elif [[ $DUMMY == 1 ]]; then
    LCHIMES=-lchimes_dummy
elif [[ $CHIMES_PROFILE == 1 ]]; then
    LCHIMES=-lchimes_profile
elif [[ -f ${CHIMES_HOME}/src/libchimes/libchimes.so ]]; then
    LCHIMES=-lchimes
elif [[ -f ${CHIMES_HOME}/src/libchimes/libchimes_cpp.so ]]; then
    LCHIMES=-lchimes_cpp
else
    echo Unable to find lchimes
    exit 1
fi

if [[ $PROFILE == 1 && $DUMMY == 1 ]]; then
    LINKER_FLAGS="${CHIMES_HOME}/src/libchimes/libchimes_dummy.a \
        -L${CUDA_HOME}/lib -L${CUDA_HOME}/lib64 -lcudart \
        -L${CHIMES_HOME}/src/libchimes/xxhash -lxxhash -lrt ${LINKER_FLAGS}"
    GXX_FLAGS="${GXX_FLAGS} -pg"
elif [[ $PROFILE == 1 ]]; then
    LINKER_FLAGS="${CHIMES_HOME}/src/libchimes/libchimes.a -L${CUDA_HOME}/lib \
        -L${CUDA_HOME}/lib64 -lcudart -L${CHIMES_HOME}/src/libchimes/xxhash \
        -lxxhash -lrt ${LINKER_FLAGS}"
    GXX_FLAGS="${GXX_FLAGS} -pg"
else
    LINKER_FLAGS="-L${CHIMES_HOME}/src/libchimes ${LCHIMES} -lrt ${LINKER_FLAGS}"
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

    if [[ -f ${WORK_DIR}/${PREPROCESS_FILE} ]]; then
        echo Duplicate input filename $INPUT in source tree?
        exit 1
    fi

    echo Preprocessing ${INPUT} into ${PREPROCESS_FILE}
    PREPROC_CMD="${GXX} -I${CUDA_HOME}/include \
           -I${CHIMES_HOME}/src/libchimes ${INCLUDES} -E ${INPUT} \
           -o ${PREPROCESS_FILE} -g ${GXX_FLAGS} \
           -include ${CHIMES_HOME}/src/libchimes/libchimes.h \
           ${CHIMES_DEF} ${DEFINES} ${ADDED_INCLUDES} -D_FORTIFY_SOURCE=0"
    [[ $VERBOSE -eq 0 ]] || echo $PREPROC_CMD
    cd ${WORK_DIR} && ${PREPROC_CMD}

    if [[ $ENABLE_OMP == 1 ]]; then
        echo Looking for OpenMP pragmas in ${PREPROCESS_FILE}
        cd ${WORK_DIR} && python ${OMP_FINDER} ${PREPROCESS_FILE} > ${INFO_FILE_PREFIX}.omp.info
    else
        cd ${WORK_DIR} && touch ${INFO_FILE_PREFIX}.omp.info
    fi

    echo Searching for allocators in ${PREPROCESS_FILE}
    FIND_ALLOCATORS_CMD="${FIND_ALLOCATORS} -o ${PREPROCESS_FILE}.garbage \
        -a ${INFO_FILE_PREFIX}.allocators.info ${PREPROCESS_FILE} -- \
        -I${CHIMES_HOME}/src/libchimes -I${CUDA_HOME}/include $INCLUDES \
        ${CHIMES_DEF} ${DEFINES}"
    cd ${WORK_DIR} && ${FIND_ALLOCATORS_CMD}

    echo Looking for non-checkpointing functions in ${PREPROCESS_FILE}
    FIND_NONCHKPTING_CMD="${FIND_NONCHKPTING} \
        -n ${INFO_FILE_PREFIX}.non_chkpting.info ${PREPROCESS_FILE} -- \
        -I${CHIMES_HOME}/src/libchimes -I${CUDA_HOME}/include $INCLUDES \
        ${CHIMES_DEF} ${DEFINES}"
    echo $FIND_NONCHKPTING_CMD
    cd ${WORK_DIR} && ${FIND_NONCHKPTING_CMD}

    echo Inserting line pragmas in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && cat ${PREPROCESS_FILE} | python ${INSERT_LINES} ${INPUT} > \
           ${PREPROCESS_FILE}.lines
    cp ${PREPROCESS_FILE}.lines ${PREPROCESS_FILE}

    echo Inserting braces in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && ${BRACE_INSERT} -o ${PREPROCESS_FILE}.braces \
        ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
        -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES} &> \
        ${WORK_DIR}/$(basename ${INPUT}).brace_insert.log
    cp ${PREPROCESS_FILE}.braces ${PREPROCESS_FILE}

    echo Unrolling returns in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && ${RETURN_UNROLL} -o ${PREPROCESS_FILE}.ret_unroll \
        -a ${PREPROCESS_FILE}.attrs ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
        -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES}
    cp ${PREPROCESS_FILE}.ret_unroll ${PREPROCESS_FILE}

    echo Unrolling functions in ${PREPROCESS_FILE}
    cd ${WORK_DIR} && ${FUNCTION_UNROLL} -o ${PREPROCESS_FILE}.func_unroll \
        -a ${PREPROCESS_FILE}.attrs ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
        -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES}
    cp ${PREPROCESS_FILE}.func_unroll ${PREPROCESS_FILE}

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

    TRANSFORM_CMD="${TRANSFORM} \
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
            -c ${BLOCK_CHECKPOINTS} \
            -t ${INFO_FILE_PREFIX}.omp.info \
            -v ${INFO_FILE_PREFIX}.firstprivate.info \
            -b ${INFO_FILE_PREFIX}.tree.info \
            -q ${INFO_FILE_PREFIX}.quick \
            -n ${INFO_FILE_PREFIX}.npm \
            -e ${INFO_FILE_PREFIX}.locs \
            -g ${INFO_FILE_PREFIX}.list_of_externs \
            -j ${INFO_FILE_PREFIX}.fptrs \
            -u ${INFO_FILE_PREFIX}.merge \
            -y ${INFO_FILE_PREFIX}.allocators.info \
            -z ${INFO_FILE_PREFIX}.non_chkpting.info \
            ${PREPROCESS_FILE} -- -I${CHIMES_HOME}/src/libchimes \
            -I${CUDA_HOME}/include $INCLUDES ${CHIMES_DEF} ${DEFINES}"
    [[ $VERBOSE -eq 0 ]] || echo $TRANSFORM_CMD
    echo Running main transformation kernel on ${PREPROCESS_FILE}
    $TRANSFORM_CMD

    TRANSFORMED_FILE=$(basename ${PREPROCESS_FILE})
    EXT="${TRANSFORMED_FILE##*.}"
    NAME="${TRANSFORMED_FILE%.*}"
    TRANSFORMED_FILE=${NAME}.register.${EXT}
    OMP_FILE=${NAME}.omp.${EXT}
    INCLUDE_QUICK_FILE=${NAME}.quick.${EXT}
    FIRSTPRIVATE_FILE=${NAME}.fp.${EXT}
    NPM_FILE=${NAME}.npm.${EXT}
    HARDCODED_CALLS_FILE=${NAME}.hard.${EXT}
    ABI_FILE=${INFO_FILE_PREFIX}.abi
    NPM_CONDS_FILE=${NAME}.npm_conds.${EXT}
    FINAL_FILE=${NAME}.transformed.${EXT}

    echo Adding quick function declarations and bodies to $TRANSFORMED_FILE
    cd ${WORK_DIR} && python ${ADD_QUICK_VERSIONS} ${TRANSFORMED_FILE} \
        ${INCLUDE_QUICK_FILE} -b ${INFO_FILE_PREFIX}.quick.bodies \
        -d ${INFO_FILE_PREFIX}.quick.decls

    echo Appending OMP callbacks to ${INCLUDE_QUICK_FILE}
    cd ${WORK_DIR} && $OMP_APPENDER -m ${INFO_FILE_PREFIX}.omp.info.inserts \
        -o ${INCLUDE_QUICK_FILE}.omp ${INCLUDE_QUICK_FILE} -- \
        -I${CHIMES_HOME}/src/libchimes -I${CUDA_HOME}/include $INCLUDES \
        ${CHIMES_DEF} ${DEFINES} &> ${INFO_FILE_PREFIX}.omp_appender.log

    echo Inserting OMP callbacks in ${INCLUDE_QUICK_FILE}.omp
    cd ${WORK_DIR} && python ${OMP_INSERTER} ${INCLUDE_QUICK_FILE}.omp \
        ${INFO_FILE_PREFIX}.omp.info.inserts ${OMP_FILE}

    echo Adding firstprivate clauses to parallel for loops in ${OMP_FILE}
    cd ${WORK_DIR} && python ${FIRSTPRIVATE_APPENDER} ${OMP_FILE} \
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

    echo Fetching ABI information from ${HARDCODED_CALLS_FILE}
    cd ${WORK_DIR} && ${GXX} --compile ${HARDCODED_CALLS_FILE} ${CHIMES_DEF} \
        ${DEFINES} -o abi.o
    cd ${WORK_DIR} && objdump -t abi.o > ${ABI_FILE}
    cd ${WORK_DIR} && rm -f abi.o

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
        -md ${INFO_FILE_PREFIX}.merge.dynamic -a ${ABI_FILE} \
        -nc ${INFO_FILE_PREFIX}.non_chkpting.info

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
    # Last files must only have one entry, checked by a conditional above
    FINAL_FILE=${LAST_FILES[0]}
    OBJ_FILE=${FINAL_FILE}.o
    if [[ "$OUTPUT_FILE" != "a.out" ]]; then
        # If user specified output file, use that one
        OBJ_FILE=$OUTPUT_FILE
    fi

    ${GXX} -Xlinker ${EXPORT_DYNAMIC_FLAG} -c -I${CHIMES_HOME}/src/libchimes ${FINAL_FILE} \
        -o ${OBJ_FILE} ${GXX_FLAGS} ${INCLUDES} ${CHIMES_DEF} ${DEFINES}

    if [[ ! -f ${OBJ_FILE} ]]; then
        echo "Missing object file $OBJ_FILE for input $INPUT"
        exit 1
    fi

    echo $OBJ_FILE
else
    FILES_STR=""
    for f in ${LAST_FILES[@]}; do
        FILES_STR="${FILES_STR} $f"
    done

    COMPILE_CMD="${GXX} -Xlinker ${EXPORT_DYNAMIC_FLAG} -Wl,--no-as-needed -ldl -lpthread -I${CHIMES_HOME}/src/libchimes ${FILES_STR} \
        -o ${OUTPUT} ${LIB_PATHS} ${LIBS} ${GXX_FLAGS} ${INCLUDES} \
        ${LINKER_FLAGS}"
    [[ $VERBOSE -eq 0 ]] || echo $COMPILE_CMD
    $COMPILE_CMD

    if [[ $KEEP == 0 ]]; then
        rm -rf ${WORK_DIR}
    fi
fi
