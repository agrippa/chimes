#!/bin/bash

set -e

if [[ ! $(type nvcc &> /dev/null) ]] ; then
    cd src/libchimes && make clean && make libchimes_cpp.so libchimes_dummy.so -j &
else
    cd src/libchimes && make clean && make libchimes_cpp.so libchimes.so libchimes_dummy.so -j &
fi

cd src/preprocessing/brace_insert && make clean && make -j &
cd src/preprocessing/call_translate && make clean && make -j &
cd src/preprocessing/clang && make clean && make -j &
cd src/preprocessing/find_allocators && make clean && make -j &
cd src/preprocessing/function_unroll && make clean && make -j &
cd src/preprocessing/openmp_appender && make clean && make -j &
cd src/preprocessing/find_nonchkpting_fptrs && make clean && make -j &
./src/preprocessing/Play/build.sh &
cd src/preprocessing/return_unroll && make clean && make -j &
wait
