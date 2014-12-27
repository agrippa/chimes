#!/bin/bash
# This script compiles the transformed output of run.sh to an executable by
# linking it with the libnumdebug library

if [[ $# != 1 ]]; then
    echo usage: compile.sh transformed.cpp
    exit 1
fi

g++ -include ../libnumdebug.h -I../ -L../ -lnumdebug $1
