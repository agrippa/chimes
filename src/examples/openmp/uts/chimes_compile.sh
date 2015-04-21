#!/bin/bash

GXX=/usr/local/bin/g++ ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -k -i ./rng/brg_sha1.c -i ./uts.c -i ./uts_shm.c -D BRG_RNG -y -fopenmp
