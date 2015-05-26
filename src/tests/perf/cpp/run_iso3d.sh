#!/bin/bash

set -e

# # DYLD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$DYLD_LIBRARY_PATH \
# LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
#                 time ./iso3d_chimes -x 1550 -y 1550 -z 1550 -i 3

LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
                time ./iso3d_chimes -x 1024 -y 1024 -z 256 -i 20

# # DYLD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$DYLD_LIBRARY_PATH \
# LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
#                 time ./iso3d_normal -x 1550 -y 1550 -z 1550 -i 3

# DYLD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$DYLD_LIBRARY_PATH \
LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
                time ./iso3d_normal -x 1024 -y 1024 -z 256 -i 20
