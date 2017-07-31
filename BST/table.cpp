#include "table.h"
#include <queue>

bool table::run = 0;

void table::displayBFS() {
    cout << __func__ << endl;
    if (run)
        cout << "The resulting tree after your function ran is:" << endl;

    run++;

    if (!root)
        return;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl << endl;

    queue<node*> q;
    queue<int> levelQueue;
    q.push(root);
    int level = 1;
    levelQueue.push(level);

    while (!q.empty()) {
        node * curr = q.front();
        level = levelQueue.front();
        levelQueue.pop();
        q.pop();
        cout << "Level " << level << ": " << curr->data << '\n';
        level++;

        if (curr->left) {
            q.push(curr->left);
            levelQueue.push(level);
        }
        if (curr->right) {
            q.push(curr->right);
            levelQueue.push(level);
        }
    }
    cout << endl << endl;
}
void table::inorder(node * root) {
    if (!root)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    return;
}

//Write a function to display the tree in order. Return the number of nodes.
int table::displayAll() {
    cout << __func__ << endl;
    return displayAll(root);
}
int table::displayAll(node* root) {
    if (!root)
        return 0;

    int count = 0;
    count += 1 + displayAll(root->left);
    cout << root->data << " ";
    count += displayAll(root->right);

    return count;
}
//Write a function to display the tree in reverse order. Return the number of nodes.
int table::displayReverse() {
    cout << __func__ << endl;
    return displayReverse(root);
}
int table::displayReverse(node* root) {
    if (!root)
        return 0;

    displayReverse(root->right);
    cout << root->data << " ";
    displayReverse(root->left);

    return 0;
}

//Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
int table::displayDivisible(int toDisplay) {
    cout << __func__ << endl;
    return displayDivisible(root, toDisplay);
}
int table::displayDivisible(node* root, int toDisplay) {
    if (!root)
        return 0;

    if (root->data % toDisplay  == 0)
        cout << root->data << " ";

    return 1 + displayDivisible(root->left, toDisplay) + displayDivisible(root->right, toDisplay);
}

//Write a function to add the data passed in to the function to the tree.
int table::insertData(int toAdd) {
    cout << __func__ << endl;
    return insert(root, toAdd);
}
int table::insertData(node*& root, int toAdd) {
    if (!root)
        return 0;

    if (toAdd < root->data)
        return insertData(root->left, toAdd);

    return insertData(root->right, toAdd);
}

int table::insert(node*& root, int toAdd) {
    if (!root) {
        root = new node;
        root->data = toAdd;
        root->left = NULL;
        root->right = NULL;
        return 1;
    }

    if (root->data < toAdd)
        return insert(root->right, toAdd);
    else
        return insert(root->left, toAdd);
}

//Make a copy of a BST
int table::copy(table &destination) {
    cout << __func__ << endl;
    return copy(root, destination.root);
}
int table::copy(node *& destination) {
    cout << __func__ << endl;
    return copy(root, destination);
}
int table::copy(node *& source, node *& destination) {
    if (!source)
        return 0;

    destination = new node;
    destination->data = source->data;

    return 1 + copy(source->left, destination->left) + copy(source->right, destination->right);
}
