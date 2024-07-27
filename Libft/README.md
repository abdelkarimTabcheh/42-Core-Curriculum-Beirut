# Libft

## Overview

`Libft` is a foundational project in the 42 curriculum that involves reimplementing a subset of the C standard library functions, along with some additional utility functions. This project aims to strengthen your understanding of C programming, memory management, and the use of various data structures. By the end of this project, you will have a personal library that you can use in future projects.

## Objectives

- Recreate standard library functions to deepen understanding of their implementation.
- Develop additional functions to enhance the functionality of your library.
- Ensure code quality, robustness, and efficiency.
- Gain proficiency in using Makefiles for project compilation.

## Function Categories

### Part 1 - Libc Functions

Reimplement common C standard library functions such as:

- Memory manipulation: `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`
- String manipulation: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`
- Character checks and transformations: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- Additional functions: `atoi`, `strdup`, `substr`, `strjoin`, `strtrim`, `split`, `itoa`, `strmapi`, `striteri`, `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`

### Part 2 - Additional Functions

Implement functions that provide additional utility beyond the standard library:

- Linked list operations: `lstnew`, `lstadd_front`, `lstsize`, `lstlast`, `lstadd_back`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`

### Bonus Functions (Optional)

Further extend your library with additional useful functions or data structures.

## Usage

### Compilation

To compile the library, run the following command:

```sh
make
