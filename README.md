# Using CSES from the Terminal

## CLI Manual

- Install: `cargo install cses-cli`
- Login: `cses-cli login`
- Login status: `cses-cli status`
- List courses: `cses-cli courses`.
    Output:
    ```
    CSES Problem Set (problemset)
        The CSES Problem Set contains a collection of algorithm programming practice problems.
    ```
- List *problemset* problems: `cses-cli list -c problemset`.
    The output is saved in `problemset.txt`.
- Display task statement: `cses-cli view -t <task ID>`.
    This feature is currently unsupported.