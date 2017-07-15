#include "clist.h"

//Write a function to display the list. Return the number of nodes.
int list::displayAll() {
    cout << __func__ << endl;

    return displayAll(rear->next);
}

int list::displayAll(node* head) {
    return displayAll(head, 0);
}
int list::displayAll(node* head, int count) {
    if (!head)
        return count;

    if (head == rear) {
        cout << head->data << endl;
        return ++count;
    }

    cout << head->data << " ";

    return displayAll(head->next, ++count);
}

//Write a function to display the list in reverse order. Return the number of nodes.
int list::displayReverse() {
    cout << __func__ << endl;
    return displayReverse(rear->next);
}
int list::displayReverse(node* head) {
    int count = 0;
    return displayReverse(head, count);
}
int list::displayReverse(node* head, int &count) {
    if (!head)
        return 0;

    if (head == rear) {
        cout << head->data << " ";
        return ++count;
    }

    displayReverse(head->next, ++count);

    cout << head->data << " ";

    return count;
}
