#!/bin/bash

set -e

cd src/libchimes && make clean && make -j
cd ../preprocessing/brace_insert && make clean && make -j
cd ../call_translate && make clean && make -j
cd ../brace_insert && make clean && make -j
cd ../clang && make clean && make -j
cd ../function_unroll && make clean && make -j
cd ../Play && ./build.sh
