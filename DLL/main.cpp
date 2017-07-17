#include "dlist.h"


int main()
{
    list object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    cout << "total: " << object.displayReverse() << endl;

    object.display();
    
    return 0;
}
