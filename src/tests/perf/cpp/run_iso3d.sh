#!/bin/bash

LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
# DYLD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$DYLD_LIBRARY_PATH \
                time ./iso3d_chimes -x 1024 -y 1024 -z 1024 -i 20
LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
# DYLD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$DYLD_LIBRARY_PATH \
                time ./iso3d_normal -x 1024 -y 1024 -z 1024 -i 20
