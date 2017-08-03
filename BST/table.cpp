#include "table.h"

//Write a function to display the tree in order. Return the number of nodes.
int table::displayAll() {
    cout << __func__ << endl;
    return displayAll(root);
}
int table::displayAll(node* root) {
    if (!root)
        return 0;

    int count = 0;

    count += displayAll(root->left);
    cout << root->data << " ";
    count += 1 + displayAll(root->right);

    return count;
}
