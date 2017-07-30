#include "list.h"

//Write a function to display the list. Return the number of nodes.   
int list::displayAll() {
    cout << __func__ << endl;
    return displayAll(head);
}
int list::displayAll(node* head) {
    return displayAllHelper(head, 0);
}
int list::displayAllHelper(node* head, int count) {
    if (!head)
        return count;

    cout << head->data << " ";
    return displayAllHelper(head->next, ++count);
}

 //Write a function to display the list in reverse order. Return the number of nodes.  
int list::displayReverse() {
    cout << __func__ << endl;
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
    cout << __func__ << endl;
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
    cout << __func__ << endl;
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
    cout << __func__ << endl;
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
    cout << __func__ << endl;
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

        if (head == tail) {
            tail = newNode;
        }
    }

    return addAfter2Helper(head->next, toAdd, added);
}

//Write a function to add the data passed in to the function before every instance of a 2 in the list. Return the number of nodes that were added to the list.    
int list::addBefore2(int toAdd) {
    cout << __func__ << endl;
    return addBefore2(head, toAdd);
}
int list::addBefore2(node* head, int toAdd) {
    node * prev = NULL;
    return addBefore2Helper(head, prev, toAdd, 0);
}
int list::addBefore2Helper(node* head, node* prev,  int toAdd, int added) {
    if (!head)
        return added;

    cout << head->data << " ";

    if (head->data == 2) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = head;
        
        if (prev != NULL) {
            prev->next = newNode;
        }
        else {
            head = newNode; //TODO: this is not changing the actual head, maybe pass by ptr reference?
        }

        added++;

        //return addBefore2Helper(head->next, head, toAdd, added);
    }

    return addBefore2Helper(head->next, head, toAdd, added);
}

//Write a function to add the data of the first node that is divisible by three or five to every following node in the list. Return number of nodes that occur before one is divisible by three or five.  
int list::modifyAfter() {
    return modifyAfter(head);
}
int list::modifyAfter(node* head) {
    cout << __func__ << endl;
    int count = 0;
    int data = 0;
    return modifyAfter(head, false, count, data);
}
int list::modifyAfter(node * head, bool found, int count, int data) {
    if (!head)
        return count;

    if (!found && ((head->data % 5 == 0) || (head->data % 3 == 0))) {
        found = true;
        data = head->data;
    }
    else if (!found) {
        count++;
    }
    else if (found) {
        head->data += data;
    }
    
    return modifyAfter(head->next, found, count, data);
}

//Write a function to reverse the List. Return number of nodes in the list.   
int list::reverseAll() {
    cout << __func__ << endl;
    return reverseAll(head);
}
int list::reverseAll(node*& head) {
    int count = 0;
    node * prev = NULL;
    return reverseAll(head, head, prev, count);
}
int list::reverseAll(node*& head, node * curr, node* prev, int &count) {
    if (!curr)
        return count;

    if (!curr->next && curr != head) {
        head = curr;
    }

    node * next = curr->next;
    curr->next = prev;
    prev = curr;

    return reverseAll(head, next, curr, ++count);
    //TODO: the reversed list's last item is incorrect
}

//Write a function to add a node that contains the data passed into the function at the end of the list for each node that is divisible by the first node's data
//NOTE: this function ignores the data if it equals toAdd
int list::appendIfDivisible(int toAdd) {
    return appendIfDivisible(head, toAdd);
}
int list::appendIfDivisible(node*& head, int toAdd) {
    node * prev = NULL;
    return appendIfDivisible(head, head, prev, toAdd, 0);
}
int list::appendIfDivisible(node*& head, node * curr, node * prev, int toAdd, int count) {
    if (!curr)
        return count;

    if (curr->data % head->data == 0 && curr->data != toAdd) {
        node * newNode = new node;
        newNode->data = toAdd;
        newNode->next = NULL;
        
        tail->next = newNode;
        tail = newNode;

        count++;
    }

    return appendIfDivisible(head, curr->next, curr, toAdd, count);
}

//Write a function that returns the average of the unique items in the list.  
float list::averageSpecial() {
    return averageSpecial(head);
}
float list::averageSpecial(node* head) {
    return averageSpecial(head, 0, 0);
}
float list::averageSpecial(node* head, float sum, float count) {
    if (!head)
        return sum / count;
    
    if (isUnique(head, head->next)) {
        count++;
        sum += head->data;
    }

    return averageSpecial(head->next, sum, count);
}
bool list::isUnique(node *& head, node * curr) {
    if (curr == head)
        return true;

    if (!curr)
        return isUnique(head, this->head);

    if (curr->data == head->data)
        return false;

    return isUnique(head, curr->next);
}

//Write a function that takes 2 lists and creates a new list where the nth node is the average of the nth items in the two input lists. Return the average of the new list.   
float list::copySpecialAvg(list*& source1, list*& source2, list*& dest) {
    return copySpecialAvg(source1->head, source2->head, dest->head);
}
float list::copySpecialAvg(node*& source1, node*& source2, node*& dest) {
    return copySpecialAvg(source1, source2, dest, 0, 0);
}
float list::copySpecialAvg(node*& source1, node*& source2, node*& dest, int sum, int count) {
    if (!source1 || !source2)
        return sum / count;

    dest = new node;
    dest->data = (source1->data + source2->data) / 2;
    dest->next = NULL;
    sum += dest->data;

    return copySpecialAvg(source1->next, source2->next, dest->next, sum, ++count);
}

//Write a function that reverses every 3 nodes in a list, any remainders at the end of the list should be left as they are. Return the number of swapped nodes
//TODO: not finished
int list::swap3(node*& head) {
    if (!head->next)
        return 0;

    node * third = NULL;

    return swap3(head, head->next, third, 0);
}
int list::swap3(node*& first, node*& second, node*& third, int count) {
    if (!second)
        return count;
    
    if (second->next)
        return swap3(first, second, second->next, count);

    first->next = third->next;
    second->next = first;
    third->next = second;

    return 0;
}

//Remove all noces except the first and the last node
int list::removeExceptFirstLast() {
    cout << __func__ << endl;
    if (!head)
        return 0;
    return removeExceptFirstLast(head->next, tail);
}
int list::removeExceptFirstLast(node *& head, node *& tail) {
    if (!head)
        return 0;
    if (head == tail)
        return 0;

    node * temp = head;
    head = head->next;
    delete temp;

    return 1 + removeExceptFirstLast(head, tail);
}

//Remove all noces except the first and the last two nodes
int list::removeExceptLastTwo() {
    cout << __func__ << endl;
    return removeExceptLastTwo(head, tail);
}
int list::removeExceptLastTwo(node *& head, node *& tail) {
    if (!head)
        return 0;
    if (head->next == tail)
        return 0;
    if (head == tail)
        return 0;

    node * temp = head;
    head = head->next;
    delete temp;

    return 1 + removeExceptLastTwo(head, tail);
}

//Remove all nodes with even data
int list::removeEven() {
    cout << __func__ << endl;
    return removeEven(head, tail);
}
int list::removeEven(node *& head, node *& tail) {
    if (!head)
       return 0;
    if (head->next == tail && tail->data % 2 == 0) {
        head->next = NULL;
        delete tail;
        tail = head;

        return 1;
    }

    if (head->data % 2 == 0) {
        node * temp = head;

        //cout << endl << "removing " << head->data << endl;
        head = head->next;
        delete temp;

        //displayAll();
        //cout << endl;
        //cout << "tail->data: " << tail->data << endl;

        return 1 + removeEven(head, tail);
    }

    return removeEven(head->next, tail);
}

//Compute the average of all data
int list::average() {
    cout << __func__ << endl;
    return average(head, 0, 0);
}
int list::average(node * head, int sum, int count) {
    if (!head)
        return sum / count;

    sum += head->data;
    count++;

    return average(head->next, sum, count);
}

//Add a node to the end but only if it doesn't already exist in the list
int list::addIfUnique(int toAdd) {
    cout << __func__ << endl;
    return addIfUnique(head, toAdd);
}
int list::addIfUnique(node * head, int toAdd) {
    if (head == tail && head->data != toAdd) {
        node * newNode = new node;
        newNode = new node;
        newNode->data = toAdd;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;

        return 1;
    }

    if (head->data == toAdd)
        return 0;

    return addIfUnique(head->next, toAdd);
}
