#include "tree.h"

using namespace std;

int height(node* root){
    if(root == NULL){
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1+max(h1, h2);
}


int diameter(node* root){
    if(root == NULL){
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1+h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2, op3));
}

pair<int, int> diameterOptimized(node* root){
    pair<int,int> p;
    if(root == NULL){
        p.first = p.second = 0;
        return p;
    }
    pair<int, int> left = diameterOptimized(root->left);
    pair<int, int> right = diameterOptimized(root->right);

    p.first = max(left.first, right.first) + 1;
    p.second = max(left.first+right.first, max(left.second, right.second));
    return p;
}


class Pair{
    public:
        int height;
        int diameter;
};

Pair fastDiameter(node* root){
    Pair p;
    if(root == NULL){
        p.height = p.diameter = 0;
        return p;
    }

    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height)+1;
    p.diameter = max(left.height+right.height, max(left.diameter, right.diameter));
    return p;
}


void printTree(node* root){
    if(root == NULL)
        return;
    cout << root -> data << " : ";
    if(root -> left != NULL){
        cout << "L" << root -> left -> data << " ";
    }

    if(root -> right != NULL){
        cout << "R" << root -> right -> data << " ";
    }
    cout << endl;
    printTree(root -> left);
    printTree(root -> right);
}


// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node* root = buildTreeLevelWise();
    cout << endl;
    printTree(root);
    cout << endl;
    cout << diameter(root) << endl;                         //O(n^2)
    pair<int, int> p = diameterOptimized(root);             //O(n)
    cout << "Height : " << p.first << endl;
    cout << "Diameter : " << p.second << endl;

    Pair ans = fastDiameter(root);                          //O(n)
    cout << "Height : " << ans.height << endl;
    cout << "Diameter : " << ans.diameter << endl;
}

// 1 2 12 3 -1 -1 15 4 5 -1 -1 -1 -1 6 7 8 9 10 11 -1 -1 -1 -1 -1 -1 -1 -1