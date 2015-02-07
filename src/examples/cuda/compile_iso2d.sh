#!/bin/bash

../../preprocessing/compile.sh -i ./iso2d.cu -i ../cpp/lib/common.cpp \
        -i ../cpp/lib/common2d.cpp -I ../cpp/include/ -L ../cpp/lib/ -l common2d -o iso2d -k
