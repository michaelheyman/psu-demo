#include "list.h"

int main()
{
    list object;
    object.build();    //builds a LLL
    object.display();  //displays the LLL

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    cout << "\n" << object.displayEveryOther() << endl;

   
    object.display();  //displays the LLL again!


    return 0;
}
