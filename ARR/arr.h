//arr.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;  //some questions are char * data;
    node * next;
};

class table
{
    public:
        /* These functions are already written */
        table();		//supplied
        ~table();	//supplied
        void build();    //supplied
        void display();  //supplied


        /* *****************YOUR TURN! ******************************** */
        //Write your function prototype here:

        /*
        0   Write a function to display each list. Return the number of nodes.  int displayAll(node** head)
        0   Write a function to display each list in reverse order starting with the last list. Return the number of nodes. int displayReverse(node** head)
        0   Write a function to display every node in each list that is divisible by the argument passed in. Return number of nodes displayed.  int displayDivisible(node** head, int toDisplay)
        1   Write a function to display every other Node in each list. Return the number of nodes that are not displayed.   int displayEveryOther(node** head)
        1   Write a function to add the sum of the data from the first two nodes of each list to the end of the last list. Return the sum of the last list. int addToEnd(node**& head)
        1   Write a function to add the data passed in to the function after every instance of a 2 in each list. Return the number of nodes that were added to the list.    int addAfter2(node**& head, int toAdd)
        1   Write a function to add the data passed in to the function before every instance of a 2 in each list. Return the number of nodes that were added to the list.   int addBefore2(node**& head, int toAdd)
        3   Write a function to add the data of the first node that is divisible by three or five to every following node in each list. Return number of nodes that occur before one is divisible by three or five. int modifyAfter(node** head)
        3   Write a function to reverse each List. Return number of nodes in the list.  int reverseAll(node**& head)
        3   Write a function to add a node that contains the data passed into the function at the end of each list for each node that is divisible by the first node's data int appendIfDivisible (node**& head, int toAdd)
        4   Write a function to append the first list to each following list in the array, return the average of the last list in the array.    float appendAll(node**& head)
        */

    private:
        node ** head;     //dynamically allocated array
        int size;	 //the array size
};
