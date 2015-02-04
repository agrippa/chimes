#!/bin/bash

../../preprocessing/compile_normal.sh -i ./iso2d.cpp -i lib/common.cpp \
        -i lib/common2d.cpp -I ./include/ -L ./lib/ -l common2d -o iso2d_normal
