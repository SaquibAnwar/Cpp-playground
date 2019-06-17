// Code: Merge Two Sorted LL
// Send Feedback
// Given two linked lists sorted in increasing order. Merge them in such a way that the result list is also sorted (in increasing order).
// Try solving with O(1) auxiliary space (in-place). You just need to return the head of new linked list, don't print the elements.
// Input format :
// Line 1 : Linked list 1 elements of length n (separated by space and terminated by -1)
// Line 2 : Linked list 2 elements of length m (separated by space and terminated by -1)
// Output format :
// Merged list elements (separated by space)
// Constraints :
// 1 <= n, m <= 10^4
// Sample Input :
//  2 5 8 12 -1
//  3 6 9 -1
// Sample Output :
//  2 3 5 6 8 9 12 

#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;
//#include "Solution.h"

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
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
    cout<<endl;
}


Node* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
    Node * temp1 = head1;
    Node * temp2 = head2;
    Node * dummy = new Node(-1);
    Node * head = dummy;
    
    while(temp1 != NULL && temp2 != NULL){
        if(temp1 -> data < temp2 -> data){
            dummy -> next = temp1;
            temp1 = temp1 -> next;
        }
        else{
            dummy -> next = temp2;
            temp2 = temp2 -> next;
        }
        dummy = dummy -> next;
    }
    
    if(temp1 != NULL){
        dummy -> next = temp1;
    }
    else{
        dummy -> next = temp2;
    }
    
    return head -> next; 
    
}



int main() {
    Node *head1 = takeinput();
    Node *head2 = takeinput();
    Node *head3 = mergeTwoLLs(head1, head2);
    print(head3);
    return 0;
}

