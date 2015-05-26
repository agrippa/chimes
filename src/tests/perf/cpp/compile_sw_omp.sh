#!/bin/bash

set -e

# GXX=/usr/local/bin/g++ \
# GXX=/opt/apps/intel/2013.1.046/bin/icc \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -k -d \
    -i ${CHIMES_HOME}/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp \
    -o sw_chimes_omp

# GXX=/usr/local/bin/g++ \
# GXX=/opt/apps/intel/2013.1.046/bin/icc \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp \
    -o sw_normal_omp

