#!/bin/bash

cd intermediate/ && nvcc -I${NUM_DEBUG_HOME}/src/libnumdebug -arch=sm_20 --verbose --keep ../vector_sum.cu &> ../log
