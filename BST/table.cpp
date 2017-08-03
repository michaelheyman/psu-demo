#include "table.h"

//Write a function to display the tree in order. Return the number of nodes.
int table::displayAll() {
    cout << __func__ << endl;
    return displayAll(root);
}
int table::displayAll(node* root) {
    if (!root)
        return 0;

    int count = 1;
    count += displayAll(root->left);
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

    int count = 1;
    count += displayReverse(root->right);
    cout << root->data << " ";
    count += displayReverse(root->left);

    return count;
}

//Write a function to display every node that is divisible by the argument passed in. Return number of nodes displayed.
int table::displayDivisible(int toDisplay) {
    cout << __func__ << endl;
    return displayDivisible(root, toDisplay);
}
int table::displayDivisible(node* root, int toDisplay) {
    if (!root)
        return 0;

    if (root->data % 2 == 0) {
        cout << root->data << " ";
        return 1 + displayDivisible(root->left, toDisplay) + displayDivisible(root->right, toDisplay);
    }

    return displayDivisible(root->left, toDisplay) + displayDivisible(root->right, toDisplay);
}

//Write a function to add the data passed in to the function to the tree.
int table::insertData(int toAdd) {
    cout << __func__ << endl;
    return insertData(root, toAdd);
}
int table::insertData(node*& root, int toAdd) {
    if (!root) {
        root = new node;
        root->data = toAdd;

        return 0;
    }

    if (toAdd < root->data)
        return 1 + insertData(root->left, toAdd);
    else
        return 1 + insertData(root->right, toAdd);
}
