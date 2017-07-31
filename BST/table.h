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
        void displayBFS();
        void inorder(node * root);

        //Write a function to display the tree in order. Return the number of nodes.
        int displayAll();
        int displayAll(node* root);

        //Write a function to display the tree in reverse order. Return the number of nodes.
        int displayReverse();
        int displayReverse(node* root);

        //Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
        int displayDivisible(int toDisplay);
        int displayDivisible(node* root, int toDisplay);

        //Write a function to add the data passed in to the function to the tree.
        int insertData(int toAdd);
        int insertData(node*& root, int toAdd);
        int insert(node*& root, int toAdd);

        //Write a function to remove every node that is divisible by 3 and 5 from the Tree. Return the number of nodes removed
        /*
        3   Write a function to display the data in the longest path of the tree.   int longestPath(node* root)
        4   Write a function to return the average of the longest path in a tree.   int avgPath(node* root)
        3   Write a function that returns the average of the data contained in the tree int avgData(node* root)
        2   Write a function to copy all the nodes that are greater than root into a new tree. Return the number of nodes copied    int copyGreater(node* srcRoot, node*& destRoot)
        3   Write a function to copy all even nodes from one tree into a new tree. return number of nodes divisible by 7    int copyDivisible(node* srcRoot, node*& destRoot)
        2   Write a function to remove all the leaves from a tree. return number of nodes removed.  int prune(node*& root)
        3   Write a function to copy a tree, excluding its' root, into a new tree. return number of nodes copied.   int copyNoRoot(node* srcRoot, node*& destRoot)
        */

        //Make a copy of a BST
        int copy(table &destination);
        int copy(node *& destination);
        int copy(node *& root, node *& destination);

    private:
        node * root;
        static bool run;
};


