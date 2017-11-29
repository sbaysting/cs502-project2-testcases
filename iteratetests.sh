rm report.txt

CC=$1
echo "Running regression tests"
cd "regression_tests"
for f in *.c; do
    testname="${f%.*}"
    testnum=${testname:4}
    $CC $f
    DIFF=`diff t$testnum.txt ../output.txt`
    if [[ $DIFF != "" ]]; then
        echo "Test $testnum failed:" >> ../regression_report.txt
        echo $DIFF >> ../regression_report.txt
    fi
done

echo "Running project 2 tests"
cd "project2_tests"
for f in *.c; do
    testname="${f%.*}"
    testnum=${testname:4}
    $CC $f
    DIFF=`diff t$testnum.txt ../output.txt`
    if [[ $DIFF != "" ]]; then
        echo "Test $testnum failed:" >> ../project2_report.txt
        echo $DIFF >> ../project2_report.txt
    fi
done
