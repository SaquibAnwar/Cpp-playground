#include<bits/stdc++.h> 

using namespace std;

int main(){
    int arr[] = {10,51,3,7,6,5,4,8,56,32};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n, greater<int>());
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}