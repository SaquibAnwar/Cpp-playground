#include <iostream>

using namespace std;

void InsertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int j = i-1;
        int no = arr[i];
        while(j >= 0 && arr[j] > no){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = no;
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

    InsertionSort(arr, n);

    print(arr, n);

    return 0;
}