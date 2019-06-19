// Even after Odd LinkedList
// Send Feedback
// Arrange elements in a given Linked List such that, all even numbers are placed after odd numbers. Respective order of elements should remain same.
// You don't need to print the elements, instead return the head of updated LL.
// Input format : Linked list elements (separated by space and terminated by -1)`

// Sample Input 1 :
// 1 4 5 2 -1
// Sample Output 1 :
// 1 5 4 2 
// Sample Input 2 :
// 1 11 3 6 8 0 9 -1
// Sample Output 2 :
// 1 11 3 9 6 8 0

//Arrange elements in a Linked List such that all even numbers are placed after odd numbers
#include <iostream>
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

using namespace std;
// #include "solution.h"
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* arrange_LinkedList(node* head)
{
    //write your code here
    node * temp = head;
    node * tail = NULL;
    
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    tail = temp;
    
    cout << tail -> data << endl;
    
    
    // while((temp -> data)%2 != 0){
    //     temp = temp -> next;
    // }

    return head;
    
}


int main()
{
    node*head=takeinput();
    head=arrange_LinkedList(head);
    print(head);
    return 0;
}
