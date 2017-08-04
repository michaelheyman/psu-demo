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

//Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.
int list::addToEnd() {
    cout << __func__ << endl;
    return addToEnd(rear->next);
}
int list::addToEnd(node*& head) {
    if (!head)
        return 0;

    if (head == this->rear) {
        node * newNode = new node;
        newNode->data = this->rear->next->data;
        
        if (this->rear->next->next)
            newNode->data += this->rear->next->next->data;

        int rearData = this->rear->data;
        newNode->next = this->rear->next;
        this->rear->next = newNode;
        this->rear = newNode;

        return rearData + newNode->data;
    }
    
    return head->data + addToEnd(head->next);
}

//Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list.
int list::addAfter2(int toAdd) {
    cout << __func__ << endl;
    return addAfter2(rear->next, toAdd);
}
int list::addAfter2(node*& head, int toAdd) {
    if (!head)
        return 0;
    if (head == this->rear) {
        if (head->data == 2) {
            node * newNode = new node;
            newNode->data = toAdd;
            newNode->next = this->rear->next;
            this->rear->next = newNode;
            this->rear = newNode;

            return 1;
        }

        return 0;
    }

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head->next;
        head->next = newNode;

        return 1 + addAfter2(head->next, toAdd);
    }

    return addAfter2(head->next, toAdd);
}

//Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.
int list::addBefore2(int toAdd) {
    cout << __func__ << endl;
    return addBefore2(rear->next, toAdd);
}
int list::addBefore2(node*& head, int toAdd) {
    if (!head)
        return 0;
    if (head == this->rear)
        return 0;

    if (head == this->rear->next && head->data == 2) {  //this->head is a 2
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head;
        this->rear->next = newNode;
        head = newNode;

        return 1 + addBefore2(head->next->next, toAdd);
    }

    if (head->next->data == 2) {    //adding in middle or tail
        cout << "adding" << endl;
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head->next;
        head->next = newNode;

        if (newNode->next == this->rear)
            return 1;

        return 1 + addBefore2(newNode->next->next->next, toAdd);
    }
    
    return addBefore2(head->next, toAdd);
}
