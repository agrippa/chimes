#!/bin/bash

set -e

# GXX=/usr/local/bin/g++ \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -d -k \
    -i ${CHIMES_HOME}/src/examples/cpp/lulesh/LULESH.cc \
    -o lulesh_chimes

# GXX=/usr/local/bin/g++ \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/cpp/lulesh/LULESH.cc \
    -o lulesh_normal

