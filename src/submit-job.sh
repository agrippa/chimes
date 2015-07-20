#!/bin/bash

set -e

if [[ $# != 2 && $# != 3 && $# != 4 ]]; then
    echo "usage: submit-job.sh test-name cpp|omp [time] [repeats]"
    exit 1
fi

TEST=$1
TYPE=$2
TIME="00:30:00"
REPEATS="3"

if [[ $# == 3 ]]; then
    TIME="$3"
elif [[ $# == 4 ]]; then
    TIME="$3"
    REPEATS="$4"
fi

if [[ $TYPE != "cpp" && $TYPE != "omp" ]]; then
    echo Second argument must be either cpp or omp
    exit 1
fi

set +e
which qsub &> /dev/null
QSUB_EXISTS=$?
which sbatch &> /dev/null
SBATCH_EXISTS=$?
set -e

if [[ $QSUB_EXISTS != 0 && $SBATCH_EXISTS != 0 ]]; then
    echo Could not find valid batch job submission tool
    exit 1
fi

LIST_OF_JOBS=
if [[ $QSUB_EXISTS == 0 ]]; then
    LIST_OF_JOBS=$(qstat -u jmg3 | awk '{ print $4 }' | tail -n +6)
elif [[ $SBATCH_EXISTS == 0 ]]; then
    LIST_OF_JOBS=$(squeue -u jmg3 | awk '{ print $3 }' | tail -n +2)
fi

RUN_EXISTS=$(echo $LIST_OF_JOBS | grep -w $TEST.$TYPE | wc -l)
if [[ $RUN_EXISTS != 0 ]]; then
    echo A job for $TEST.$TYPE already exists
    exit 1
fi

TEST_EXISTS=$(python $CHIMES_HOME/src/tests/src/${TYPE}_perf_tests.py -t garbage | awk '{ print $1 }' | grep -w $TEST | wc -l)
if [[ $TEST_EXISTS != 1 ]]; then
    echo Test $TEST does not seem to exist, available performance tests are:
    python $CHIMES_HOME/src/tests/src/${TYPE}_perf_tests.py -t garbage
    exit 1
fi

SCRIPT=$(mktemp /tmp/chimes-$TEST.XXXXXX.pbs)
echo source $HOME/.bashrc > $SCRIPT
echo source $HOME/.bash_profile > $SCRIPT
# echo 'echo $LD_LIBRARY_PATH' >> $SCRIPT
# echo echo Listing contents of /usr/lib64 >> $SCRIPT
# echo ls /usr/lib64/ >> $SCRIPT
# echo echo Listing contents of $SHARED_SCRATCH/jmg3/libs >> $SCRIPT
# echo ls $SHARED_SCRATCH/jmg3/libs/ >> $SCRIPT
echo python $CHIMES_HOME/src/tests/src/${TYPE}_perf_tests.py -q -r $REPEATS -t $TEST >> $SCRIPT


if [[ $SBATCH_EXISTS == 0 ]]; then
    echo Using sbatch
    sbatch -p commons --nodes=1 --cpus-per-task=12 --mem 48000 --exclusive \
        --time $TIME -J $TEST.$TYPE --mail-user=jmg3@rice.edu --mail-type=ALL \
        -o $SHARED_SCRATCH/jmg3/outputs/$TEST.$TYPE.stdout \
        -e $SHARED_SCRATCH/jmg3/outputs/$TEST.$TYPE.stderr $SCRIPT
elif [[ $QSUB_EXISTS == 0 ]]; then
    echo Using qsub
    qsub -q serial -l nodes=1:ppn=32 -l walltime=$TIME -N $TEST.$TYPE -m abe \
        -M jmg3@rice.edu -o $SHARED_SCRATCH/jmg3/outputs/$TEST.$TYPE.stdout \
        -e $SHARED_SCRATCH/jmg3/outputs/$TEST.$TYPE.stderr $SCRIPT
else
    echo Unable to detect supported batch job submission tool
    exit 1
fi
