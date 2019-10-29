#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int arr[10000000];

void bubbleSort(int* a, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i; j++){
            swap(a[i], a[j]);
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        arr[i] = n-i;
    }

    clock_t startTime = clock();
    //sort(arr, arr+n);
    bubbleSort(arr, n);
    clock_t endTime = clock();

    cout << endTime - startTime << endl;

    startTime = clock();
    sort(arr, arr+n);
    //bubbleSort(arr, n);
    endTime = clock();

    cout << endTime - startTime << endl;

}