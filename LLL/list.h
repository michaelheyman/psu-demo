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

        //Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
        int displayEveryOther();
        int displayEveryOther(node* head);
        int displayEveryOtherHelper(node* head, int &count, int &displayed);

        //Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.    
        int addToEnd();
        int addToEnd(node*& head);
        int addToEndHelper(node*& head, int &index, int &sum, int &total);

        //Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list. 
        int addAfter2(int toAdd);
        int addAfter2(node*& head, int toAdd);
        int addAfter2Helper(node*& head, int toAdd, int added);

        //Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.    
        int addBefore2(int toAdd);
        int addBefore2(node* head, int toAdd);
        int addBefore2Helper(node* head, node* prev, int toAdd, int added);

        //Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five.  
        int modifyAfter();
        int modifyAfter(node* head);
        int modifyAfter(node * head, bool found, int count, int data);

        //Write a function to reverse the List. Return number of nodes in the list.   
        int reverseAll();
        int reverseAll(node*& head);
        int reverseAll(node*& head, node * curr, node * prev, int &count);

        //Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data
        int appendIfDivisible(int toAdd);
        int appendIfDivisible(node*& head, int toAdd);
        int appendIfDivisible(node*& head, node * curr, node * prev, int toAdd, int count);

        //Write a function that returns the average of the unique items in the list.  
        float averageSpecial();
        float averageSpecial(node* head);
        float averageSpecial(node* head, float sum, float count);
        bool isUnique(node *& head, node * curr);

        //Write a function that takes 2 lists and creates a new list where the nth node is the average of the nth items in the two input lists. Return the average of the new list.   
        float copySpecialAvg(list*& source1, list*& source2, list*& dest);
        float copySpecialAvg(node*& source1, node*& source2, node*& dest);
        float copySpecialAvg(node*& source1, node*& source2, node*& dest, int sum, int count);

        //Write a function that reverses every 3 nodes in a list, any remainders at the end of the list should be left as they are. Return the number of swapped nodes
        int swap3(node*& head);
        int swap3(node*& first, node*& second, node*& third, int count);

        //Remove all nodes except the first and the last node
        int removeExceptFirstLast();
        int removeExceptFirstLast(node *& head, node *& tail);

        //Remove all nodes except the first and the last two nodes
        int removeExceptLastTwo();
        int removeExceptLastTwo(node *& head, node *& tail);

        //Remove all nodes with even data
        int removeEven();
        int removeEven(node *& head, node *& tail);

        //Compute the average of all data
        int average();
        int average(node * head, int sum, int count);

        //Add a node to the end but only if it doesn't already exist in the list
        int addIfUnique(int toAdd);
        int addIfUnique(node *& head, int toAdd);

        //Add a node to the end that is the sum of all the data in the list
        int addSum();
        int addSum(node *& head, int sum);

        //Move the last node to the beginning of the list
        int moveLastToBegin();
        int moveLastToBegin(node * curr);

        //Make a complete copy of the list
        int copy(node *& destination);
        int copy(node *& source, node *& destination);

    private:		//notice there is both a head and a tail!
        node * head;
        node * tail;
};
