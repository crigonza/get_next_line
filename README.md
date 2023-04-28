# get_next_line

get_next_line is a project at 42 that aims to create a function that reads a line ending with a newline character from a file descriptor. The project also teaches us how to use static variables.

## Getting Started

The prototype of the function is:

```c
char *get_next_line(int fd);
```

The function returns the line without the newline character at the end.

The function takes a file descriptor as an argument and stores the address of a buffer that contains the next line.

The function reads from the file descriptor until it finds a newline character or reaches the end of file. It then allocates memory for the line and copies the buffer into it. It also updates the static variable that stores the remaining characters after the newline.

## Test cases and errors

The function can handle multiple file descriptors by using a static variable for each file descriptor.

The function can handle different buffer sizes by using the macro `BUFFER_SIZE` defined at compilation. For example:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
```

The function can handle empty files, files without newlines, and files with multiple newlines.

The function can handle errors such as invalid file descriptors, invalid pointers, memory allocation failures, and read failures.
