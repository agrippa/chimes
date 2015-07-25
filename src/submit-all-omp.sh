for t in $(python  $CHIMES_HOME/src/tests/src/omp_perf_tests.py -q -t lkjasdf | awk '{ print $1 }'); do
    echo $t
    ./submit-job.sh $t omp 00:30:00 2 dummy noblock;
    ./submit-job.sh $t omp 00:30:00 2 nodummy block;
    ./submit-job.sh $t omp 00:30:00 2 nodummy noblock;
done
