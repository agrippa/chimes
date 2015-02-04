#!/bin/bash

set -e

cd ${LLVM_INSTALL}/lib/Transforms/Play && make clean
cd ${LLVM_INSTALL}/lib/Transforms/Play && make
