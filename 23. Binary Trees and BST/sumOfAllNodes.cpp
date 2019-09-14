// Sum of all nodes
// Send Feedback
// Given a binary tree, find and return the sum of all nodes.
// Input format :

// Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

// Sample Input :
// 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
// Sample Output :
// 35


#include"tree.h"

int sum(node* root){
    if(root == NULL){
        return 0;
    }

    return root->data + sum(root->left) + sum(root->right);
}


int main(){
    node* root = buildTreeLevelWise();
    cout << endl;
    cout << sum(root) << endl;
}