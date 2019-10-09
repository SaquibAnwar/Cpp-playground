#include "tree.h"


int height(node* root){
    if(root == NULL){
        return 0;
    }

    return root->data + height(root->left)+ height(root->right);
}


bool isBalanced(node *root) {
    // Write your code here
    if(root == NULL)
        return true;

    int lh = height(root->left);
    int rh = height(root ->right);

    if((lh-rh) >= -1 && (lh-rh) <= 1){
        if(isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
    }

    return false;

}


int main() {
    node* root = buildTreeLevelWise();
    cout << endl;
    if(isBalanced(root))
    	cout << "true" << endl;
    else
	cout << "false" << endl;
}