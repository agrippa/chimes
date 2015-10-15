#!/bin/bash

GNUPLOT_DIR="$CHIMES_HOME/src/tests/src/results/gnuplot"
MACHINES="davinci.rice.edu biou.rice.edu"

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

  for PERC in $(cat $CPP_FILE | awk '{ print $11 }'); do
      PERC=${PERC:11}
      PERC=${PERC:0:$(echo ${#PERC} - 2 | bc)}
      if [[ $MACHINE == "davinci.rice.edu" ]]; then
        DAVINCI_CPP_RESULTS+=($PERC)
      else
        BIOU_CPP_RESULTS+=($PERC)
      fi
  done

  for token in $(cat $OMP_FILE | awk '{ print $11 }'); do
      token=${token:11}
      token=${token:0:$(echo ${#token} - 2 | bc)}
      if [[ $MACHINE == "davinci.rice.edu" ]]; then
        DAVINCI_OMP_RESULTS+=($token)
      else
        BIOU_OMP_RESULTS+=($token)
      fi
  done
done

for ((i=0;i<${#DAVINCI_CPP_RESULTS[@]};++i)); do
    printf "%s\t%s\t%s\t%s\t%s\n" "${TESTS[i]}" "${DAVINCI_CPP_RESULTS[i]}" "${BIOU_CPP_RESULTS[i]}" "${DAVINCI_OMP_RESULTS[i]}" "${BIOU_OMP_RESULTS[i]}" >> data
done

gnuplot -e "output_file=\"efficiency.all.png\"" \
            -e "full_title=\"Checkpoint Efficiency\"" plot-all-efficiency.gnu
