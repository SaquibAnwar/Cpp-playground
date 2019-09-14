// ZigZag tree
// Send Feedback
// Given a binary tree, print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even level right to left.
// Input format :

// Elements in level order form (separated by space)

// (If any node does not have left or right child, take -1 in its place)

// Output Format :

// Elements are printed level wise, each level in new line (separated by space).

// Sample Input :
// 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
// Sample Output :
// 5
// 10 6
// 2 3
// 9

#include <iostream>
#include <queue>
#include <stack>

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

void zigZagOrder(BinaryTreeNode<int> *root);

int main() {
    BinaryTreeNode<int>* root = takeInput();
    zigZagOrder(root);
}

void zigZagOrder(BinaryTreeNode<int> *root) {
        stack<BinaryTreeNode<int>*> s1;
		stack<BinaryTreeNode<int>*> s2;
		s1.push(root);
		int currentLevelRemaining = 1;
		int nextLevelCount = 0;
		bool flag = true;
		while(!s1.empty() || !s2.empty()) {
			if(flag) {
				BinaryTreeNode<int> *top = s1.top();
				s1.pop();
				cout << top -> data << " ";
				currentLevelRemaining--;
				if(top -> left != NULL) {
					s2.push(top -> left);
					nextLevelCount++;
				}
				if(top -> right != NULL) {
					s2.push(top -> right);
					nextLevelCount++;
				}
				if(currentLevelRemaining == 0) {
					cout << endl;
					currentLevelRemaining = nextLevelCount;
					nextLevelCount = 0;
					flag = false;
				}
			}
			else {
				BinaryTreeNode<int> *top = s2.top();
				s2.pop();
				cout << top -> data << " ";
				currentLevelRemaining--;
				if(top -> right != NULL) {
					s1.push(top -> right);
					nextLevelCount++;
				}
				if(top -> left != NULL) {
					s1.push(top -> left);
					nextLevelCount++;
				}
				if(currentLevelRemaining == 0) {
					cout << endl;
					currentLevelRemaining = nextLevelCount;
					nextLevelCount = 0;
					flag = true;
				}
			}
		}
}
