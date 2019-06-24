// Check if a Binary Tree is BST
// Send Feedback
// Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree) or not. If yes, return true, return false otherwise.
// Duplicate elements should be in right subtree.
// Input format :
// Line 1 : Nodes in level order form (separated by space). If any node does not have left or right child, take -1 in its place
// Output format :
// true or false
// Constraints :
// 1 <= N <= 10^5
// Sample Input 1 :
// 3 1 5 -1 2 -1 -1 -1 -1
// Sample Output 1 :
// true
// Sample Input 2 :
// 5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
// Sample Output 2 :
// false

#include <iostream>
#include <limits.h>
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
    ~BinaryTreeNode() {
    	if(left) 
       		delete left;
    	if(right) 
       		delete right;
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

int minimum(BinaryTreeNode<int>* root){
    if(root == NULL){
        return INT_MAX;
    }
    return min(root -> data, min(minimum(root -> left), minimum(root -> right)));
}

int maximum(BinaryTreeNode<int>* root){
    if(root == NULL){
        return INT_MIN;
    }

    return max(root -> data, max(maximum(root -> left), maximum(root -> right)));
}

bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
    if(root == NULL){
        return true;
    }

    int leftMax = maximum(root -> left);
    int rightMin = minimum(root -> right);
    bool output = ((root -> data > leftMax) && (root -> data <= rightMin) && isBST(root -> left) && isBST(root -> right));
    return output;

}

class IsBSTReturn{
    public: 
        bool isBST;
        int minimum;
        int maximum;
};

IsBSTReturn isBST2(BinaryTreeNode<int> * root){
    if(root == NULL){
        IsBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    IsBSTReturn leftOutput = isBST2(root -> left);       
    IsBSTReturn rightOutput = isBST2(root -> right); 
    int minimum = min(root -> data, min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root -> data, max(leftOutput.maximum, rightOutput.maximum));
    bool isBSTFinal = ((root -> data > leftOutput.maximum) && (root -> data <= rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST);
    IsBSTReturn output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.isBST = isBSTFinal;
    return output;      
}

bool isBST3(BinaryTreeNode<int> * root, int min = INT_MIN, int max = INT_MAX){
    if(root == NULL){
        return true;
    }

    if(root -> data < min || root -> data > max)
        return false;

    bool isLeftOK = isBST3(root -> left, min, root->data -1);
    bool isRightOK = isBST3(root -> right, root->data, max);
    return isLeftOK && isRightOK;
}

// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1

int main() {
    BinaryTreeNode<int>* root = takeInput();
    if(isBST3(root)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    delete root;
}
