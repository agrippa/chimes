#!/bin/bash

# LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
#                 ./iso3d_chimes -x 2048 -y 2048 -z 1024 -i 10
LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
                ./iso3d_normal -x 1024 -y 1024 -z 1024 -i 10
