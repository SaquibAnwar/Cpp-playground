#include"tree.h"

int height(BinaryTree* root){
    if(root == NULL){
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
}


bool isBalanced(BinaryTree* root, int k){
    if(root == NULL){
        return true;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);

    if((h1-h2) >= -k and (h1-h2) <= k){
        if(isBalanced(root->left, k) and isBalanced(root->right, k)){
            return true;
        }
    } 
    return false;
}
// 8 16 3 6 4 2 -1 5 -1 -1 -1 -1 -1 -1 -1
// 8 16 3 6 4 2 -1 5 -1 -1 -1 -1 -1 7 -1 9 -1 -1 -1
int main(){
    BinaryTree* root = buildTreeLevelWise();
    int k;
    cin >> k;

    if(isBalanced(root, k)){
        cout << "Balanced Tree" << endl;
    }
    else{
        cout << "Not Balanced Tree" << endl;
    }
}