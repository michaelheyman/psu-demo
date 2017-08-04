#include "clist.h"

//Write a function to display the list. Return the number of nodes.
int list::displayAll() {
    cout << __func__ << endl;
    return displayAll(rear->next);
}
int list::displayAll(node* head) {
    if (!head)
        return 0;
    if (head == this->rear) {
        cout << head->data << " ";
        return 1;
    }

    cout << head->data << " ";

    return 1 + displayAll(head->next);
}
