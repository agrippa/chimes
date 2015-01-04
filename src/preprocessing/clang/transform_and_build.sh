#!/bin/bash

if [[ $# != 2 ]]; then
    echo usage: transform_and_build.sh info-dir input-file
    exit 1
fi

INFO_DIR=$1
INPUT=$2
EXE=transform

LAST_STAGE=$(basename ${INPUT})
EXT="${LAST_STAGE##*.}"
NAME="${LAST_STAGE%.*}"
LAST_STAGE=${NAME}.register.${EXT}
CONTAINING_FOLDER=$(dirname ${INPUT})
echo $CONTAINING_FOLDER

# gcc -D__CUDA_ARCH__=200 -E -x c++     -DCUDA_DOUBLE_MATH_FUNCTIONS   -D__CUDA_PREC_DIV -D__CUDA_PREC_SQRT -I"/scratch/jmg3/num-debug/src/libnumdebug" "-I/opt/apps/cuda/6.0.37/bin/..//include"   -m64 -o "vector_sum.cu.cpp.ii" "vector_sum.cudafe1.cpp"

# ./${EXE} -extra-arg="-D__CUDA_ARCH__=200" \
#         -extra-arg="-E" \
#         -extra-arg="-DCUDA_DOUBLE_MATH_FUNCTIONS" \
#         -extra-arg="-D__CUDA_PREC_DIV" \
#         -extra-arg="-D__CUDA_PREC_SQRT" \
#         -extra-arg="-m64" \
#         -extra-arg="-I../../libnumdebug" \
#         -extra-arg="-I/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include" \
#         -extra-arg="-I${CUDA_HOME}/include" \
#         -extra-arg="-include../../libnumdebug/libnumdebug.h" \
#         -extra-arg="-includestddef.h"  \
./${EXE} \
        -extra-arg="-I{$CONTAINING_FOLDER}" \
        -extra-arg="-I${CUDA_HOME}/include" \
        -extra-arg="-I/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include" \
        -extra-arg="-include../../libnumdebug/libnumdebug.h" \
        -l ${INFO_DIR}/lines.info \
        -f ${INFO_DIR}/func_start.info \
        -s ${INFO_DIR}/struct.info \
        -x ${INFO_DIR}/exit.info \
        -i ${INPUT} \
        -d ${INFO_DIR}/decl.info \
        -a ${INFO_DIR}/stack.info \
        -m ${INFO_DIR}/heap.info \
        -b ${INFO_DIR}/loc.info \
        ${INPUT} --

g++ -I../../libnumdebug -L../../libnumdebug \
        -include../../libnumdebug/libnumdebug.h -includestddef.h -lnumdebug \
        ${LAST_STAGE}
