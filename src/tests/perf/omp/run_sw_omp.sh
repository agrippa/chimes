#!/bin/bash

# time ./sw_chimes 1048576 1048576 1024
# time ./sw_normal 1048576 1048576 1024

time ./sw_chimes_omp 1204000 7000 12040 700
time ./sw_normal_omp 1204000 7000 12040 700
