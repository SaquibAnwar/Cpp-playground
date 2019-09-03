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

void printPreorder(node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(node* root){
    if(root == NULL){
        return;
    }

    printInorder(root->left);
    cout << root -> data << " ";
    printInorder(root->right);
}

void printPostorder(node* root){
    if(root == NULL){
        return;
    }

    printPostorder(root->left);
    printPostorder(root->right);
    cout << root -> data << " ";
}

int main(){
    node* root = buildTree();
    printPreorder(root);
    cout << endl;
    printInorder(root);
    cout << endl;
    printPostorder(root);
}