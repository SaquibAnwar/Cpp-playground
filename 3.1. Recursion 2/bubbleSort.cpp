#include<iostream>

using namespace std;

void bubblesort(int arr[], int n){
    if(n == 1)
        return;

    for(int i = 0; i <= n-2; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubblesort(arr, n-1);
}

void bubblesort2(int arr[], int j, int n){
    if(n==1)
        return;
    
    if(j == n-1){
        return bubblesort2(arr, 0, n-1);
    }

    if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
    }

    bubblesort2(arr, j+1, n);
    return;
}


int main(){
    int arr[] = {5, 7, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(int);

    bubblesort2(arr, 0, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}