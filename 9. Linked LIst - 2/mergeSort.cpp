// Code: Merge Sort
// Send Feedback
// Sort a given linked list using Merge Sort.
// You don't need to print the elements, just sort the elements and return the head of updated LL.
// Input format :
// Linked list elements (separated by space and terminated by -1)
// Output format :
// Updated LL elements (separated by space)
// Constraints :
// 1 <= Length of LL <= 1000
// Sample Input 1 :
// 1 4 5 2 -1
// Sample Output 1 :
// 1 2 4 5

//merge sort recursive
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

// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node* findMid(node *head) {
	if(head == NULL) {
		return head;
	}
	node *slow = head, *fast = head;
	while(fast -> next != NULL && fast -> next -> next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	return slow;
}

node* merge(node *head1, node *head2) {
	if(head1 == NULL) {
		return head2;
	}
	if(head2 == NULL) {
		return head1;
	}
	node *head = NULL, *tail = NULL;
	if(head1 -> data < head2 -> data) {
		head = head1;
		tail = head1;
		head1 = head1 -> next;
	}
	else {
		head = head2;
		tail = head2;
		head2 = head2 -> next;
	}

	while(head1 != NULL && head2 != NULL) {
		if(head1 -> data < head2 -> data) {
			tail -> next = head1;
			tail = head1;
			head1 = head1 -> next;
		}
		else {
			tail -> next = head2;
			tail = head2;
			head2 = head2 -> next;
		}
	}
	if(head1 != NULL) {
		tail -> next = head1;
	}
	if(head2 != NULL) {
		tail -> next = head2;
	}
	return head;
}

node* mergeSort(node *head) {
	if(head == NULL || head -> next == NULL) {
		return head;
	}
	node *mid = findMid(head);
	node *half1 = head;
	node *half2 = mid -> next;
	mid -> next = NULL;
	half1 = mergeSort(half1);
	half2 = mergeSort(half2);

	node *finalHead = merge(half1, half2);
	return finalHead;

}


int main()
{
    node* head=takeinput();
    head= mergeSort(head);
    print(head);
    return 0;
}

