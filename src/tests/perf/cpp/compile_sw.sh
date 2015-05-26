#!/bin/bash

set -e

# GXX=/usr/local/bin/g++ \
# GXX=/opt/apps/intel/2013.1.046/bin/icc \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -k \
    -i ${CHIMES_HOME}/src/examples/cpp/smithWaterman/smith_waterman.cpp \
    -o sw_chimes

# GXX=/usr/local/bin/g++ \
# GXX=/opt/apps/intel/2013.1.046/bin/icc \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s \
    -i ${CHIMES_HOME}/src/examples/cpp/smithWaterman/smith_waterman.cpp \
    -o sw_normal

