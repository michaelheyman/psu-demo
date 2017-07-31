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

//Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.
int list::addToEnd() {
    cout << __func__ << endl;
    return addToEnd(head);
}
int list::addToEnd(node*& head) {
    if (!head)
        return 0;

    return addToEnd(head, 0, 0);
}
int list::addToEnd(node*& head, int index, int sum) {
    if (!head)
        return sum;

    if (index == 0)
        sum += head->data;

    if (index == 1) {
        sum += head->data;
        node * newNode = new node;
        newNode->data = sum;
        newNode->next = NULL;
        newNode->previous = tail;
        tail->next = newNode;
        tail = newNode;
        return sum;
        //NOTE: continue here
    }
    return addToEnd(head->next, ++index, sum);
}

//Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list.
int list::addAfter2(int toAdd) {
    cout << __func__ << endl;
    return addAfter2(head, toAdd);
}
int list::addAfter2(node*& head, int toAdd) {
    if (!head)
        return 0;

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head->next;
        newNode->previous = head;
        head->next = newNode;

        return 1 + addAfter2(newNode->next, toAdd);
    }

    return addAfter2(head->next, toAdd);
}

//Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.
int list::addBefore2(int toAdd) {
    cout << __func__ << endl;
    return addBefore2(head, toAdd);
}
int list::addBefore2(node*& head, int toAdd) {
    if (!head)
        return 0;

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = NULL;
        newNode->previous = NULL;


        if (!head->previous) {// we're at head
            newNode->next = head;
            head->previous = newNode;
            head = newNode;

            return 1 + addBefore2(newNode->next->next, toAdd);
        }
        else {
            newNode->previous = head->previous;
            newNode->next = head;
            head->previous->next = newNode;
            head->previous = newNode;

            return 1 + addBefore2(head->next, toAdd);
        }
    }

    return addBefore2(head->next, toAdd);
}

//Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five.
int list::modifyAfter() {
    cout << __func__ << endl;
    return modifyAfter(head);
}
int list::modifyAfter(node* head) {
    if (!head)
        return 0;

    if (head->data % 3 == 0 || head->data % 5 == 0) {
        return modifyAfter(head->next, head->data);
    }

    return 1 + modifyAfter(head->next);
}
int list::modifyAfter(node* head, int toAdd) {
    if (!head)
        return 0;

    head->data += toAdd;

    return modifyAfter(head->next, toAdd);
}
