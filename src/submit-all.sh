set -e

ENABLE_ON=
OMP=0

while getopts "t:mh" opt; do
    case $opt in
        t)
            ENABLE_ON=$OPTARG
            ;;
        m)
            OMP=1
            ;;
        h)
            echo 'usage: submit-all.sh [-t testname] [-m]'
            echo '       -t: only run tests starting with this test'
            echo '       -m: run OMP tests, not CPP'
            ;;
        \?)
            echo "unrecognized option -$OPTARG" >&2
            exit 1
            ;;
        :)
            echo "option -$OPTARG requires an argument" >&2
            exit 1
            ;;
    esac
done

ENABLED=0
if [[ -z "$ENABLE_ON" ]]; then
    ENABLED=1
fi

LIST_CMD=
if [[ $OMP == 1 ]]; then
    LIST_CMD="python $CHIMES_HOME/src/tests/src/omp_perf_tests.py -l"
else
    LIST_CMD="python $CHIMES_HOME/src/tests/src/cpp_perf_tests.py -l"
fi

TEST_TYPE=cpp
if [[ $OMP == 1 ]]; then
    TEST_TYPE=omp
fi

for t in $(eval $LIST_CMD); do
    echo $t

    if [[ $ENABLED == 0 && $t == $ENABLE_ON ]]; then
        ENABLED=1
    fi
    if [[ $ENABLED == 0 ]]; then
        continue
    fi

    $CHIMES_HOME/src/submit-job.sh $t $TEST_TYPE 00:30:00 2 dummy noblock;
    $CHIMES_HOME/src/submit-job.sh $t $TEST_TYPE 00:30:00 2 nodummy block;
    $CHIMES_HOME/src/submit-job.sh $t $TEST_TYPE 00:30:00 2 nodummy noblock;
done
