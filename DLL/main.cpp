#include "dlist.h"


int main()
{
    list object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    cout << "total: " << object.addBefore2(1033) << endl;

    object.display();
    
    return 0;
}
