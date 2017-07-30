#include "table.h"

int main()
{
    table object;
    object.build(); 	//builds a BST
    //object.display();	//displays a BST
    object.displayBFS();

    /*  PLACE YOUR FUNCTION CALL HERE */
    cout << "total: " << object.insertData(3) << endl;

    object.displayBFS();
    //object.display();	//displays again after!

    return 0;
}
