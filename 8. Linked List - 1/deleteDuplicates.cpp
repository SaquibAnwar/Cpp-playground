// Eliminate duplicates from LL
// Send Feedback
// Given a sorted linked list (elements are sorted in ascending order). Eliminate duplicates from the given LL, such that output LL contains only unique elements.
// You don't need to print the elements, just remove duplicates and return the head of updated LL.
// Input format : Linked list elements (separated by space and terminated by -1)

// Sample Input 1 :
// 1 2 3 3 3 4 4 5 5 5 7 -1
// Sample Output 1 :
// 1 2 3 4 5 7

//Eliminate duplicates from a sorted linked list
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
//#include "solution.h"
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

node* eliminate_duplicate(node* head)
{   
    if(head == NULL)
        return NULL;
    
    node *t1 = head, *t2 = head -> next;
    
    while(t2 != NULL){
        if(t1 -> data != t2 -> data){
            t1 -> next = t2;
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        else{
            t2 = t2 -> next;
        }
            
    }
    
    t1 -> next = t2;
    
    return head;
}

int main(){
    node* head=takeinput();
    head=eliminate_duplicate(head);
    print(head);
    return 0;
}

