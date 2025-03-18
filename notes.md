# CTF Notes

This file contains useful commands, tools, and techniques I frequently use when solving CTF challenges and working with the shell.

---

## General Shell Commands

- List files and directories:
  ```sh
  ls -l    # Detailed list of files
  ls -a    # Show hidden files
  ```
- View file contents:
  ```sh
  cat file.txt    # Print file content
  less file.txt   # View file with navigation
  head -n 10 file.txt  # Show first 10 lines
  tail -n 10 file.txt  # Show last 10 lines
  ```
- File manipulation:
  ```sh
  cp file.txt newfile.txt   # Copy a file
  mv oldname.txt newname.txt  # Rename/move a file
  rm file.txt   # Delete a file
  find . -name "*.tmp" -delete  # Delete all .tmp files
  ```

---

## Permissions & Attributes

- Change file permissions:
  ```sh
  chmod +x script.sh   # Make script executable
  chmod 644 file.txt   # Set read/write permissions
  ```
- Check file permissions:
  ```sh
  ls -l file.txt
  ```

---

## Archiving & Compression

- Create and extract `.tar` archives:
  ```sh
  tar -cf archive.tar file.txt  # Create a tar archive
  tar -xf archive.tar  # Extract a tar archive
  ```
- Compress with gzip:
  ```sh
  tar -czf archive.tar.gz file.txt  # Create gzip-compressed archive
  tar -xzf archive.tar.gz  # Extract gzip archive
  ```

---

## Git Commands

- Check last 5 commits:
  ```sh
  git log -5 --pretty=format:"%H"
  ```
- Find ignored files:
  ```sh
  git check-ignore -v *
  ```
- Undo last commit (but keep changes):
  ```sh
  git reset --soft HEAD~1
  ```
- Remove a file from Git but keep it locally:
  ```sh
  git rm --cached filename
  ```

---

## SSH & Authentication

- Generate SSH keys:
  ```sh
  ssh-keygen -t rsa -b 4096 -f id_rsa
  ```
- Copy SSH key to a remote server:
  ```sh
  ssh-copy-id user@host
  ```
- Connect to a remote server:
  ```sh
  ssh user@host
  ```

---

## Finding & Searching

- Find files by name:
  ```sh
  find . -name "*.log"
  ```
- Search inside files:
  ```sh
  grep "keyword" file.txt
  grep -r "keyword" /path/to/search  # Search recursively
  ```

This list will be updated as I progress in the Piscine.

