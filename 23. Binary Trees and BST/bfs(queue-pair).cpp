#include<bits/stdc++.h>
#include "tree.h"

using namespace std;

void bfs(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* front = q.front();
        if(front == NULL){
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << front->data << " ";
            q.pop();

            if(front->left){
                q.push(front->left);
            }

            if(front->right){
                q.push(front->right);
            }
        }

    }
}


// void bfs2(node* root){
//     queue<pair<node*, int>> q;
//     int i = 0;
//     q.push((root, i));
// }

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node* root = buildTree();
    bfs(root);
}