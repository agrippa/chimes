#!/bin/bash

if [[ $# != 1 ]]; then
    echo 'usage: pylint.sh [file.py|all]'
    exit 1
fi

PYLINT=pylint
PYLINT_ARGS="--reports=n --disable=too-few-public-methods,too-many-arguments,too-many-locals,too-many-branches"

if [[ "$1" == "all" ]]; then
    for f in $(ls *.py); do
        echo ===== $f =====
        $PYLINT $PYLINT_ARGS $f
        echo
    done
else
    $PYLINT $PYLINT_ARGS $1
fi
