#!/bin/bash

get_absolute_path()
{
    if [[ $# != 1 ]]; then
        echo 'get_absolute_path expected one argument'
        exit 1
    fi

    INPUT=$1
    if [[ "$INPUT" = /* ]]; then
        echo $INPUT
    else
        echo $(pwd)/$INPUT
    fi
}

get_llvm_lib()
{
    LLVM_LIB=$(find ${LLVM_INSTALL}/**/lib -name LLVMPlay.dylib)
    if [[ "x${LLVM_LIB}" == "x" ]]; then
        LLVM_LIB=$(find ${LLVM_INSTALL}/**/lib -name LLVMPlay.so)
    fi

    if [[ ! -f $LLVM_LIB ]]; then
        echo "Missing LLVMPlay lib"
        exit 1
    fi

    echo $LLVM_LIB
}

find_in_llvm()
{
    if [[ $# != 2 ]]; then
        echo find_in_llvm expected two arguments
        exit 1
    fi

    find ${LLVM_INSTALL}/**/$1 -name "$2"
}

find_clang()
{
    find_in_llvm bin clang
}

find_opt()
{
    find_in_llvm bin opt
}
