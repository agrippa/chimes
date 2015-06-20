#!/bin/bash

set -e

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -k \
    -i ${CHIMES_HOME}/src/examples/cpp/smithWaterman/smith_waterman.cpp \
    -o sw_chimes

${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s \
    -i ${CHIMES_HOME}/src/examples/cpp/smithWaterman/smith_waterman.cpp \
    -o sw_normal

