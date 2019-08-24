#include <iostream>

using namespace std;

void WaveSort(int arr[], int n){
    for(int i = 0; i < n; i+=2){
        if(i > 0 && arr[i-1] > arr[i]){
            swap(arr[i], arr[i-1]);
        }
        if(i <= n-2 && arr[i+1] > arr[i]){
            swap(arr[i], arr[i+1]);
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    WaveSort(arr, n);

    print(arr, n);

    return 0;
}