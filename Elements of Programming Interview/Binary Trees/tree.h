#include<bits/stdc++.h>
using namespace std;

class BinaryTree{
    public:
        int data;
        BinaryTree* left;
        BinaryTree* right;

        BinaryTree(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTree(){
            delete left;
            delete right;
        }
};

BinaryTree* buildTreeLevelWise(){
    //cout << "Enter Data : ";
    int data;
    cin >> data;

    if(data == -1)
        return NULL;

    BinaryTree* root = new BinaryTree(data);

    queue<BinaryTree*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        BinaryTree* front = pendingNodes.front();
        pendingNodes.pop();
        
       // cout << "Enter Left Child of " << root -> data << ": ";
        int leftChild;
        cin >> leftChild;
        if(leftChild != -1){
            BinaryTree* child = new BinaryTree(leftChild);
            front->left = child;
            pendingNodes.push(child);
        }

        //cout << "Enter Right Child of " << front -> data << ": ";
        int rightChild;
        cin >> rightChild;
        if(rightChild != -1){
            BinaryTree* child = new BinaryTree(rightChild);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void bfs(BinaryTree* root){
    queue<BinaryTree*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        BinaryTree* front = q.front();
        
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