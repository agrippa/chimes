#!/bin/bash

set -e

if [[ $# < 2 || $# > 6 ]]; then
    echo "usage: submit-job.sh test-name cpp|omp [time] [repeats] [dummy|nodummy] [block|noblock]"
    exit 1
fi

TEST=$1
TYPE=$2
TIME="00:30:00"
REPEATS="3"
DUMMY=0
BLOCK=0

if [[ $# > 2 ]]; then
    TIME="$3"
fi

if [[ $# > 3 ]]; then
    REPEATS="$4"
fi

if [[ $# > 4 ]]; then
    if [[ $5 == dummy ]]; then
        DUMMY=1
    elif [[ $5 == nodummy ]]; then
        DUMMY=0
    else
        echo Invalid value for fifth argument. Must be dummy or nodummy.
        exit 1
    fi
fi

if [[ $# > 5 ]]; then
    if [[ $6 == block ]]; then
        BLOCK=1
    elif [[ $6 == noblock ]]; then
        BLOCK=0
    else
        echo Invalid value for sixth argument. Must be block or noblock.
        exit 1
    fi
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

JOBNAME=$TEST.$TYPE
if [[ $DUMMY == 1 ]]; then
    JOBNAME="$JOBNAME.dummy"
else
    JOBNAME="$JOBNAME.nodummy"
fi
if [[ $BLOCK == 1 ]]; then
    JOBNAME="$JOBNAME.block"
else
    JOBNAME="$JOBNAME.noblock"
fi

NJOBS=
if [[ $QSUB_EXISTS == 0 ]]; then
    NJOBS=$(qstat -u jmg3 | tail -n +6 | awk '{ print $4 }' | grep -w $JOBNAME | wc -l)
elif [[ $SBATCH_EXISTS == 0 ]]; then
    NJOBS=$(squeue -n $JOBNAME -u jmg3 --noheader | wc -l)
fi

if [[ $NJOBS != 0 ]]; then
    echo A job for $JOBNAME already exists
    exit 1
fi

TEST_EXISTS=$(python $CHIMES_HOME/src/tests/src/${TYPE}_perf_tests.py -t garbage | awk '{ print $1 }' | grep -w $TEST | wc -l)
if [[ $TEST_EXISTS != 1 ]]; then
    echo Test $TEST does not seem to exist, available performance tests are:
    python $CHIMES_HOME/src/tests/src/${TYPE}_perf_tests.py -t garbage
    exit 1
fi

CMD="python $CHIMES_HOME/src/tests/src/${TYPE}_perf_tests.py -q -r $REPEATS -t $TEST"
if [[ $DUMMY == 1 ]]; then
    CMD="$CMD -d"
fi
if [[ $BLOCK == 1 ]]; then
    CMD="$CMD -b"
fi

SCRIPT=$(mktemp /tmp/chimes-$TEST.XXXXXX.pbs)
echo '#!/bin/bash' > $SCRIPT
echo source $HOME/.bashrc >> $SCRIPT
echo source $HOME/.bash_profile >> $SCRIPT
echo $CMD >> $SCRIPT


if [[ $SBATCH_EXISTS == 0 ]]; then
    echo Using sbatch
    sbatch -p commons --nodes=1 --cpus-per-task=12 --mem 48000 --exclusive \
        --time $TIME -J $JOBNAME --mail-user=jmg3@rice.edu --mail-type=ALL \
        -o $SHARED_SCRATCH/jmg3/outputs/$JOBNAME.stdout \
        -e $SHARED_SCRATCH/jmg3/outputs/$JOBNAME.stderr $SCRIPT
elif [[ $QSUB_EXISTS == 0 ]]; then
    echo Using qsub
    qsub -q serial -l nodes=1:ppn=32 -l walltime=$TIME -N $JOBNAME -m abe \
        -M jmg3@rice.edu \
        -o $SHARED_SCRATCH/jmg3/outputs/$JOBNAME.stdout \
        -e $SHARED_SCRATCH/jmg3/outputs/$JOBNAME.stderr $SCRIPT
else
    echo Unable to detect supported batch job submission tool
    exit 1
fi
