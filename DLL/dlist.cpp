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

//Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
int list::displayDivisible(int toDisplay) {
    cout << __func__ << endl;
    return displayDivisible(head, toDisplay);
}
int list::displayDivisible(node* head, int toDisplay) {
    if (!head)
        return 0;

    return displayDivisible(head, toDisplay, 0);
}
int list::displayDivisible(node* head, int toDisplay, int count) {
    if (!head)
        return count;

    if (head->data % toDisplay == 0) {
        cout << head->data << " ";
        count++;
    }

    return displayDivisible(head->next, toDisplay, count);
}

//Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
int list::displayEveryOther() {
    cout << __func__ << endl;
    return displayEveryOther(head);
}
int list::displayEveryOther(node* head) {
    if (!head)
        return 0;

    return displayEveryOther(head, 0, 0);
}
int list::displayEveryOther(node* head, int count, int displayed) {
    if (!head)
        return count - displayed;

    if (count % 2 == 1) {
        cout << head->data << " ";
        displayed++;
    }

    return displayEveryOther(head->next, ++count, displayed);
}
