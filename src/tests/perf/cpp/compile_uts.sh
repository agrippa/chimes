#!/bin/bash

set -e

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -k \
    -i ${CHIMES_HOME}/src/examples/cpp/uts/rng/brg_sha1.c \
    -i ${CHIMES_HOME}/src/examples/cpp/uts/uts.c \
    -i ${CHIMES_HOME}/src/examples/cpp/uts/uts_shm.c \
    -D BRG_RNG \
    -o uts_chimes

${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s \
    -i ${CHIMES_HOME}/src/examples/cpp/uts/rng/brg_sha1.c \
    -i ${CHIMES_HOME}/src/examples/cpp/uts/uts.c \
    -i ${CHIMES_HOME}/src/examples/cpp/uts/uts_shm.c \
    -D BRG_RNG \
    -o uts_normal

