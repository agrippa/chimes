#!/bin/bash

if [[ ! $(type nvcc &> /dev/null) ]] ; then
    g++ -I../include --compile -fPIC common_cuda.cpp -o common_cuda.o
    g++ -I../include common_cuda.o -shared -o libcommon2d.so
else
    CUDA_LIB_PATH=${CUDA_HOME}/lib64
    if [[ ! -d $CUDA_LIB_PATH ]]; then
        CUDA_LIB_PATH=${CUDA_HOME}/lib
    fi

    nvcc -arch=sm_20 -I../include --compile -Xcompiler -fPIC common_cuda.cu -o common_cuda.o
    g++ -I../include common_cuda.o -shared -o libcommon2d.so -L${CUDA_LIB_PATH} -lcudart
fi
