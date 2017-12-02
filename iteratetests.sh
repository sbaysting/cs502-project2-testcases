CC=$1
echo "Running regression tests"
rm regression_report.txt
cd "regression_tests"
for f in *.c; do
    testname="${f%.*}"
    testnum=${testname:4}
    $CC $f
    DIFF=`diff t$testnum.txt output.txt`
    if [[ $DIFF != "" ]]; then
        echo "Test $testnum failed:" >> ../regression_report.txt
        echo $DIFF >> ../regression_report.txt
    fi
done

cd ..
echo "Running project 2 tests"
rm project2_report.txt
cd "project2_tests"
for f in *.c; do
    testname="${f%.*}"
    testnum=${testname:4}
    $CC $f
    DIFF=`diff t$testnum.txt output.txt`
    if [[ $DIFF != "" ]]; then
        echo "Test $testnum failed:" >> ../project2_report.txt
        echo $DIFF >> ../project2_report.txt
    fi
done
cd ..
rm output.txt
rm project2_tests/output.txt
rm regression_tests/output.txt
rm project2_tests/*.s
rm regression_tests/*.s
