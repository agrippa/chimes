#!/bin/bash

if [[ $# != 2 ]]; then
    echo usage: transfer_info_files.sh prefix dest-folder
    exit 1
fi

for file in call.info diag.info exit.info func.info globals.info heap.info lines.info module.info reachable.info stack.info struct.info; do
    cp $1.$file $2/$file
done
