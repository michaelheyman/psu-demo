#include "list.h"

//Write a function to display the list. Return the number of nodes.
int list::displayAll() {
    cout << __func__ << endl;
    return displayAll(head);
}
int list::displayAll(node* head) {
    if (!head)
        return 0;

    cout << head->data << " ";

    return 1 + displayAll(head->next);
}

//Write a function to display the list in reverse order. Return the number of nodes.
int list::displayReverse() {
    cout << __func__ << endl;
    return displayReverse(head);
}
int list::displayReverse(node* head) {
    if (!head)
        return 0;

    int count = 1 + displayReverse(head->next);
    cout << head->data << " ";

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

    if (head->data % 2 == 0) {
        cout << head->data << " ";
        return 1 + displayDivisible(head->next, toDisplay);
    }

    return displayDivisible(head->next, toDisplay);
}

//Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
int list::displayEveryOther() {
    cout << __func__ << endl;
    return displayEveryOther(head);
}
int list::displayEveryOther(node* head) {
    if (!head)
        return 0;

    return displayEveryOther(head, 0);
}
int list::displayEveryOther(node* head, int index) {
    if (!head)
        return 0;

    if (index % 2 == 0) {
        cout << head->data << " ";
        return displayEveryOther(head->next, ++index);
    }

    return 1 + displayEveryOther(head->next, ++index);
}

//Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.
int list::addToEnd() {
    cout << __func__ << endl;
    return addToEnd(head);
}
int list::addToEnd(node*& head) {
    if (!head)
        return 0;

    if (head->next == tail) {
        if (this->head) {
            node * newNode = new node;
            newNode->data = this->head->data;
            newNode->next = NULL;

            if (this->head->next)
                newNode->data += this->head->next->data;

            tail->next = newNode;
            tail = newNode;

            return head->data + head->next->data + newNode->data;
        }

        return 0;
    }

    return head->data + addToEnd(head->next);
}

//Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list.
//NOTE: not working for the case where the last two nodes are 2
int list::addAfter2(int toAdd) {
    cout << __func__ << endl;
    return addAfter2(head, toAdd);
}
int list::addAfter2(node*& head, int toAdd) {
    if (!head)
        return 0;

    if (head->next == tail && tail->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = tail->next;
        tail->next = newNode;
        tail = tail->next;

        return 0;
    }

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head->next;
        head->next = newNode;
        
        return 1 + addAfter2(head->next->next, toAdd);
    }

    return addAfter2(head->next, toAdd);
}
