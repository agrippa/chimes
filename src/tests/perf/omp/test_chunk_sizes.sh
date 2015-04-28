#!/bin/bash

for CHUNK_SIZE in 1 4 16 64 256; do
    echo Testing CHUNK_SIZE=$CHUNK_SIZE
    for i in {1..5}; do
        LD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$LD_LIBRARY_PATH \
        # DYLD_LIBRARY_PATH=$CHIMES_HOME/src/examples/cpp/lib/:$DYLD_LIBRARY_PATH \
        CHIMES_CHUNK_SIZE_MB=$CHUNK_SIZE \
                        ./iso3d_chimes -x 1536 -y 1024 -z 1024 -i 10
        du -ch $CHIMES_CHECKPOINT_DIR/
        echo
        ls -l $CHIMES_CHECKPOINT_DIR/
        echo
        rm $CHIMES_CHECKPOINT_DIR/*
    done
done &> chunks.log
