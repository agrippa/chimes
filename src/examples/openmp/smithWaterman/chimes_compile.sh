#!/bin/bash

GXX=/usr/local/bin/g++ $CHIMES_HOME/src/preprocessing/compile_cpp.sh -i ./smith_waterman_omp.cpp -k -y -fopenmp
