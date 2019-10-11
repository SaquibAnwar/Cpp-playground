#include"tree.h"

bool isMirror(BinaryTree* root1, BinaryTree* root2){
    if(root1 == NULL and root2 == NULL)
        return true;

    if(root1 and root2 and root1->data == root2->data){
        return isMirror(root1->left, root2->right) and isMirror(root1->right, root2->left); 
    }
    return false;
}

bool isSymmetric(BinaryTree* root){
    return isMirror(root, root);
}

bool isSymmetric2(BinaryTree* root){
    if(root == NULL)
        return true;

    queue<BinaryTree*> q;
    q.push(root);
    q.push(root);

    BinaryTree* leftNode, *rightNode;

    while(!q.empty()){
        leftNode = q.front();
        q.pop();
        rightNode = q.front();
        q.pop();

        if(leftNode->data != rightNode->data){
            return false;
        }

        if(leftNode->left and leftNode->right){
            q.push(leftNode->left);
            q.push(rightNode->right);
        }

        else if(leftNode->left || rightNode->right){
            return false;
        }

        if(leftNode->right and rightNode->left){
            q.push(leftNode->right);
            q.push(rightNode->left);
        }

        else if(leftNode->right || rightNode->left){
            return false;
        }
    }
    return true;
}

// 1 2 2 3 4 4 3 -1 -1 -1 -1 -1 -1 -1 -1
// 8 16 3 6 4 2 -1 5 -1 -1 -1 -1 -1 7 -1 9 -1 -1 -1
int main(){
    BinaryTree* root = buildTreeLevelWise();

    if(isSymmetric(root)){
        cout << "Symmetric" << endl;
    }
    else{
        cout << "Not Symmetric" << endl;
    }

    cout << (isSymmetric(root)) ? "Symmetric" : "Not Symmetric" ;
    cout << endl;
}