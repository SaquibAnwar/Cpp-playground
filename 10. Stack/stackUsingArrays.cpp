#include <iostream>
#include <climits>
 
using namespace std;

class Stack{
    int *data;
    int nextIndex;
    int capacity;  

    public :

        // initialize the size of the stack
        Stack() {
            capacity = 4;
            data = new int [capacity];
            nextIndex = 0;  
        }

        // return the number of elements presnt in the stack
        int size() {
            return nextIndex;
        }

        // check if the stack is empty or not
        bool isEmpty() {
            // if(nextIndex == 0)
            //     return true;
            // else
            //     return false;

            return nextIndex == 0;
        }

        // Inserting elements into the stack
        void push(int element){
            if(nextIndex == capacity) {
                int *newData = new int[2*capacity];

                for(int i = 0; i < capacity; i++){
                    newData[i] = data[i];
                }

                capacity *= 2;
                delete [] data;
                data = newData;


                /*
                cout << "Stack full " << endl;
                return;
                */
            } 
            data[nextIndex] = element;
            nextIndex++;
        }

        // to delete the element
        int pop() {
            if(isEmpty()){
                cout << "Stack is Empty" << endl;
                return INT_MIN;
            }
            nextIndex--;
            return data[nextIndex];
        }

        int top() {
            if(isEmpty()){
                cout << "Stack is Empty" << endl;
                return INT_MIN;
            }
            return data[nextIndex - 1];
        }
};