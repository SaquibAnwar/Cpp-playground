#include <bits/stdc++.h>

using namespace std;

void kLargest(int *arr, int k, int n){
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < n; i++){
        while(pq.size() != k){
            pq.push(arr[i]);
        }
        
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }

}



int main(){

    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    kLargest(arr, k, n);

    delete[] arr;
}