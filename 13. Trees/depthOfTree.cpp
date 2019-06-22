#include <iostream>
#include <queue>
#include "treeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter Root Data" << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front -> data << " : ";
        int numChild;
        cin>>numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout << "Enter " << i << "th child of" << front -> data << endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}


void printTree(TreeNode<int>* root){

    if(root == NULL){
        return;
    }

    cout << root -> data << " : ";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] -> data <<", ";
    }
    cout << endl;

    for(int i = 0; i < root -> children.size(); i++){
        printTree(root -> children[i]);
    }
}

void printAtLevelK(TreeNode<int>* root, int k){
    if(root == NULL)
        return;

    if(k == 0){
        cout << root -> data << endl;
        return;
    }
    
    for(int i = 0; i < root -> children.size(); i++){
        printAtLevelK(root -> children[i], k-1);
    }
}

int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root -> children.push_back(node1);
    // root -> children.push_back(node2);

    TreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    cout << "Level 2: " << endl;
    printAtLevelK(root, 2);
    // TODO delete the tree;
}