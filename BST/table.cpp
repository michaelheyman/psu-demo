#include "table.h"
#include <queue>

void table::displayBFS() {
    cout << __func__ << endl;

    if (!root)
        return;

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
