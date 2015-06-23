#!/bin/bash

set -e

source ${CHIMES_HOME}/src/common.conf

SRCS="common/bots_common.c common/bots_main.c \
      omp-tasks/sparselu/sparselu_single/sparselu.c"
BENCHMARK_FOLDER="${SPEC}/benchspec/OMP2012/359.botsspar"
ABS_SRCS=""

for SRC in ${SRCS}; do
    ABS_SRCS="-i ${BENCHMARK_FOLDER}/src/${SRC} ${ABS_SRCS}"
done

${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s -D SPEC -D NDEBUG \
    -D NOREDUCE -D NOPERFLIB ${ABS_SRCS} -I ${BENCHMARK_FOLDER}/src/common \
    -I ${BENCHMARK_FOLDER}/src/omp-tasks/sparselu/sparselu_single \
    -o botsspar_normal

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -D SPEC -D NDEBUG \
    -D NOREDUCE -D NOPERFLIB ${ABS_SRCS} -I ${BENCHMARK_FOLDER}/src/common \
    -I ${BENCHMARK_FOLDER}/src/omp-tasks/sparselu/sparselu_single \
    -o botsspar_chimes

