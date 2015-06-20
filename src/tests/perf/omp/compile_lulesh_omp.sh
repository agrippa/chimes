#!/bin/bash

set -e
# If both -O2 and -fopenmp are specified for LULESH, we hit some bug that causes an infinite loop
${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -k \
    -i ${CHIMES_HOME}/src/examples/openmp/lulesh/LULESH_OMP.cc \
    -o lulesh_chimes_omp

${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/openmp/lulesh/LULESH_OMP.cc \
    -o lulesh_normal_omp

