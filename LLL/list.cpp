#include "list.h"

//Write a function to display the list. Return the number of nodes.   

void list::test() {
    cout << "\nUser-defined function calls:\n\n";

    cout << "displayAll():" << endl;
    cout << "This list has " << this->displayAll() << " items.\n\n";

    cout << "displayReverse():" << endl;
    cout << "\nThis list has " << this->displayReverse() << " items.\n\n";

    cout << "displayDivisible(2):" << endl;
    cout << "\nThis list has " << this->displayDivisible(2) << " items.\n\n";
    
    cout << "displayEveryOther():" << endl;
    cout << "\nThis list hid " << this->displayEveryOther() << " items.\n\n";

    cout << "addToEnd():" << endl;
    cout << "This list has a sum of " << this->addToEnd() << " items.\n\n";
    
    cout << "addAfter2(300):" << endl;
    cout << "This function added " << this->addAfter2(300) << " nodes to the list.\n\n";

    cout << "addBefore2(500):" << endl;
    cout << "This function removed " << this->addBefore2(500) << " nodes to the list.\n\n";
}

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

//Write a function to display every other Node in the list. Return the number of nodes that are not displayed.
int list::displayEveryOther() {
    return displayEveryOther(head);
}
int list::displayEveryOther(node* head) {
    int count = 0;
    int displayed = 0;
    return displayEveryOtherHelper(head, count, displayed);
}
int list::displayEveryOtherHelper(node* head, int &count, int &displayed) {
    if (!head)
        return count - displayed;

    if (count % 2 == 0) {
        cout << head->data << " ";
        displayed++;
    }

    return displayEveryOtherHelper(head->next, ++count, displayed);
}

//Write a function to add the sum of the data from the first two nodes to the end of the list. Return the sum of the list.    
int list::addToEnd() {
    return addToEnd(head);
}
int list::addToEnd(node*& head) {
    int index = 0;
    int sum = 0;
    int total = 0;
    return addToEndHelper(head, index, sum, total);
}
int list::addToEndHelper(node*& head, int &index, int &sum, int &total) {
    if (!head)
        return total;

    if (!head->next) {
        head->data += sum;
        //return total;
    }

    if (index == 0 || index == 1)
        sum += head->data;

    total += head->data;

    return addToEndHelper(head->next, ++index, sum, total);
}

//Write a function to add the data passed in to the function after every instance of a 2 in the list. Return the number of nodes that were added to the list. 
int list::addAfter2(int toAdd) {
    return addAfter2(head, toAdd);
}
int list::addAfter2(node*& head, int toAdd) {
    return addAfter2Helper(head, toAdd, 0);
}
int list::addAfter2Helper(node*& head, int toAdd, int added) {
    if (!head)
        return added;

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head->next;
        head->next = newNode;
        added++;
    }

    return addAfter2Helper(head->next, toAdd, added);
}

//Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.    
int list::addBefore2(int toAdd) {
    return addBefore2(head, toAdd);
}
int list::addBefore2(node*& head, int toAdd) {
    return addBefore2Helper(head, toAdd, 0);
}
int list::addBefore2Helper(node*& head, int toAdd, int added) {
    if (!head)
        return added;

    if (head->next) {
        if (head->next->data == 2) {
            node * newNode = new node;
            newNode->data = toAdd;
            newNode->next = head->next;
            head->next = newNode;
            added++;
            return addBefore2Helper(newNode->next, toAdd, added);
        }
    }

    return addBefore2Helper(head->next, toAdd, added);

    //rework this method, and keep track of previous node to handle the case where
    //the head is 2
}
