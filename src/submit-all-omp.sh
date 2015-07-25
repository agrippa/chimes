for t in $(python  $CHIMES_HOME/src/tests/src/omp_perf_tests.py -q -t lkjasdf | tail -n +2 | awk '{ print $1 }'); do
    echo $t
    $CHIMES_HOME/src/submit-job.sh $t omp 00:30:00 2 dummy noblock;
    $CHIMES_HOME/src/submit-job.sh $t omp 00:30:00 2 nodummy block;
    $CHIMES_HOME/src/submit-job.sh $t omp 00:30:00 2 nodummy noblock;
done
