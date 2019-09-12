#include<bits/stdc++.h>
#include "tree.h"

using namespace std;

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