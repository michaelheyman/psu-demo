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

//Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
int list::displayEveryOther() {
    cout << __func__ << endl;
    return displayEveryOther(rear->next);
}
int list::displayEveryOther(node* head) {
    if (!head)
        return 0;
    if (head == this->rear) {
        cout << head->data << " ";
        return 0;
    }

    cout << head->data << " ";
    if (head->next) {
        if (head->next == this->rear)
            return 1;
        else
            return 1 + displayEveryOther(head->next->next);
    }

    return 1 + displayEveryOther(head->next);
}
