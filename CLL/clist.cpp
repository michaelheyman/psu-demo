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

//Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
int list::displayEveryOther() { 
    cout << __func__ << endl;
    return displayEveryOther(rear->next);
}
int list::displayEveryOther(node* head) { 
    if (!head)
        return 0;

    return displayEveryOther(head, 0, 0);
}
int list::displayEveryOther(node* head, int count, int displayed) { 
    if (!head)
        return count - displayed;

    if (head == rear) {
        if (count % 2 == 0) {
            cout << head->data << " ";
            displayed++;
        }
        return ++count - displayed;
    }

    if (count % 2 == 0) {
        cout << head->data << " ";
        displayed++;
    }

    return displayEveryOther(head->next, ++count, displayed);
}

//Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.
int list::addToEnd() {
    cout << __func__ << endl;
    return addToEnd(rear->next);
}
int list::addToEnd(node*& head) {
    if (!head)
        return 0;

    return addToEnd(head, 0, 0, 0);
}
int list::addToEnd(node*& head, int index, int sum, int total) {
    if (!head)
        return total;

    if (head == rear) {
        total += head->data;
        node * newNode = new node;
        newNode->data = sum;
        newNode->next = rear->next;
        rear->next = newNode;
        rear = newNode;

        return total + sum;
    }

    if (index == 0 || index == 1)
        sum += head->data;

    total += head->data;

    return addToEnd(head->next, ++index, sum, total);
}

//Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list.
int list::addAfter2(int toAdd) {
    cout << __func__ << endl;
    return addAfter2(rear->next, toAdd);
}
int list::addAfter2(node*& head, int toAdd) {
    if (!head)
        return 0;

    return addAfter2(head, rear, toAdd, 0);
}
int list::addAfter2(node*& head, node* prev, int toAdd, int added) {
    if (!head)
        return added;

    if (head == rear) {
        if (head->data == 2) {
            node * newNode = new node;
            newNode->data = toAdd;
            newNode->next = head->next;
            head->next = newNode;
            rear = newNode;
            added++;
        }

        return added;
    }

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head->next;
        head->next = newNode;

        return addAfter2(newNode->next, newNode, toAdd, ++added);
    }

    return addAfter2(head->next, head, toAdd, added);
}

//Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.
int list::addBefore2(int toAdd) {
    cout << __func__ << endl;
    return addBefore2(rear->next, toAdd);
}
int list::addBefore2(node*& head, int toAdd) {
    if (!head)
        return 0;

    return addBefore2(head, rear, toAdd, 0);
}
int list::addBefore2(node*& head, node* prev, int toAdd, int added) {
    if (!head)
        return added;

    if (head == rear) {
        if (head->data == 2) {
            node * newNode = new node;
            newNode->data = toAdd;
            newNode->next = head;
            prev->next = newNode;;
            added++;
        }

        return added;
    }

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head;
        prev->next = newNode;;

        return addBefore2(head->next->next, head->next, toAdd, ++added);
    }
    
    return addBefore2(head->next, head, toAdd, added);
}
