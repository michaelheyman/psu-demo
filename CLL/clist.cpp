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

//Write a function to display the list in reverse order. Return the number of nodes.
int list::displayReverse() {
    cout << __func__ << endl;
    return displayReverse(rear->next);
}
int list::displayReverse(node* head) {
    if (!head)
        return 0;
    if (head == rear) {
        cout << head->data << " ";
        return 1;
    }

    int count = 1 + displayReverse(head->next);
    cout << head->data << " ";

    return count;
}
