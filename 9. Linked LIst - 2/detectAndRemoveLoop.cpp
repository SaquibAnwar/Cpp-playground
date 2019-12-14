// Palindrome LinkedList
// Send Feedback
// Check if a given linked list is palindrome or not. Return true or false.
// Indexing starts from 0.
// Input format : Linked list elements (separated by space and terminated by -1)`

// Sample Input 1 :
// 9 2 3 3 2 9 -1
// Sample Output 1 :
// true
// Sample Input 2 :
// 0 2 3 2 5 -1
// Sample Output 2 :
// false

//Check if a linked list is a palindrome
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

void removeLoop(node* ptr, node* head){
    node* temp1 = ptr;
    node* temp2 = ptr;

    int k = 1;
    while(temp2->next != temp1){
        temp2 = temp2->next;
        k++;
    }

    temp1 = head;

    temp2 = head;
    for(int i = 0; i < k; i++){
        temp2 = temp2->next;
    }

    while(temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    while(temp2->next != temp1){
        temp2 = temp2->next;
    }

    temp2->next = NULL;
}

int detectAndRemoveLoop(node* head){
    node* fptr = head, *sptr = head;

    while(sptr and fptr and fptr->next){
        sptr = sptr->next;
        fptr = fptr->next->next;

        if(fptr == sptr){
            removeLoop(sptr, head);
            return 1;
        }
    }
    return 0;
}

int main()
{
    node*head=takeinput();
    int ans=detectAndRemoveLoop(head);
    if(ans == 1){
        cout << "Loop Detected" << endl;
    }
    else{
        cout << "No Loop" << endl;
    }
    return 0;
}
