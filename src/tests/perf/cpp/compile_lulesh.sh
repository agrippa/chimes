#!/bin/bash

set -e

GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# GXX=/usr/local/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -d \
    -i ${CHIMES_HOME}/src/examples/cpp/lulesh/LULESH.cc \
    -o lulesh_chimes

GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# GXX=/usr/local/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/cpp/lulesh/LULESH.cc \
    -o lulesh_normal

