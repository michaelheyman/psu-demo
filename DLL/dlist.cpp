#include "dlist.h"

//Write a function to display the list. Return the number of nodes.
int list::displayAll() {
    cout << __func__ << endl;
    return displayAll(head);
}
int list::displayAll(node* head) {
    if (!head)
        return 0;

    return displayAll(head, 0);
}
int list::displayAll(node* head, int count) {
    if (!head)
        return count;

    cout << head->data << " ";
    return displayAll(head->next, ++count);
}
