// Delete alternate nodes
// Send Feedback
// Given a linked list, delete all alternate nodes in the list. That means given Linked List is -
// 10 20 30 40 50 60 
// you need to delete nodes - 20, 40 and 60
// Note : Head of the list will remain same. Don't need to print or return anything.
// Input Constraints:
// 1 <= Length of Linked List <=10^6.
// Input format :
// Linked list elements (separated by space and terminated by -1)
// Output Format :
// Updated linked list elements 
// Sample Input :
// 1 2 3 4 5 -1
// Sample Output :
// 1 3 5

//delete alternate Node in a linked list
#include <iostream>

class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    ~Node() {
        if(next) {
            delete next;
        }
    }
};

using namespace std;
//#include "solution.h"

Node* takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void delete_alternate_node_LinkedList(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * No need to return pr print the output.
     * Taking input and printing output is handled automatically.
     */
    
}



int main() {
    Node *head = takeinput();
    delete_alternate_node_LinkedList(head);
    print(head);
    delete head;
    return 0;
}