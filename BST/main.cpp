#include "table.h"

int main()
{
    table object;
    object.build(); 	//builds a BST
    object.display();	//displays a BST

    /*  PLACE YOUR FUNCTION CALL HERE */
    cout << object.insertData(15) << endl;

    object.display();	//displays again after!

    return 0;
}
