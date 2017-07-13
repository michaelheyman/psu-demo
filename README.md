# PSU Proficiency Demo

## Table of Contents

- [Introduction](#introduction)
- [Quick and dirty `git` workflow](#quick-and-dirty-git-workflow)
- [Proficiency Exam Rules](#proficiency-exam-rules)
- [Sample Practice Questions](#sample-practice-questions)
- [Practice Questions](#practice-questions)
  - [Array of Linked Lists](#array-of-linked-lists)
  - [Binary Search Tree](#binary-search-tree)
  - [Circular Linked List](#circular-linked-list)
  - [Doubly Linked List](#doubly-linked-list)
  - [Linear Linked List](#linear-linked-list)

## Introduction

This private repository holds data structures that resemble the ones offered at the PSU Proficiency Demo.

**Important:** this code is only compatible with x86_64 architecture. If it doesn't run on your machine, clone it onto the PCC server.

To begin, clone this repository to your local machine with `git clone https://github.com/michaelheyman/psu-demo.git`.

Changes to the `master` branch are disabled, therefore you are encouraged to create and work on your own branch. Keep your branch updated. If your name is John Smith your branch should be `jsmith`.

You may create a branch with `git checkout -b branchName`.

## Quick and dirty `git` workflow
* `git status` shows files that have been changed
* `git add filename` adds `filename` to the staging area.
* `git commit -m "comment"` commits the file with a comment
* `git push` pushes the commit to the remote

---

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

---

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

---

## Practice Questions

#### Array of Linked Lists

D | Question | Method
--- | --- | ---
0 | Write a function to display each list. Return the number of nodes. | `int displayAll(node* head)`
0 | Write a function to display each list in reverse order starting with the last list. Return the number of nodes. | `int displayReverse(node* head)`
0 | Write a function to display every node in each list that is divisible by the argument passed in. Return number of nodes displayed. | `int displayDivisible(node* head, int toDisplay)`
1 | Write a function to display every other Node in each list. Return the number of nodes that are not displayed. | `int displayEveryOther(node* head)`
1 | Write a function to add the sum of the data from the first two nodes of each list to the end of the last list. Return the sum of the last list. | `int addToEnd(node*& head)`
1 | Write a function to add the data passed in to the function after every instance of a 2 in each list. Return the number of nodes that were added to the list. | `int addAfter2(node*& head, int toAdd)`
1 | Write a function to add the data passed in to the function before every instance of a 2 in each list. Return the number of nodes that were added to the list. | `int addBefore2(node*& head, int toAdd)`
3 | Write a function to add the data of the first node that is divisible by three or five to every following node in each list. Return number of nodes that occur before one is divisible by three or five. | `int modifyAfter(node* head)`
3 | Write a function to reverse each List. Return number of nodes in the list. | `int reverseAll(node*& head)`
3 | Write a function to add a node that contains the data passed into the function at the end of each list for each node that is divisible by the first node's data | `int appendIfDivisible (node*& head, int toAdd)`
4 | Write a function to append the first list to each following list in the array, return the average of the last list in the array. | `float appendAll(node*& head)`

#### Binary Search Tree

D | Question | Method
--- | --- | ---
0 | Write a function to display the tree in order. Return the number of nodes. | `int displayAll(node* root)`
0 | Write a function to display the tree in reverse order. Return the number of nodes. | `int displayReverse(node* root)`
0 | Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed. | `int displayDivisible(node* root, int toDisplay)`
1 | Write a function to add the data passed in to the function to the tree. | `int insertData(node*& root, int toAdd)`
3 | Write a function to remove every node that is divisible by 3 and 5 from the Tree. Return the number of nodes removed | `int removeDivisible(node*& root)`
3 | Write a function to display the data in the longest path of the tree. | `int longestPath(node* root)`
4 | Write a function to return the average of the longest path in a tree. | `int avgPath(node* root)`
3 | Write a function that returns the average of the data contained in the tree | `int avgData(node* root)`
2 | Write a function to copy all the nodes that are greater than root into a new tree. Return the number of nodes copied | `int copyGreater(node* srcRoot, node*& destRoot)`
3 | Write a function to copy all even nodes from one tree into a new tree. return number of nodes divisible by 7 | `int copyDivisible(node* srcRoot, node*& destRoot)`
2 | Write a function to remove all the leaves from a tree. return number of nodes removed. | `int prune(node*& root)`
3 | Write a function to copy a tree, excluding its' root, into a new tree. return number of nodes copied. | `int copyNoRoot(node* srcRoot, node*& destRoot)`

#### Circular Linked List

D | Question | Method
--- | --- | ---
0 | Write a function to display the list. Return the number of nodes. | `int displayAll(node* head)`
0 | Write a function to display the list in reverse order. Return the number of nodes. | `int displayReverse(node* head)`
0 | Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed. | `int displayDivisible(node* head, int toDisplay)`
1 | Write a function to display every other Node in the list. Return the number of nodes that are not displayed. | `int displayEveryOther(node* head)`
1 | Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list. | `int addToEnd(node*& head)`
1 | Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list. | `int addAfter2(node*& head, int toAdd)`
1 | Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list. | `int addBefore2(node*& head, int toAdd)`
3 | Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five. | `int modifyAfter(node* head)`
3 | Write a function to reverse the List. Return number of nodes in the list. | `int reverseAll(node*& head)`
3 | Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data | `int appendIfDivisible (node*& head, int toAdd)`

#### Doubly Linked List

D | Question | Method
--- | --- | ---
0 | Write a function to display the list. Return the number of nodes. | `int displayAll(node* head)`
0 | Write a function to display the list in reverse order. Return the number of nodes. | `int displayReverse(node* head)`
0 | Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed. | `int displayDivisible(node* head, int toDisplay)`
1 | Write a function to display every other Node in the list. Return the number of nodes that are not displayed. | `int displayEveryOther(node* head)`
1 | Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list. | `int addToEnd(node*& head)`
1 | Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list. | `int addAfter2(node*& head, int toAdd)`
1 | Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list. | `int addBefore2(node*& head, int toAdd)`
3 | Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five. | `int modifyAfter(node* head)`
3 | Write a function to reverse the List. Return number of nodes in the list. | `int reverseAll(node*& head)`
3 | Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data | `int appendIfDivisible (node*& head, int toAdd)`

#### Linear Linked List

D | Question | Method
--- | --- | ---
0 | Write a function to display the list. Return the number of nodes. | `int displayAll(node* head)`
0 | Write a function to display the list in reverse order. Return the number of nodes. | `int displayReverse(node* head)`
0 | Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed. | `int displayDivisible(node* head, int toDisplay)`
1 | Write a function to display every other Node in the list. Return the number of nodes that are not displayed. | `int displayEveryOther(node* head)`
1 | Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list. | `int addToEnd(node*& head)`
1 | Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list. | `int addAfter2(node*& head, int toAdd)`
1 | Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list. | `int addBefore2(node*& head, int toAdd)`
3 | Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five. | `int modifyAfter(node* head)`
3 | Write a function to reverse the List. Return number of nodes in the list. | `int reverseAll(node*& head)`
3 | Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data | `int appendIfDivisible (node*& head, int toAdd)`
4 | Write a function that takes 2 lists and creates a new list where the nth node is the average of the nth items in the two input lists. Return the average of the new list. | `float CopySpecialAvg (node*& source1, node*& source2, node*& dest)`
3 | Write a function that returns the average of the unique items in the list. | `float averageSpecial (node* head)`
4 | Write a function that reverses every 3 nodes in a list, any remainders at the end of the list should be left as they are. Return the number of swapped nodes | `int swap3(node*& head)`
