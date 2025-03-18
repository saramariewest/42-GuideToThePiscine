# Exercise 04 - midLS

## Task
In this exercise, I need to:
- Write a command that lists all files and directories in the current directory (excluding hidden files and `..`).
- Sort the output by modification date, with the newest entries first.
- Separate the entries with a comma and a space.
- Ensure directory names end with a slash (`/`).
- Follow the task requirements strictly, without adding extra functionality.

## Solution
Here is the command I used to solve the exercise:
```sh
ls -tp | sed ':a;N;$!ba;s/\n/, /g'
```

## Explanation
Step by step breakdown of my solution:
- **`ls -tp`**:
  - `-t` sorts files by modification date (newest first).
  - `-p` adds a trailing `/` to directories.
- **`sed ':a;N;$!ba;s/\n/, /g'`**:
  - `:a;N;$!ba;` ensures all lines are read before replacing newlines.
  - `s/\n/, /g` replaces every newline with `, ` to create a single-line output.

## Testing
To verify my solution, I used the following test case:
```sh
# Create test files and directories
touch file1.txt file2.log
mkdir dir1 dir2

# Run the script
sh midLS
```
Expected output:
```
dir1/, dir2/, file2.log, file1.txt, midLS
```

## Notes
- The command does not list hidden files (those starting with `.`), as required.
- If the directory is empty, it returns nothing.
- An alternative approach using `tr` instead of `sed`:
  ```sh
  ls -tp | tr '\n' ', ' | sed 's/, $//'
  ```
- This version uses `tr` to replace newlines with `, `, and `sed` to remove the trailing comma.


