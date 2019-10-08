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

void printInorder2(node*);

int main(){
    node* root = buildTreeLevelWise();
    printPreorder(root);
    cout << endl;
    printInorder(root);
    cout << endl;
    printInorder2(root);
    cout << endl;
    printPostorder(root);
}

//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
void printInorder2(node* n){
    while(n){
        if(n->left){
            node* pre = n->left;
            while(pre->right and pre->right != n){
                pre = pre->right;
            }

            if(pre->right){
                pre->right = NULL;
                cout << n->data << " ";
                n = n->right;
            }
            else{
                pre->right = n;
                n = n->left;
            }
        }
        else{
            cout << n->data << " ";
            n = n->right;
        }
    }
}