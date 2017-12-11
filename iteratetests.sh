# Check if argument was given at all
if [ -z "$1" ]; then
    echo "Please pass the location of the cc1 executable."
    exit 1
fi

# Get the location of the cc1 executable
CC=$1

# Add folders to iterate through
declare -a test_folders=("regression_tests" "project2_tests")

# Check to make sure cc1 exists at the given path
if [ ! -f $CC ]; then
    echo "cc1 exeuctable does not exist at path ${CC}. Please choose a new location"
    exit 1
fi

# Run tests
for folder in "${test_folders[@]}"; do
    echo "Running tests in ${folder}..."
    cd $folder
    report_name="${folder}_report.txt"
    # Read lines from ignore.txt if it exists
    if [[ -e ignore.txt ]]; then
        IFS=$'\n' read -d '' -r -a ignore < ignore.txt
        echo "Found ignore.txt in ${folder}! Not running tests: ${ignore[*]}"
    fi
    # Remove previous report if it exists, then create it again in case its empty
    echo -n "" > ../$report_name
    # Read each .c file
    for f in *.c; do
        testname="${f%.*}"
        testnum=${testname:4}
        # Check if test number is in local ignore file
        # If so, continue to next test
        if [[ -e ignore.txt ]]; then
            if [[ " ${ignore[*]} " == *" $testnum "* ]]; then
                #echo "Ignoring test $testnum..."
                continue
            fi
        fi
        # Otherwise, run test
        $CC $f > /dev/null 2>&1
        DIFF=`diff t$testnum.txt output.txt`
        if [[ $DIFF != "" ]]; then
            echo "Test $testnum failed!"
            echo "Test $testnum failed:" >> ../${report_name}
            echo $DIFF >> ../${report_name}
        fi
    done
    echo "Report output in $report_name"
    # Remove output.txt if it exists
    if [ -f output.txt ]; then
        rm output.txt
    fi
    # Remove all of the GCC generated .s files
    rm *.s
    cd ..
done
