#include "table.h"

int main()
{
    table object;
    object.build(); 	//builds a BST
    object.display();	//displays a BST


    /*  PLACE YOUR FUNCTION CALL HERE */
    table newTable;
    object.copy(newTable);

    newTable.display();
    //object.display();	//displays again after!

    return 0;
}
