#!/bin/bash

cd intermediate/ && nvcc -I${CHIMES_HOME}/src/libchimes -arch=sm_20 --verbose --keep ../vector_sum.cu &> ../log
