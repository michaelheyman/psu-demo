#include "arr.h"

//Write a function to display each list. Return the number of nodes.
int table::displayAll() {
    cout << __func__ << endl;
    return displayAll(head);
}
int table::displayAll(node* head) {
    if (!head)
        return 0;

    cout << head->data << " ";

    return 1 + displayAll(head->next);
}
int table::displayAll(node** head) {
    if (!head)
        return 0;
    if (*head == this->head[size])
        return 0;

    int count = displayAll(*head);
    cout << endl;

    return count + displayAll(++head);
}
