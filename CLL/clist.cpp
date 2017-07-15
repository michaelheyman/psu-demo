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

//Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
int list::displayDivisible(int toDisplay) {
    cout << __func__ << endl;
    return displayDivisible(rear->next, toDisplay);
}
int list::displayDivisible(node* head, int toDisplay) {
    if (!head)
        return 0;

    //int count = 0;
    return displayDivisible(rear->next, toDisplay, 0);
}
int list::displayDivisible(node* head, int toDisplay, int count) {
    if (!head)
        return count;

    if (head == rear) {
        if (head->data % toDisplay == 0) {
            cout << head->data << " ";
            count++;
        }
        return count;
    }


    if (head->data % toDisplay == 0) {
        cout << head->data << " ";
        count++;
    }

    return displayDivisible(head->next, toDisplay, count);
}
