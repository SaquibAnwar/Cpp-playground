#include "tree.h"

void bfs(node* root){
    queue<node *> q;
    q.push(root);

    while(!q.empty()){
        node * front = q.front();
        cout << front -> data << ", ";
        q.pop();

        if(front -> left){
            q.push(front->left);
        }

        if(front -> right){
            q.push(front->right);
        }
    }
    return;
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node *root = buildTree();
    bfs(root);
    cout << endl;
}