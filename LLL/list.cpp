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
int list::addAfter2(int toAdd) {
    cout << __func__ << endl;
    return addAfter2(head, toAdd);
}
int list::addAfter2(node*& head, int toAdd) {
    if (!head)
        return 0;

    if (head == tail && tail->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = tail->next;
        tail->next = newNode;
        tail = tail->next;

        return 1;
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

//Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.
int list::addBefore2(int toAdd) {
    cout << __func__ << endl;
    return addBefore2(head, toAdd);
}
int list::addBefore2(node*& head, int toAdd) {
    if (!head)
        return 0;
    if (head == tail) {
        if (tail->data == 2) {
            node * newNode = new node;
            newNode->data = toAdd;
            head->next = newNode;
            tail = newNode;
            return 1;
        }

        return 0;
    }

    if (head == this->head && head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head;
        head = newNode;

        return 1 + addBefore2(head->next->next, toAdd);
    }

    if (head->next->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head->next;
        head->next = newNode;

        return 1 + addBefore2(newNode->next->next, toAdd);
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
        
    if (head->data % 3 == 0 || head->data % 5 == 0)
        return modifyAfter(head->next, head->data);

    return 1 + modifyAfter(head->next);
}
int list::modifyAfter(node* head, int toAdd) {
    if (!head)
        return 0;

    head->data += toAdd;

    return modifyAfter(head->next, toAdd);
}

//Write a function to reverse the List. Return number of nodes in the list.
int list::reverseAll() {
    cout << __func__ << endl;
    return reverseAll(head);
}
int list::reverseAll(node*& head) {
    if (!head)
        return 0;
    return reverseAll(head, NULL);
}
int list::reverseAll(node*& head, node * prev) {
    if (!head) {
        node * swap = this->head;
        this->head = this->tail;
        this->tail = swap;
        return 0;
    }
    
    node * next = head->next;
    head->next = prev;

    return 1 + reverseAll(next, head);
}

//Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data
int list::appendIfDivisible(int toAdd) {
    cout << __func__ << endl;
    return appendIfDivisible(head->next, toAdd);
}
int list::appendIfDivisible(node*& head, int toAdd) {
    if (!head)
        return 0;

    if (head->data % this->head->data == 0) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
        
        return 1 + appendIfDivisible(head->next, toAdd);
    }

    return appendIfDivisible(head->next, toAdd);
}

//Write a function that returns the average of the unique items in the list.
float list::averageSpecial() {
    cout << __func__ << endl;
    return averageSpecial(head);
}
float list::averageSpecial(node* head) {
    int sum = 0;
    return averageSpecial(head, sum) / sum;
}
float list::averageSpecial(node* head, int &count) {
    if (!head)
        return 0;

    if (isUnique(head, this->head))
        return head->data + averageSpecial(head->next, ++count);

    return averageSpecial(head->next, count);
}
bool list::isUnique(node * head, node * curr){ 
    if (!curr)
        return true;
    if (curr == head)
        return isUnique(head, curr->next);
    if (curr->data == head->data)
        return false;

    return isUnique(head, curr->next);
}

//Write a function that reverses every 3 nodes in a list, any remainders at the end of the list should be left as they are. Return the number of swapped nodes
int list::swap3() {
    cout << __func__ << endl;
    return swap3(head);
}
int list::swap3(node*& head) {
    return swap3(head, NULL);
}
int list::swap3(node*& head, node* prev) {
    if (!head)
        return 0;
    if (!head->next)
        return 0;
    if (!head->next->next)
        return 0;

    node * first = head;
    node * second = head->next;
    node * third = head->next->next;

    second->next = first;
    first->next = third->next;
    third->next = second;

    if (prev)
        prev->next = third;

    if (first == this->head)
        this->head = third;

    if (third == this->tail)
        this->tail = first;

    return 3 + swap3(first->next, first);
}

//---------------------------------------------------------------------------


//Write a recursive function in C++ to remove all nodes with even data.
int list::removeEven() {
    cout << __func__ << endl;
    return removeEven(head, NULL);
}
int list::removeEven(node *& head, node * prev) {
    if (!head)
        return 0;

    if (head->data % 2 == 0) {
        if (head == this->head && head == this->tail) { //list with one element
            delete head;
            this->head = NULL;
            this->tail = NULL;
            
            return 1;
        }
        if (head == this->head) {   //deleting head
            node * temp = head;
            this->head = head->next;
            delete temp;
            
            return 1 + removeEven(this->head, prev);
        }
        if (head == this->tail) {   //deleting tail
            delete head;
            prev->next = NULL;
            this->tail = prev;

            return 1;
        }
        else {                      //deleting middle
            node * temp = head;
            prev->next = head->next;
            delete temp;

            return 1 + removeEven(prev->next, prev);
        }
    }

    return removeEven(head->next, head);
}
