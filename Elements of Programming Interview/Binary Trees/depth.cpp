#include "tree.h"


int depth(BinaryTree* node, int data, int level) 
{ 
    if (node == NULL) 
        return 0; 
  
    if (node -> data == data) 
        return level; 
  
    int downlevel = depth(node -> left, data, level + 1); 
    if (downlevel != 0) 
        return downlevel; 
  
    downlevel = depth(node->right, data, level + 1); 
    return downlevel; 
} 

// 314 6 10 271 561 2 270 28 0 -1 3 -1 1 -1 28 -1 -1 -1 -1 17 -1 401 257 -1 -1 -1 641 -1 -1 
// 8 16 3 6 4 2 -1 5 -1 -1 -1 -1 -1 -1 -1
int main(){
    BinaryTree* root = buildTreeLevelWise();
    int n;
    cin >> n;
    int h = depth(root, n, 1);
    cout << h << endl;
    //bfs(root);
}