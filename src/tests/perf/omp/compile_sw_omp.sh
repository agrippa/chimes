#!/bin/bash

set -e

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -k \
    -i ${CHIMES_HOME}/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp \
    -o sw_chimes_omp

${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp \
    -o sw_normal_omp

