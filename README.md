## Crowdsourced test cases for Project 2 of CS 502 course (Compilers)

Thanks to all the contributors.

`regression_tests` folder has test cases used for project 1.

Any test cases which is not part of the project specification, should be added to `ignore.txt`.

New test cases for project 2 should be added in `project2_tests` folder.

To run all test cases at once, use the command:

```sh
./iteratetests.sh path_to_cc1_binary_relative_to_regression_tests_folder_or_absolute_path
```

For example, if this git repository is cloned in the same directoy as the install folder, then the correct command would be:

```sh
./iteratetests.sh ../../install/cc1
```
