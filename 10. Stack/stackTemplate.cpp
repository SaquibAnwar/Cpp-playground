#include <iostream>
#include <climits>
 
using namespace std;
template <typename T>

class Stack{
    T *data;
    int nextIndex;
    int capacity;  

    public :

        // initialize the size of the stack
        Stack() {
            capacity = 4;
            data = new T[capacity];
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
        void push(T element){
            if(nextIndex == capacity) {
                T *newData = new T[2*capacity];

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
        T pop() {
            if(isEmpty()){
                cout << "Stack is Empty" << endl;
                return 0;
            }
            nextIndex--;
            return data[nextIndex];
        }

        T top() {
            if(isEmpty()){
                cout << "Stack is Empty" << endl;
                return 0;
            }
            return data[nextIndex - 1];
        }
};