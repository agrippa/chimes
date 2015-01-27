#!/bin/bash

if [[ $# != 1 ]]; then
    echo usage: pylint.sh file.py
    exit 1
fi

pylint --disable=too-few-public-methods,too-many-arguments,too-many-locals \
                 --reports=n $1
