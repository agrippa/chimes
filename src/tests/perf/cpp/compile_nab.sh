#!/bin/bash

set -e

source ${CHIMES_HOME}/src/common.conf

SRCS="database.c reslib.c regexp.c molutil.c nblist.c nabmd.c prm.c memutil.c \
      molio.c errormsg.c binpos.c rand2.c select_atoms.c traceback.c chirvol.c \
      specrand.c sff.c"
ABS_SRCS=""

for SRC in ${SRCS}; do
    ABS_SRCS="-i ${SPEC}/benchspec/OMP2012/352.nab/src/${SRC} ${ABS_SRCS}"
done

${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s -D SPEC -D NDEBUG \
    -D NOREDUCE -D NOPERFLIB ${ABS_SRCS} -o nabmd_normal

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -D SPEC -D NDEBUG \
    -D NOREDUCE -D NOPERFLIB ${ABS_SRCS} -o nabmd_chimes
