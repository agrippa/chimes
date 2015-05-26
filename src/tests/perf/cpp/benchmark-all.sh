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
rm -f $CHIMES_CHECKPOINT_DIR/*
./run_comd.sh &> comd.log
echo Produced $(ls -l $CHIMES_CHECKPOINT_DIR/chimes.* | wc -l) checkpoint files

echo Running Iso3D
rm -f $CHIMES_CHECKPOINT_DIR/*
./run_iso3d.sh &> iso3d.log
echo Produced $(ls -l $CHIMES_CHECKPOINT_DIR/chimes.* | wc -l) checkpoint files

echo Running Lulesh
rm -f $CHIMES_CHECKPOINT_DIR/*
./run_lulesh.sh &> lulesh.log
echo Produced $(ls -l $CHIMES_CHECKPOINT_DIR/chimes.* | wc -l) checkpoint files

echo Running Smith-Waterman
rm -f $CHIMES_CHECKPOINT_DIR/*
./run_sw.sh &> sw.log
echo Produced $(ls -l $CHIMES_CHECKPOINT_DIR/chimes.* | wc -l) checkpoint files

echo Running UTS
rm -f $CHIMES_CHECKPOINT_DIR/*
./run_uts.sh &> uts.log
echo Produced $(ls -l $CHIMES_CHECKPOINT_DIR/chimes.* | wc -l) checkpoint files

./get-metrics.sh comd.log iso3d.log lulesh.log sw.log uts.log > collected.log

echo
echo New results:
cat collected.log
echo
echo Old full results:
cat collected.log.full
echo
echo Old dummy results:
cat collected.log.control
