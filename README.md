num-debug
=========

Automating Numerical Analysis

Setup:
======

Prerequisites:
LLVM_INSTALL set to the llvm-build directory created below
LLVM_HOME set to the llvm-src directory created below
NUM_DEBUG_HOME set to the root directory this repo is cloned to

1. svn co http://llvm.org/svn/llvm-project/llvm/trunk llvm-src
2. cd llvm-src/tools && svn co http://llvm.org/svn/llvm-project/cfe/trunk clang
3. cd llvm-src/projects && svn co http://llvm.org/svn/llvm-project/compiler-rt/trunk compiler-rt
4. git clone git@github.com:agrippa/num-debug.git
5. cd llvm-src/lib/Transforms && ln -s ${NUM_DEBUG_HOME}/src/preprocessing/Play
6. mkdir llvm-build
7. cd llvm-build && ../llvm-src/configure && make
