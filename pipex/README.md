# Pipex

## Overview

The `pipex` project is a part of the 42 Core Curriculum. It aims to deepen your understanding of Unix processes and inter-process communication through the implementation of a simplified version of the Unix pipeline mechanism.

## Objectives

- Implement a program that replicates the behavior of the shell pipeline (`|`).
- Handle multiple processes, input/output redirection, and error handling.
- Gain a deeper understanding of Unix system calls such as `pipe`, `fork`, `dup2`, and `execve`.

## Requirements

The program should be executed with the following syntax:
```sh
./pipex file1 cmd1 cmd2 file2
