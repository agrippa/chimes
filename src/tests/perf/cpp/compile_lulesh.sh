#!/bin/bash

set -e

${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -k \
    -i ${CHIMES_HOME}/src/examples/cpp/lulesh/LULESH.cc \
    -o lulesh_chimes

${CHIMES_HOME}/src/preprocessing/compile_normal.sh -s \
    -i ${CHIMES_HOME}/src/examples/cpp/lulesh/LULESH.cc \
    -o lulesh_normal

