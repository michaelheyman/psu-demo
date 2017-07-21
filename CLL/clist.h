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

        //_Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list
        void addBefore2Helper();
        int addBefore2(node*& curNode, int toAdd);
        
    private:
        node * rear;
};
