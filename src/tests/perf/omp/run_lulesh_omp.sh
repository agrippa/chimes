#!/bin/bash

# time ./lulesh_chimes 380
# time ./lulesh_normal 380

time ./lulesh_normal_omp 2 &> log.normal
time ./lulesh_chimes_omp 2 &> log.omp
