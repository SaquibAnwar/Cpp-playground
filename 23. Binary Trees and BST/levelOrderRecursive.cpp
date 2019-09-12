#include "tree.h"

void printInorder(node* root){
    if(root == NULL){
        return;
    }

    printInorder(root->left);
    cout << root -> data << " ";
    printInorder(root->right);
}



int height(node* root){
    if(root == NULL)
        return 0;

    int ls = height(root->left);
    int rs = height(root->right);

    return max(ls, rs) + 1;
}

void printKthLevel(node* root, int k){
    if(root == NULL)
        return;
    
    if(k == 1){
        cout << root -> data << " ";
        return;
    }

    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
    return;
}

void printAllLevel(node* root){
    int h = height(root);

    for(int i = 1; i <= h; i++){
        printKthLevel(root, i);
        cout<<endl;
    }
    return;
}




// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){

    node* root = buildTree();
    printAllLevel(root);        // O(n^2)
    //cout << endl;
}