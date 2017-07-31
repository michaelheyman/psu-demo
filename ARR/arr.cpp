#include "arr.h"

//Write a function to display each table. Return the number of nodes.
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

//Write a function to display each table in reverse order starting with the last list. Return the number of nodes.
int table::displayReverse() {
    cout << __func__ << endl;
    return displayReverse(head);
}
int table::displayReverse(node* head) {
    if (!head)
        return 0;

    int count = 1 + displayReverse(head->next);
    cout << head->data << " ";

    return count;
}
int table::displayReverse(node** head) {
    if (!head)
        return 0;

    if (*head == this->head[size])
        return 0;

    int count = displayReverse(*head);
    cout << endl;

    return count + displayReverse(++head);
}

//Write a function to display every node in each list that is divisible by the argument passed in. Return number of nodes displayed.
int table::displayDivisible(int toDisplay) {
    cout << __func__ << endl;
    return displayDivisible(head, toDisplay);
}
int table::displayDivisible(node* head, int toDisplay) {
    if (!head)
        return 0;

    if (head->data % 2 == 0) {
        cout << head->data << " ";
        return 1 + displayDivisible(head->next, toDisplay);
    }

    return displayDivisible(head->next, toDisplay);
}
int table::displayDivisible(node** head, int toDisplay) {
    if (!head)
        return 0;

    if (*head == this->head[size])
        return 0;

    int count = displayDivisible(*head, toDisplay);
    cout << endl;

    return count + displayDivisible(++head, toDisplay);
}
