#include<bits/stdc++.h>

using namespace std;


int Binarysearch(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid;

    while(s<=e){
        mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to be searched : ";
    cin >> key;

    sort(arr, arr+n);

    int mid = Binarysearch(arr, n, key);

    if(mid != -1)
        cout << "Key is found at position : " << mid + 1 << " position" << endl;
    else
    {
        cout << "Key not found" << endl;
    }
    

    delete[] arr;
}