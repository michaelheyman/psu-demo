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
        int displayAllHelper(node* head, int count);

        //Write a function to display the list in reverse order. Return the number of nodes.  
        int displayReverse();
        int displayReverse(node* head); 
        int displayReverseHelper(node* head, int &count);

        // Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.   
        int displayDivisible(int toDisplay);
        int displayDivisible(node* head, int toDisplay);
        int displayDivisibleHelper(node* head, int toDisplay, int count);

    private:		//notice there is both a head and a tail!
        node * head;
        node * tail;
};
