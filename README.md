## Crowdsourced test cases for Project 2 of CS 502 course (Compilers)

Thanks to all the contributors.

`regression_tests` folder has test cases used for project 1.

Any test cases which is not part of the project specification, should be added to `ignore.txt`.

New test cases for project 2 should be added in `project2_tests` folder.

To run all test cases at once, use the command:

```sh
./iteratetests.sh absolute_path_to_cc1_binary
```

For example, if this git repository is cloned in the same directoy as the install folder, then the correct command would be:

```sh
./iteratetests.sh $PWD/../../install/cc1
```

Put an `ignore.txt` file in whichever test directory you want to ignore tests for. In that file, write the test numbers you don't want to run. One number on each line.

Example ignore.txt (numbers are tests NOT to be run):

```
10
13
56
101
```

An example `ignore.txt` is contained in the `regression_tests` folder. Those test cases were not covered in project 1 and will not be covered in project 2.
