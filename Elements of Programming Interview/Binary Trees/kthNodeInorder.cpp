#include "tree.h"


void kthNodeInInorderTraversal(BinaryTree* root, int k, int level){
    if (root == NULL){
        return;
    }

    kthNodeInInorderTraversal(root->left, k, level+1);
    if (level == k){
        cout << root->data;
    }

    kthNodeInInorderTraversal(root->right, k, level+1);
}

// 314 6 10 271 561 2 270 28 0 -1 3 -1 1 -1 28 -1 -1 -1 -1 17 -1 401 257 -1 -1 -1 641 -1 -1 
// 8 16 3 6 4 2 -1 5 -1 -1 -1 -1 -1 -1 -1
int main(){
    BinaryTree* root = buildTreeLevelWise();
    int n;
    cin >> n;
    kthNodeInInorderTraversal(root, n, 1);
    //bfs(root);
}