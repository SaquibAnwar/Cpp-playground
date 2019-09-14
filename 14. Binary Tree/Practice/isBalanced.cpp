// is Balanced
// Send Feedback
// Given a binary tree, check if its balanced i.e. depth of left and right subtrees of every node differ by at max 1. Return true if given binary tree is balanced, false otherwise.
// Input format :

// Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

// Sample Input 1 :
// 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
// Sample Output 1 :
// false
// Sample Input 2 :
// 1 2 3 -1 -1 -1 -1
// Sample Output 2 :
// true

#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
// #include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

class Pair{

    public:
        int height;
        bool isBalanced;
};

Pair isBalancedHelper(BinaryTreeNode<int>* root){
    Pair p;
    if(root == NULL){
        p.height = 0;
        p.isBalanced = true;
        return p;
    }

    Pair left = isBalancedHelper(root->left);
    Pair right = isBalancedHelper(root->right);

    p.height = max(left.height, right.height)+1;
    if(left.isBalanced && right.isBalanced){
        Pair left = isBalancedHelper(root->left);
        Pair right = isBalancedHelper(root->right);

        p.height = max(left.height, right.height)+1;
        if(abs(left.height-right.height) >= -1 && abs(left.height-right.height) <= 1){
            p.isBalanced = true;
        }
        else{
            p.isBalanced = false;
        }
    }
    else{
        p.isBalanced = false;
    }
    return p;
}


bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
    Pair ans = isBalancedHelper(root);
    if(ans.isBalanced)
        return true;
    else{
        return false;
    }
}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    if(isBalanced(root))
    	cout << "true" << endl;
    else
	cout << "false" << endl;
}
