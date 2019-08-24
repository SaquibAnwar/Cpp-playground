#include <iostream>

using namespace std;

void SelectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    SelectionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}