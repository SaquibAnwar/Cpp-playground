#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int i, int key){
    if(i == n)
        return -1;

    if(arr[i] == key){
        return i+1;
    }

    return linearSearch(arr, n, i+1, key);
}


int main(){
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int key;
    cin >> key;

    cout << linearSearch(arr, n, 0, key) << endl;
}