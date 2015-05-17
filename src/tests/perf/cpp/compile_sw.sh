#!/bin/bash

set -e

GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# GXX=/usr/local/bin/g++ \
# GXX=/opt/apps/intel/2013.1.046/bin/icc \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -d -k \
    -i ${CHIMES_HOME}/src/examples/cpp/smithWaterman/smith_waterman.cpp \
    -o sw_chimes

GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# GXX=/usr/local/bin/g++ \
# GXX=/opt/apps/intel/2013.1.046/bin/icc \
    ${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/cpp/smithWaterman/smith_waterman.cpp \
    -o sw_normal

