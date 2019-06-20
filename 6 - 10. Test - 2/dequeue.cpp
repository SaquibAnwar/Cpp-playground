// Dequeue
// Send Feedback
// You need to implement a class for Dequeue i.e. for double ended queue. In this queue, elements can be inserted and deleted from both the ends.
// You don't need to double the capacity.
// You need to implement the following functions -
// 1. constructor
// You need to create the appropriate constructor. Size for the queue passed is 10.
// 2. insertFront -
// This function takes an element as input and insert the element at the front of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
// 3. insertRear -
// This function takes an element as input and insert the element at the end of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
// 4. deleteFront -
// This function removes an element from the front of queue. Print -1 if queue is empty.
// 5. deleteRear -
// This function removes an element from the end of queue. Print -1 if queue is empty.
// 6. getFront -
// Returns the element which is at front of the queue. Return -1 if queue is empty.
// 7. getRear -
// Returns the element which is at end of the queue. Return -1 if queue is empty.

// C++ implementation of De-queue using circular
// array
#include<iostream>
using namespace std;

//#include "Solution.h"

class Deque {
    // Complete this class
    
};

// Driver program to test above function
int main()
{
    Deque dq(10);
    int choice,input;
    while(true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                dq.insertFront(input);
                break;
            case 2:
                cin >> input;
                dq.insertRear(input);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                cout << dq.getFront() << "\n";
                break;
            case 6:
                cout << dq.getRear() << "\n";
                break;
            default:
                return 0;
        }
    }
    
    return 0;
}
