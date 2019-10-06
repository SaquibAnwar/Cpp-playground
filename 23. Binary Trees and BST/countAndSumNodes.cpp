#include"tree.h"

using namespace std;

int sum(node* root){
    if(root == NULL){
        return 0;
    }

    return root->data + sum(root->left) + sum(root->right);
}

int count(node* root){
    if(root == NULL){
        return 0;
    }

    return 1 + count(root->left) + count(root->right);
}


//8 16 3 6 4 2 -1 -1 -1 -1 -1 -1 -1
int main(){
    node* root = buildTree();
    cout << count(root) << endl;    //O(n)
    cout << sum(root) << endl;      //O(n)

}