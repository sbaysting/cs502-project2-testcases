rm report.txt

CC=$1

for f in *.c; do
    testname="${f%.*}"
    testnum=${testname:4}
    $CC $f
    DIFF=`diff t$testnum.txt output.txt`
    if [[ $DIFF != "" ]]; then
        echo "Test $testnum failed:" >> report.txt
        echo $DIFF >> report.txt
    fi
done
