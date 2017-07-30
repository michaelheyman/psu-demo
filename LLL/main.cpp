#include "list.h"
#include <unistd.h>

int main()
{
    list object;
    object.build();    //builds a LLL
    object.display();  //displays the LLL

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    cout << object.removeExceptLastTwo() << endl;

    object.display();  //displays the LLL again!

    return 0;
}
