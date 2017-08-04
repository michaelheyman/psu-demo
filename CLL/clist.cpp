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

//Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
int list::displayDivisible(int toDisplay) {
    cout << __func__ << endl;
    return displayDivisible(rear->next, toDisplay);
}
int list::displayDivisible(node* head, int toDisplay) {
    if (!head)
        return 0;
    if (head == this->rear) {
        if (head->data % toDisplay == 0) {
            cout << head->data << " ";
            return 1;
        }

        return 0;
    }

    if (head->data % toDisplay == 0) {
        cout << head->data << " ";
        return 1 + displayDivisible(head->next, toDisplay);
    }

    return displayDivisible(head->next, toDisplay);
}
