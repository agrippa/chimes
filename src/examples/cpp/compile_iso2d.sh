#!/bin/bash

../../preprocessing/compile_cpp.sh -i ./iso2d.cpp -i lib/common.cpp \
        -i lib/common2d.cpp -I ./include/ -L ./lib/ -l common2d -o iso2d -k
