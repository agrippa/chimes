#!/bin/bash

for i in {1..10}; do
    echo Run $i
    LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
    # DYLD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$DYLD_LIBRARY_PATH \
                    ./iso3d_normal -x 1536 -y 1024 -z 1024 -i 10
done &> baseline.log
