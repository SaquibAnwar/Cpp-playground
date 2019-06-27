#include <iostream>
#include <queue>
#include "treeNode.h"

using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data :";
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter number of children of " << front -> data << " : ";
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++){
            cout << "Enter " << i << "th child of "<< front -> data << " : ";
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        } 
    }
    return root;
}

TreeNode<int> * takeInput(){
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout << "\nEnter no. of children of " << rootData << " : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        TreeNode<int>* child = takeInput();
        root -> children.push_back(child);
    }
    return root;
}

void printTreeLevelWise(TreeNode<int>* root){
    if(root == NULL)
        return;
    
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    //TreeNode<int>* front = NULL;
    // for(int i = 0; i < root -> children.size(); i++){
    //     pendingNodes.push(root -> children[i] -> data);
    // }

    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << front -> data << " : ";

        for(int i = 0; i < front -> children.size(); i++){
            cout << front -> children[i] -> data;
            if(i < front -> children.size() -1 ){
                 cout << ", ";
            }
            pendingNodes.push(front -> children[i]);
        }
        cout<<endl;
    }

}

void printTree(TreeNode<int>* root){
    if(root == NULL)
        return;

    cout << root -> data << " : ";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] -> data ;
        if(i < root -> children.size() -1 )
            cout << ", ";
    }
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++){
        printTree(root->children[i]);
    }
}

int sumOfNodes(TreeNode<int>* root){
    int sum = root -> data;
    for(int i = 0; i < root->children.size(); i++){
        sum += sumOfNodes(root->children[i]);
    }
    return sum;
}

TreeNode<int>* maxNode(TreeNode<int>* root){
    if(root == NULL)
        return root;
    
    TreeNode<int>* max = root;
    for(int i = 0; i < root -> children.size(); i++){
        TreeNode<int>* temp = maxNode(root -> children[i]);
        if(temp -> data > max -> data){
            max = temp;
        }
    }
    return max;
}

int height(TreeNode<int>* root){
    if(root == NULL)
        return -1;

    int h = 0;
    for(int i = 0; i < root -> children.size(); i++){
        int childHeight = height(root -> children[i]);
        if(childHeight > h)
            h = childHeight;
    }

    return h + 1;
}


// takeInput() 1 3 2 2 5 0 6 0 3 2 7 0 8 0 4 2 9 0 10 0
int main(){
    TreeNode<int>* root = takeInputLevelWise();
    printTreeLevelWise(root);
    int sum = sumOfNodes(root);
    cout << "Sum : " << sum << endl;
    TreeNode<int>* max = maxNode(root);
    if(root != NULL)
        cout<< "MAX : " << max -> data<<endl;

    int h = height(root);
    cout << "Height : " << h << endl;
}
//10 3 20 30 40 2 40 50 0 0 0 0 