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