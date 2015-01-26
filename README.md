num-debug
=========

Automating Numerical Analysis

Setup:
======

Prerequisites:
1. LLVM_INSTALL set to the llvm-build directory created below
2. LLVM_HOME set to the llvm-src directory created below
3. NUM_DEBUG_HOME set to the root directory this repo is cloned to
4. CUDA_HOME set to the root of your CUDA installation

Installation Steps:
1. Download LLVM 3.5.1 from http://llvm.org/releases/3.5.1/llvm-3.5.1.src.tar.xz and extract to llvm-src
2. Download Clang 3.5.1 from http://llvm.org/releases/3.5.1/cfe-3.5.1.src.tar.xz and extract to llvm-src/tools/clang
3. Download Compiler RT 3.5.1 from http://llvm.org/releases/3.5.1/compiler-rt-3.5.1.src.tar.xz and extract to llvm-src/projects/compiler-rt
4. git clone git@github.com:agrippa/num-debug.git
5. cd llvm-src/lib/Transforms && ln -s ${NUM_DEBUG_HOME}/src/preprocessing/Play
6. Edit llvm-src/lib/Transforms/Makefile to add the Play/ directory to the PARALLEL_DIRS list
7. Edit llvm-src/lib/Transforms/CMakeLists.txt, appending the line add_subdirectory(Play)
8. mkdir llvm-build
9. cd llvm-build && ../llvm-src/configure && make
