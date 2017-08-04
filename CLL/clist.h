//clist.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;	//some questions are a char * data;
    node * next;
};

class list
{
    public:
        //These functions are already written
        list();		//supplied
        ~list();	//supplied
        void build();	//supplied
        void display();	//supplied

        /* *****************YOUR TURN! ********************* */
        //Write your function prototype here:

        //Write a function to display the list. Return the number of nodes.
        int displayAll();
        int displayAll(node* head);

        //Write a function to display the list in reverse order. Return the number of nodes.
        int displayReverse();
        int displayReverse(node* head);

        /*
        0   Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.   int displayDivisible(node* head, int toDisplay)
        1   Write a function to display every other Node in the list. Return the number of nodes that are not displayed.    int displayEveryOther(node* head)
        1   Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.    int addToEnd(node*& head)
        1   Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list. int addAfter2(node*& head, int toAdd)
        1   Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.    int addBefore2(node*& head, int toAdd)
        3   Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five.  int modifyAfter(node* head)
        3   Write a function to reverse the List. Return number of nodes in the list.   int reverseAll(node*& head)
        3   Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data  int appendIfDivisible (node*& head, int toAdd)
        */

    private:
        node * rear;
};
