#include <bits/stdc++.h>

using namespace std;

int searchPivot(int arr[], int s, int e){
    int mid = (s+e)/2;

    if(arr[mid] > arr[mid+1]){
        return mid;
    }
    if(arr[mid] < arr[mid-1])
        return mid-1;

    if(arr[mid] <= arr[s])
        return searchPivot(arr, s, mid-1);
    
    return searchPivot(arr, mid+1, e);
}

int main(){
    int arr[] = {5, 6, 7, 8, 9, 10, 3, 4};

    int n = sizeof(arr)/sizeof(int)-1;
    cout << searchPivot(arr, 0, n) + 1 << endl;
}