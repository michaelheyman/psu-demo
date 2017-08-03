//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;   //some questions use char * data;
    node * left;
    node * right;
};

class table
{
    public:
        //These functions are supplied already
        table();		//supplied
        ~table();		//supplied
        void build(); 		//supplied
        void display(); 	//supplied

        /* ************** PLACE YOUR PROTOTYPE HERE ***************** */

        //Write a function to display the tree in order. Return the number of nodes.
        int displayAll();
        int displayAll(node* root);

        //Write a function to display the tree in reverse order. Return the number of nodes.
        int displayReverse();
        int displayReverse(node* root);

        /*
        0   Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.   int displayDivisible(node* root, int toDisplay)
        1   Write a function to add the data passed in to the function to the tree. int insertData(node*& root, int toAdd)
        3   Write a function to remove every node that is divisible by 3 and 5 from the Tree. Return the number of nodes removed    int removeDivisible(node*& root)
        3   Write a function to display the data in the longest path of the tree.   int longestPath(node* root)
        4   Write a function to return the average of the longest path in a tree.   int avgPath(node* root)
        3   Write a function that returns the average of the data contained in the tree int avgData(node* root)
        2   Write a function to copy all the nodes that are greater than root into a new tree. Return the number of nodes copied    int copyGreater(node* srcRoot, node*& destRoot)
        3   Write a function to copy all even nodes from one tree into a new tree. return number of nodes divisible by 7    int copyDivisible(node* srcRoot, node*& destRoot)
        2   Write a function to remove all the leaves from a tree. return number of nodes removed.  int prune(node*& root)
        3   Write a function to copy a tree, excluding its' root, into a new tree. return number of nodes copied.   int copyNoRoot(node* srcRoot, node*& destRoot)
        */

        /*
        Write a recursive function in C++ to make a copy of a binary search tree
        Write a recursive function in C++ to make a copy of a binary search tree and place it in a linear linked list, sorted
        Write a recursive function in C++ to take a sorted array and insert it into a binary search tree balanced
        Write a recursive function in C++ to add a node into a binary search tree
        Write a recursive function in C++ to remove the largest item in a binary search tree
        Write a recursive function in C++ to remove the largest two items in a binary search tree
        Write a recursive function in C++ to find the root’s in-order successor
        Write a recursive function in C++ to find the inorder successor of a specified item
        */
    private:
        node * root;
};


