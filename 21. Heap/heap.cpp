#include<bits/stdc++.h>

using namespace std;

class Heap{
        vector<int> v;
        //Heap Configuration.
        bool minHeap;

        bool compare(int a, int b){
            if(minHeap){
                return a<b;
            }
            else{
                return a>b;
            }
        }

        void heapify(int i){
            int left = 2*i;
            int right = 2*i + 1;

            // assume current is min
            int minIndex = i;
            if(left < v.size() && compare(v[left], v[minIndex])){
                minIndex = left;
            }

            if(right < v.size() && compare(v[right], v[minIndex])){
                minIndex = right;
            }

            if(minIndex != i){
                swap(v[i], v[minIndex]);
                heapify(minIndex);
            }
        }

    public:
        Heap(bool type = true){
            minHeap = type;
            // Blocking the first index;
            v.push_back(-1);
        }

        void push(int data){
            //Insert at last
            v.push_back(data);

            // take the element to the correct position to restore heap property.
            int index = v.size()-1;
            int parent = index/2;

            while(index > 1 && compare(v[index], v[parent])){
                swap(v[index], v[parent]);
                index = parent;
                parent = parent/2;
            }
        }

        void pop(){
            int last = v.size()-1;
            swap(v[1], v[last]);
            heapify(1);
        }


        int top(){
            return v[1];
        }

        bool empty(){
            return v.size()==1;
        }

};


int main(){
    Heap h;
    h.push(10);
    h.push(25);
    h.push(20);
    h.push(5);
    h.push(15);

    cout << h.top() << endl;
    h.pop();
    cout << h.top() << endl;
}