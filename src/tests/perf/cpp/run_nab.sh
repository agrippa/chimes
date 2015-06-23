#!/bin/bash

CWD=$(pwd)

# time ./comd_normal -N 1 -x 400 -y 400 -z 200
# time ./comd_chimes -N 1 -x 400 -y 400 -z 200

(cd ${SPEC}/benchspec/OMP2012/352.nab/data/all/input && \
 time ${CWD}/nabmd_normal hkrdenq 1930344093)
