#!/bin/bash

set -e

# GXX=/usr/local/bin/g++ \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -k -d \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/CoMD.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/decomposition.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/haloExchange.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/linkCells.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/mycommand.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/performanceTimers.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/timestep.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/cmdLineParser.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/eam.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/initAtoms.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/ljForce.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/parallel.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/random.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/yamlOutput.c \
    -o comd_chimes_omp

# GXX=/usr/local/bin/g++ \
GXX=/opt/apps/gcc/4.8.2/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/CoMD.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/decomposition.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/haloExchange.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/linkCells.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/mycommand.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/performanceTimers.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/timestep.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/cmdLineParser.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/eam.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/initAtoms.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/ljForce.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/parallel.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/random.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-openmp/yamlOutput.c \
    -o comd_normal_omp

