# PSU Proficiency Demo

## Table of Contents

- [Introduction](#introduction)
- [Quick and dirty `git` workflow](#quick-and-dirty-git-workflow)
- [Proficiency Exam Rules](#proficiency-exam-rules)
- [Sample Practice Questions](#sample-practice-questions)

## Introduction

This private repository holds data structures that resemble the ones offered at the PSU Proficiency Demo.

To begin, clone this repository to your local machine with `git clone https://github.com/michaelheyman/psu-demo.git`.

Changes to the `master` branch are disabled, therefore you are encouraged to create and work on your own branch. Keep your branch updated. If your name is John Smith your branch should be `jsmith`.

You may create a branch with `git checkout -b branchName`.

## Quick and dirty `git` workflow
* `git status` shows files that have been changed
* `git add filename` adds `filename` to the staging area.
* `git commit -m "comment"` commits the file with a comment
* `git push` pushes the commit to the remote

## Proficiency Exam Rules

* All problems will require a **recursive** solution
* **NO LOOPS may be used in the solution**, unless indicated in the problem statement
* Each problem will be given a specific prototype
* The prototype supplied may not be changed
* **Global variables** are not allowed
* The prototype supplied represents the function that should be called by main
* For questions that have students count, average, or traverse in some way, the **solution
should NOT modify the data structure**
* For questions that ask students to insert or copy, the solution should NOT delete items
* **As changes are made to the code**, please comment out code rather than deleting it!
* Use of the `cstring`, `cctype`, and `iostream` libraries are allowed. No other libraries may be
included or used.

## Sample Practice Questions

A complete environment will be provided by PSU that already creates and populates the data
structure with data. The data may be integer data or dynamically allocated arrays of characters.
Students will be implementing specific functions to perform a task which will then be linked with
code to build, display, and destroy the data structure assigned.

##### Linear linked lists, circular and doubly linked lists:
1. Write a recursive function in C++ to remove all nodes except for the first and last nodes.
2. Write a recursive function in C++ to remove the last two nodes
3. Write a recursive function in C++ to add a node to the end, if it is unique
4. Write a recursive function in C++ to move the last node to the beginning
5. Write a recursive function in C++ to copy the data structure

##### Binary search trees

1. Write a recursive function in C++ to make a copy of a binary search tree
2. Write a recursive function in C++ to make a copy of a binary search tree and place it in a
linear linked list, sorted
3. Write a recursive function in C++ to take a sorted array and insert it into a binary search
tree balanced
5. Write a recursive function in C++ to add a node into a binary search tree
6. Write a recursive function in C++ to remove the largest item in a binary search tree
8. Write a recursive function in C++ to find the root’s in-order successor

More examples within each data structure's folder.
