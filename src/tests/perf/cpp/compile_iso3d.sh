#!/bin/bash

GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# GXX=/usr/local/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh \
    -i ${CHIMES_HOME}/src/examples/cpp/iso3d.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common3d.cpp \
    -I ${CHIMES_HOME}/src/examples/cpp/include/ -l common2d \
    -L ${CHIMES_HOME}/src/examples/cpp/lib -o iso3d_chimes

GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# GXX=/usr/local/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/cpp/iso3d.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common.cpp \
    -i ${CHIMES_HOME}/src/examples/cpp/lib/common3d.cpp \
    -I ${CHIMES_HOME}/src/examples/cpp/include/ -l common2d \
    -L ${CHIMES_HOME}/src/examples/cpp/lib -o iso3d_normal
