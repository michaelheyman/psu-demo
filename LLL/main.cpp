#include "list.h"
#include <unistd.h>

int main()
{
    list object;
    object.build();    //builds a LLL
    object.display();  //displays the LLL

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    //cout << object.removeEven() << endl;

    node * destination;
    cout << object.copy(destination) << endl;

    while (destination) {
        cout << destination->data << " ";
        destination = destination->next;
    }
    cout << endl;
    //object.displayAll();
    //object.display();  //displays the LLL again!

    return 0;
}
