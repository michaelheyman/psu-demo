#include "list.h"

int main()
{
    list object;
    object.build();    //builds a LLL
    object.display();  //displays the LLL

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    cout << "\nUser-defined function calls:\n\n";
    cout << "displayAll():" << endl;
    cout << "This list has " << object.displayAll() << " items.\n\n";
    cout << "displayReverse():" << endl;
    cout << "\nThis list has " << object.displayReverse() << " items.\n\n";
    cout << "displayDivisible(2):" << endl;
    cout << "\nThis list has " << object.displayDivisible(2) << " items.\n\n";
   
    object.display();  //displays the LLL again!


    return 0;
}
