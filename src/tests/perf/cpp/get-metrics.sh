#!/bin/bash

set -e

if [[ $# != 5 ]]; then
    echo usage get-metrics.sh comd.log iso3d.log lulesh.log sw.log uts.log
    exit 1
fi

COMD_LOG=$1
ISO3D_LOG=$2
LULESH_LOG=$3
SW_LOG=$4
UTS_LOG=$5

# COMD
CHIMES_COMD=$(cat $COMD_LOG | grep --after=3 "Timings for Rank 0" | grep total | awk '{ print $5 }' | head -n 1)
NORMAL_COMD=$(cat $COMD_LOG | grep --after=3 "Timings for Rank 0" | grep total | awk '{ print $5 }' | tail -n 1)
COMD_OVERHEAD=$(echo \( \( $CHIMES_COMD / $NORMAL_COMD \) - 1.0 \) \* 100.0 | bc -l)
echo "COMD   : $COMD_OVERHEAD %"

# ISO3D
CHIMES_ISO=$(cat $ISO3D_LOG  | grep total | awk '{ print $2 }' | head -n 1)
NORMAL_ISO=$(cat $ISO3D_LOG  | grep total | awk '{ print $2 }' | tail -n 1)
ISO_OVERHEAD=$(echo \( \( $CHIMES_ISO / $NORMAL_ISO \) - 1.0 \) \* 100.0 | bc -l)
echo "ISO    : $ISO_OVERHEAD %"

# LULESH
CHIMES_LULESH=$(cat $LULESH_LOG | grep Elapsed | awk '{ print $4 }' | head -n 1)
NORMAL_LULESH=$(cat $LULESH_LOG | grep Elapsed | awk '{ print $4 }' | tail -n 1)
LULESH_OVERHEAD=$(echo \( \( $CHIMES_LULESH / $NORMAL_LULESH \) - 1.0 \) \* 100.0 | bc -l)
echo "LULESH : $LULESH_OVERHEAD %"

# SW
CHIMES_SW=$(cat $SW_LOG | grep computation | awk '{ print $4 }' | head -n 1)
NORMAL_SW=$(cat $SW_LOG | grep computation | awk '{ print $4 }' | tail -n 1)
SW_OVERHEAD=$(echo \( \( $CHIMES_SW / $NORMAL_SW \) - 1.0 \) \* 100.0 | bc -l)
echo "SW     : $SW_OVERHEAD %"

# UTS
CHIMES_UTS=$(cat $UTS_LOG | grep Wallcl | awk '{ print $4 }' | head -n 1)
NORMAL_UTS=$(cat $UTS_LOG | grep Wallcl | awk '{ print $4 }' | tail -n 1)
UTS_OVERHEAD=$(echo \( \( $CHIMES_UTS / $NORMAL_UTS \) - 1.0 \) \* 100.0 | bc -l)
echo "UTS    : $UTS_OVERHEAD %"
