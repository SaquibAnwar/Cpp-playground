#include <iostream>

using namespace std;

void BubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    BubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}