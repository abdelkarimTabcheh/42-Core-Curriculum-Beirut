# push_swap

## Overview

The `push_swap` project is part of the 42 Core Curriculum. It involves creating a program that sorts a stack of integers using a limited set of operations. This project tests algorithmic thinking, optimization, and proficiency in the C programming language.

## Objectives

- Implement sorting algorithms to sort data on a stack.
- Minimize the number of operations required to sort the stack.
- Understand and apply various sorting techniques and their complexities.

## Sorting Algorithm

For this project, I implemented the **Turk sort** algorithm, achieving a grade of **100%**. The Turk sort is an advanced sorting algorithm that optimizes the sorting process for the constraints of the `push_swap` project. While other algorithms like **Radix sort** can be used, they typically result in a lower grade due to higher operation counts.

## Program Structure

- **push_swap.c**: Contains the main logic of the program, including initialization and execution of the sorting algorithm.
- **operations.c**: Defines the allowed operations such as `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, and `rrr`.
- **utils.c**: Utility functions for handling stacks and operations.
- **turk_sort.c**: Implementation of the Turk sort algorithm.
- **Makefile**: Compilation instructions for the project.

## Compilation

To compile the project, run the following command:

```sh
make
