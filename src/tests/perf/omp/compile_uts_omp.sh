#!/bin/bash

set -e

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -k \
    -i ${CHIMES_HOME}/src/examples/openmp/uts/rng/brg_sha1.c \
    -i ${CHIMES_HOME}/src/examples/openmp/uts/uts.c \
    -i ${CHIMES_HOME}/src/examples/openmp/uts/uts_shm.c \
    -D BRG_RNG \
    -o uts_chimes_omp

${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/openmp/uts/rng/brg_sha1.c \
    -i ${CHIMES_HOME}/src/examples/openmp/uts/uts.c \
    -i ${CHIMES_HOME}/src/examples/openmp/uts/uts_shm.c \
    -D BRG_RNG \
    -o uts_normal_omp

