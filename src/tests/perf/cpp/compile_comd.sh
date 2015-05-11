#!/bin/bash

GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# GXX=/usr/local/bin/g++ \
    ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -s -k -d \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/CoMD.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/decomposition.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/haloExchange.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/linkCells.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/mycommand.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/performanceTimers.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/timestep.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/eam.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/initAtoms.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/ljForce.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/parallel.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/random.c \
    -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/yamlOutput.c \
    -o comd_chimes

# GXX=/opt/apps/gcc/4.8.2/bin/g++ \
# # GXX=/usr/local/bin/g++ \
#     ${CHIMES_HOME}/src/preprocessing/compile_normal.sh \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/CoMD.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/decomposition.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/haloExchange.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/linkCells.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/mycommand.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/performanceTimers.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/timestep.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/eam.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/initAtoms.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/ljForce.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/parallel.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/random.c \
#     -i ${CHIMES_HOME}/src/examples/cpp/CoMD/src-mpi/yamlOutput.c \
#     -o comd_normal

