#!/bin/bash

if [[ $# != 2 ]]; then
    echo usage: transfer_info_files.sh prefix dest-folder
    exit 1
fi

for file in diag.info heap.info lines.info stack.info struct.info reachable.info exit.info call.info func.info; do
    cp $1.$file $2/$file
done
