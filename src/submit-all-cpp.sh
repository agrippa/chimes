for t in $(python  $CHIMES_HOME/src/tests/src/cpp_perf_tests.py -q -t lkjasdf | awk '{ print $1 }'); do
    echo $t
    $CHIMES_HOME/src/submit-job.sh $t cpp 00:30:00 2 dummy noblock;
    $CHIMES_HOME/src/submit-job.sh $t cpp 00:30:00 2 nodummy block;
    $CHIMES_HOME/src/submit-job.sh $t cpp 00:30:00 2 nodummy noblock;
done
