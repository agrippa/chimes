#!/bin/bash

set -e

echo Compiling
./compile_comd.sh &> /dev/null
./compile_iso3d.sh &> /dev/null
./compile_lulesh.sh &> /dev/null
./compile_sw.sh &> /dev/null
./compile_uts.sh &> /dev/null
wait
echo Finished compiling

echo Running CoMD
./run_comd.sh &> comd.log
echo Running Iso3D
./run_iso3d.sh &> iso3d.log
echo Running Lulesh
./run_lulesh.sh &> lulesh.log
echo Running Smith-Waterman
./run_sw.sh &> sw.log
echo Running UTS
./run_uts.sh &> uts.log

./get-metrics.sh comd.log iso3d.log lulesh.log sw.log uts.log > collected.log

echo
echo New results:
cat collected.log
echo
echo Old results:
cat collected.log.control
