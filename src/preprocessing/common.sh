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
