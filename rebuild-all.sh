#!/bin/bash

set -e

cd src/libchimes && make clean && make -j &
cd src/preprocessing/brace_insert && make clean && make -j &
cd src/preprocessing/call_translate && make clean && make -j &
cd src/preprocessing/brace_insert && make clean && make -j &
cd src/preprocessing/clang && make clean && make -j &
cd src/preprocessing/function_unroll && make clean && make -j &
cd src/preprocessing/Play && ./build.sh &
wait
