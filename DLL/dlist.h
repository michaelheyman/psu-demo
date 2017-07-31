//doubly linked list
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;


struct node
{
    int data;		//some questions use a char * data;
    node * previous;
    node * next;
};

class list
{
    public:
        //These functions are already written
        list();         //supplied
        ~list();        //supplied
        void build();   //supplied
        void display(); //supplied

        /* *****************YOUR TURN! ******************************** */
        /* place your prototype here */
        //Write a function to display the list. Return the number of nodes.
        int displayAll();
        int displayAll(node* head);
        int displayAll(node* head, int count);

        //Write a function to display the list in reverse order. Return the number of nodes.
        int displayReverse();
        int displayReverse(node* head);
        int displayReverse(node* head, int count);

        //Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
        int displayDivisible(int toDisplay);
        int displayDivisible(node* head, int toDisplay);
        int displayDivisible(node* head, int toDisplay, int count);

        //Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
        int displayEveryOther();
        int displayEveryOther(node* head);
        int displayEveryOther(node* head, int count, int displayed);

        //Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.
        int addToEnd();
        int addToEnd(node*& head);
        int addToEnd(node*& head, int index, int sum);

        //Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list.
        int addAfter2(int toAdd);
        int addAfter2(node*& head, int toAdd);

        //Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.
        int addBefore2(int toAdd);
        int addBefore2(node*& head, int toAdd);

        //Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five.
        int modifyAfter();
        int modifyAfter(node* head, int toAdd);
        int modifyAfter(node* head);
        /*
        3   Write a function to reverse the List. Return number of nodes in the list.   int reverseAll(node*& head)
        3   Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data  int appendIfDivisible (node*& head, int toAdd)
        */

    private:
        node * head;   //notice there is both a head
        node * tail;   //and a tail, common for DLL
};
