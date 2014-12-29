#!/bin/bash

cd intermediate/ && nvcc -arch=sm_20 --verbose --keep ../vector_sum.cu &> ../log
