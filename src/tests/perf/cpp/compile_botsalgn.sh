#!/bin/bash

set -e

source ${CHIMES_HOME}/src/common.conf

SRCS="common/bots_common.c common/bots_main.c \
      omp-tasks/alignment/alignment_for/alignment.c \
      omp-tasks/alignment/alignment_for/sequence.c"
BENCHMARK_FOLDER="${SPEC}/benchspec/OMP2012/358.botsalgn"
ABS_SRCS=""

for SRC in ${SRCS}; do
    ABS_SRCS="-i ${BENCHMARK_FOLDER}/src/${SRC} ${ABS_SRCS}"
done

${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s -D SPEC -D NDEBUG \
    -D NOREDUCE -D NOPERFLIB ${ABS_SRCS} \
    -I ${BENCHMARK_FOLDER}/src/common \
    -I ${BENCHMARK_FOLDER}/src/omp-tasks/alignment/alignment_for \
    -o botsalgn_normal

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -D SPEC -D NDEBUG \
    -D NOREDUCE -D NOPERFLIB ${ABS_SRCS} \
    -I ${BENCHMARK_FOLDER}/src/common \
    -I ${BENCHMARK_FOLDER}/src/omp-tasks/alignment/alignment_for \
    -o botsalgn_chimes

# Generated from ../bin/runspec --verbose=10000 --config=davinci.cfg --action=build --tune=base botsalgn &> build.log:
# icc -c -o common/bots_main.o -DSPEC -DSPEC_OMP -DSPEC_OPENMP -DNDEBUG -I. -I./omp-tasks/alignment/alignment_for -I./common   -O3 -xSSE4.2  -ipo1 -openmp -ansi_alias -mcmodel=medium -shared-intel                common/bots_main.c
# icc -c -o common/bots_common.o -DSPEC -DSPEC_OMP -DSPEC_OPENMP -DNDEBUG -I. -I./omp-tasks/alignment/alignment_for -I./common   -O3 -xSSE4.2  -ipo1 -openmp -ansi_alias -mcmodel=medium -shared-intel                common/bots_common.c
# icc -c -o omp-tasks/alignment/alignment_for/alignment.o -DSPEC -DSPEC_OMP -DSPEC_OPENMP -DNDEBUG -I. -I./omp-tasks/alignment/alignment_for -I./common   -O3 -xSSE4.2  -ipo1 -openmp -ansi_alias -mcmodel=medium -shared-intel                omp-tasks/alignment/alignment_for/alignment.c
# icc -c -o omp-tasks/alignment/alignment_for/sequence.o -DSPEC -DSPEC_OMP -DSPEC_OPENMP -DNDEBUG -I. -I./omp-tasks/alignment/alignment_for -I./common   -O3 -xSSE4.2  -ipo1 -openmp -ansi_alias -mcmodel=medium -shared-intel                omp-tasks/alignment/alignment_for/sequence.c
# icc   -O3 -xSSE4.2  -ipo1 -openmp -ansi_alias -mcmodel=medium -shared-intel          common/bots_main.o common/bots_common.o omp-tasks/alignment/alignment_for/alignment.o omp-tasks/alignment/alignment_for/sequence.o             -lm        -o bots-alignment

