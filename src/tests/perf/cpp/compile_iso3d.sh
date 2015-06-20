#!/bin/bash

set -e

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -k \
    -i ${CHIMES_HOME}/src/examples/cpp/iso3d.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common3d.cpp \
    -I ${CHIMES_HOME}/src/examples/cpp/include/ -l common2d \
    -L ${CHIMES_HOME}/src/examples/cpp/lib -o iso3d_chimes

${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s \
    -i ${CHIMES_HOME}/src/examples/cpp/iso3d.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common3d.cpp \
    -I ${CHIMES_HOME}/src/examples/cpp/include/ -l common2d \
    -L ${CHIMES_HOME}/src/examples/cpp/lib -o iso3d_normal
