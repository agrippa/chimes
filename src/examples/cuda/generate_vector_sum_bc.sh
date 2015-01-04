#!/bin/bash
CLANG=${LLVM_INSTALL}/Debug+Asserts/bin/clang

$CLANG -I${CUDA_HOME}/include -I${NUM_DEBUG_HOME}/src/libnumdebug -S \
        -emit-llvm ${NUM_DEBUG_HOME}/src/examples/cuda/intermediate/vector_sum.cudafe1.cpp \
        -o vector_sum.cudafe1.bc -g
