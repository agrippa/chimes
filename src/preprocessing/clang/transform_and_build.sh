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
echo ${LAST_STAGE}

./${EXE} -extra-arg="-I../../libnumdebug" \
        -extra-arg="-include../../libnumdebug/libnumdebug.h" \
        -extra-arg="-includestddef.h"  \
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
