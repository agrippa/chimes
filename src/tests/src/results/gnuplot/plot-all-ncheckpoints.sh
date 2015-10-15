#!/bin/bash

MACHINES="davinci.rice.edu biou.rice.edu"

GNUPLOT_DIR="$CHIMES_HOME/src/tests/src/results/gnuplot"
TESTS=()
DAVINCI_CPP_RESULTS=()
DAVINCI_OMP_RESULTS=()
BIOU_CPP_RESULTS=()
BIOU_OMP_RESULTS=()

echo -e 'Test\t"Platform A - CPP"\t"Platform B - CPP"\t"Platform A - OMP"\t"Platform B - OMP"' > data

for TEST in $(cat "$GNUPLOT_DIR/../davinci.rice.edu.cpp.noblock.nodummy.perf" | awk '{ print $1 }'); do
    TESTS+=($TEST)
done

for MACHINE in $MACHINES; do
  CUSTOM_MACHINE=$MACHINE
  if [[ $MACHINE == "davinci.rice.edu" ]] ; then
      CUSTOM_MACHINE="A"
  elif [[ $MACHINE == "biou.rice.edu" ]]; then
      CUSTOM_MACHINE="B"
  fi

  CPP_FILE="$GNUPLOT_DIR/../$MACHINE.cpp.noblock.nodummy.perf"
  OMP_FILE="$GNUPLOT_DIR/../$MACHINE.omp.noblock.nodummy.perf"

  for FILE in $OMP_FILE $CPP_FILE; do
      if [[ ! -f $FILE ]]; then
          echo Missing input file $FILE
          exit 1
      fi
      if [[ $(wc -l $FILE | awk '{ print $1 }') != 21 ]]; then
          echo Invalid file $FILE, expected 21 tests
          exit 1
      fi
  done

  for N in $(cat $CPP_FILE | awk '{ print $7 }'); do
    if [[ $MACHINE == "davinci.rice.edu" ]]; then
        DAVINCI_CPP_RESULTS+=($N)
    else
        BIOU_CPP_RESULTS+=($N)
    fi
  done

  for N in $(cat $OMP_FILE | awk '{ print $7 }'); do
    if [[ $MACHINE == "davinci.rice.edu" ]]; then
      DAVINCI_OMP_RESULTS+=($N)
    else
      BIOU_OMP_RESULTS+=($N)
    fi
  done
done

for ((i=0;i<${#DAVINCI_CPP_RESULTS[@]};++i)); do
    printf "%s\t%s\t%s\t%s\t%s\n" "${TESTS[i]}" "${DAVINCI_CPP_RESULTS[i]}" "${BIOU_CPP_RESULTS[i]}" "${DAVINCI_OMP_RESULTS[i]}" "${BIOU_OMP_RESULTS[i]}" >> data
done

# CUSTOM_MACHINE=$MACHINE
# if [[ $MACHINE == "davinci.rice.edu" ]] ; then
#     CUSTOM_MACHINE="Platform A"
# elif [[ $MACHINE == "biou.rice.edu" ]]; then
#     CUSTOM_MACHINE="Platform B"
# fi

gnuplot -e "output_file=\"ncheckpoints.all.png\"" -e "full_title=\"Number of Checkpoints Created\"" plot-all-ncheckpoints.gnu
