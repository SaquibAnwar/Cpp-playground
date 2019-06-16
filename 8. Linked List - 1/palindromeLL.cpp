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

bool check_palindrome(node* head)
{
    node * temp = head;
    int len = 0;
    
    // finding length
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    
    int x = len/2;           // x = 3 and len = 6
    
    temp = head;
    
    int i = 1;
    
    // moving pointer to mid
    while(i < x){
        temp = temp -> next;
        i++;
    }
    
    node * t = temp -> next;
    
    temp -> next = NULL;
    
    // reversing second half
    node * curr = t;
    node * prev = NULL, *nxt = NULL;
    while(curr != NULL){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    t = prev;
    temp = head;
    
   
    //comparing both the lists 
    int flag = 0;
    while(temp != NULL || t != NULL){
        if(temp -> data == t -> data){
            flag = 0;
            temp = temp -> next;
            t = t -> next;
        }
        else{
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
        return true;
    else
        return false;
    

}

int main()
{
    node*head=takeinput();
    bool ans=check_palindrome(head);
    if(ans)
        cout<<"true";
    else 
        cout << "false";
    return 0;
}
