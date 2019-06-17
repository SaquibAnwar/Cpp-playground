#include<iostream>

using namespace std;

void merge(int *a, int s, int e){
    int mid = (s+e)/2;
    
    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while(i <= mid && j <= e){
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while(i <= mid){
        temp[k++] = a[i++];
    }

    while(j <= e){
        temp[k++] = a[j++];
    }

    // copying all the element to the original array
    for(int i = s; i <= e; i++)
        a[i] = temp[i];
    
}

void mergeSort(int arr[], int start, int end){
    //Base Case - 0 ot 1 elements
    if(start >= end)
        return;

    //Follow 3 steps
    //1. Divide
    int mid = (start + end)/2;

    //2. Recursively sort the arrays - (start, mid), (mid+1, end)
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    //3. Merge the two parts
    merge(arr, start, end);



}

int main(){
    int size;
    cin >> size;

    int a[size];

    for(int i = 0; i < size; i++)
        cin >> a[i];

    mergeSort(a, 0, size-1);

    for(int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;   
}