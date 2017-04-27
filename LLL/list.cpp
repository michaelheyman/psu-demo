#include "list.h"

//Write a function to display the list. Return the number of nodes.   

int list::displayAll() {
    return displayAll(head);
}

int list::displayAll(node* head) {
    return displayAllHelper(head, 0);
}

int list::displayAllHelper(node* head, int count) {
    if (!head) {
        cout << endl;
        return count;
    }

    cout << head->data << " ";
    return displayAllHelper(head->next, ++count);
}

 //Write a function to display the list in reverse order. Return the number of nodes.  
int list::displayReverse() {
    return displayReverse(head);
}

int list::displayReverse(node* head) {
    int count = 0; // displayReverseHelper required an actual variable to be passed in
    return displayReverseHelper(head, count);
}

int list::displayReverseHelper(node* head, int &count) {
    if (!head) {
        return count;
    }

    displayReverseHelper(head->next, ++count);
    cout << head->data << " ";

    return count;
}


// Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.   
int list::displayDivisible(int toDisplay) {
    return displayDivisible(head, toDisplay);
}

int list::displayDivisible(node* head, int toDisplay) {
    return displayDivisibleHelper(head, toDisplay, 0);
}

int list::displayDivisibleHelper(node* head, int toDisplay, int count) {
    if (!head)
        return count;

    if (head->data % toDisplay == 0) {
        cout << head->data << " ";
        count++;
    }

    return displayDivisibleHelper(head->next, toDisplay, count);
}
