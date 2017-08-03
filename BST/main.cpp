#include "table.h"

int main()
{
    table object;
    object.build(); 	//builds a BST
    object.display();	//displays a BST

    /*  PLACE YOUR FUNCTION CALL HERE */
    cout << "\n" << object.displayAll() << endl;

    object.display();	//displays again after!

    return 0;
}
