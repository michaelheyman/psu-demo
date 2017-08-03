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
