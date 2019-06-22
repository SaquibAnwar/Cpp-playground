#include<iostream>
#include<queue>
#include"treeNode.h"

using namespace std;

TreeNode<int>* TakeInputLevelWise(){
    int rootData;
    cout << "Enter root data : " << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter no. of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout << "Enter " << i << "th child of " << front -> data << " : ";
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

TreeNode<int>* TakeInput(){
    int rootData;
    cout << "Enter Data : ";
    cin>> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    cout << endl;
    int n;
    cout << " Enter No. of children of " << rootData << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        TreeNode<int>* child = TakeInput();
        root -> children.push_back(child);
    }
    return root;
}

void printTreeLevelWise(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0){}
    {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << front -> data << " : ";
        for(int i = 0; i < front -> children.size(); i++){
            cout << front -> children[i] -> data;
            if(i < root -> children.size() - 1){
                cout << ", ";
            }
            pendingNodes.push(front -> children[i]);
        }
        cout << endl;
    }
}


void printTree(TreeNode<int>* root){

    if(root == NULL){
        return;
    }

    cout << root -> data << " : ";

    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] -> data;;
        if(i < root -> children.size() - 1){
            cout << ", ";
        }
    }
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++){
        printTree(root -> children[i]);
    }
}


// For deleting the tree
// void deleteTree(TreeNode<int>* root){
//     for(int i = 0; i < root -> children.size(); i++){
//         deleteTree(root -> children[i]);
//     }
//     delete root;
// }

// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root -> children.push_back(node1);
    // root -> children.push_back(node2);
    TreeNode<int>* root = TakeInputLevelWise();
    printTree(root);
    //TODO delete the tree
    //deleteTree(root);
}