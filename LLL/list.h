//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;   //some questions are a char * data;
    node * next;
};

class list
{
    public:
        //These functions are already written for you
        list();		//supplied
        ~list();		//supplied
        void build();     	//supplied
        void display();  	//supplied

        /* *****************YOUR TURN! ******************************** */
        //Write your function prototype here:

        //Write a function to display the list. Return the number of nodes.
        int displayAll();
        int displayAll(node* head);

        //Write a function to display the list in reverse order. Return the number of nodes.
        int displayReverse();
        int displayReverse(node* head);

        //Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
        int displayDivisible(int toDisplay);
        int displayDivisible(node* head, int toDisplay);

        //Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
        int displayEveryOther();
        int displayEveryOther(node* head);
        int displayEveryOther(node* head, int index);

        //Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.
        int addToEnd();
        int addToEnd(node*& head);

        //Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list.
        int addAfter2(int toAdd);
        int addAfter2(node*& head, int toAdd);

        //Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.
        int addBefore2(int toAdd);
        int addBefore2(node*& head, int toAdd);

        //Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five.
        int modifyAfter();
        int modifyAfter(node* head);
        int modifyAfter(node* head, int toAdd);

        //Write a function to reverse the List. Return number of nodes in the list.
        int reverseAll();
        int reverseAll(node*& head);
        int reverseAll(node*& head, node * prev);

        //Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data
        int appendIfDivisible(int toAdd);
        int appendIfDivisible(node*& head, int toAdd);

        //Write a function that returns the average of the unique items in the list.
        float averageSpecial();
        float averageSpecial(node* head);
        float averageSpecial(node* head, int &sum);
        bool isUnique(node * head, node * curr);

        //Write a function that reverses every 3 nodes in a list, any remainders at the end of the list should be left as they are. Return the number of swapped nodes
        int swap3();
        int swap3(node*& head);
        int swap3(node*& head, node* prev);

        /*
        4   Write a function that takes 2 lists and creates a new list where the nth node is the average of the nth items in the two input lists. Return the average of the new list.   float CopySpecialAvg (node*& source1, node*& source2, node*& dest)
        */

        //Write a recursive function in C++ to remove all nodes with even data.
        int removeEven();
        int removeEven(node *& head, node * prev);

        /*
        Write a recursive function in C++ to remove the last two nodes
        Write a recursive function in C++ to add a node to the end, if it is unique
        Write a recursive function in C++ to move the last node to the beginning
        Write a recursive function in C++ to copy the data structure
        Write a recursive function in C++ to compute the average of all data.
        Write a recursive function in C++ to add a note to the end but only if it doesn't already exist in the list
        Write a recursive function in C++ to add a node to the end that is the sum of all data in the list
        Write a recursive function in C++ to move the last node to the beginning of a list
        Write a recursive function in C++ to make a complete copy of the list
        */
    private:		//notice there is both a head and a tail!
        node * head;
        node * tail;
};
