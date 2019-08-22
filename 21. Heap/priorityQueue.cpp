#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int arr[10] = {11, 5, 6, 3, 7, 12, 20, 1, 2, 9};

    for(int i = 0; i < 10; i++){
        maxHeap.push(arr[i]);
        minHeap.push(arr[i]);
    }

    while(!maxHeap.empty()){
        cout << maxHeap.top() << ", ";
        maxHeap.pop();
    }
    
    cout << endl;

    while(!minHeap.empty()){
        cout << minHeap.top() << ", ";
        minHeap.pop();
    }
}