#!/bin/bash

set -e

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -k \
    -i ${CHIMES_HOME}/src/examples/openmp/iso3d.cpp \
    -i ${CHIMES_HOME}/src/examples/openmp/lib/common.cpp \
    -i ${CHIMES_HOME}/src/examples/openmp/lib/common3d.cpp \
    -I ${CHIMES_HOME}/src/examples/cpp/include/ -l common2d \
    -L ${CHIMES_HOME}/src/examples/openmp/lib -o iso3d_chimes_omp

${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/openmp/iso3d.cpp \
    -i ${CHIMES_HOME}/src/examples/openmp/lib/common.cpp \
    -i ${CHIMES_HOME}/src/examples/openmp/lib/common3d.cpp \
    -I ${CHIMES_HOME}/src/examples/cpp/include/ -l common2d \
    -L ${CHIMES_HOME}/src/examples/openmp/lib -o iso3d_normal_omp
