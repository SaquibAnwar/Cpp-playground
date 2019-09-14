#include<bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int data;
    cin >> data;

    if(data == -1)
        return NULL;
    
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

node* buildTreeLevelWise(){
    cout << "Enter Data : ";
    int data;
    cin >> data;

    if(data == -1)
        return NULL;

    node* root = new node(data);

    queue<node*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        node* front = pendingNodes.front();
        pendingNodes.pop();
        
        cout << "Enter Left Child of " << root -> data << ": ";
        int leftChild;
        cin >> leftChild;
        if(leftChild != -1){
            node* child = new node(leftChild);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter Right Child of " << front -> data << ": ";
        int rightChild;
        cin >> rightChild;
        if(rightChild != -1){
            node* child = new node(rightChild);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}