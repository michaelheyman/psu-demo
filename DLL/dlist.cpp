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

//Write a function to display the list in reverse order. Return the number of nodes.
int list::displayReverse() {
    cout << __func__ << endl;
    return displayReverse(head);
}
int list::displayReverse(node* head) {
    return displayReverse(head, 0);
}
int list::displayReverse(node* head, int count) {
    if (!head)
        return count;

    count = displayReverse(head->next, ++count);
    cout << head->data << endl;

    return count;
}
