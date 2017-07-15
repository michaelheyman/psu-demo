#include "list.h"
#include <unistd.h>

int main()
{
    list object;
    //object.build();    //builds a LLL
    //object.display();  //displays the LLL

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    //object.displayAll();
    list * obj1 = new list;
    obj1->build();
    obj1->display();

    sleep(1);

    list * obj2 = new list;
    obj2->build();
    obj2->display();
    list * dest = new list;;

    cout << object.copySpecialAvg(obj1, obj2, dest) << endl;

    //object.display();  //displays the LLL again!
    dest->displayAll();


    return 0;
}
