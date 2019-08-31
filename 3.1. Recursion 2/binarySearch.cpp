#include<iostream>

using namespace std;

int binarysearch(int arr[], int l, int r, int key){
    if(l <= r){
        int mid = l + (r-l)/2;
        
        if(arr[mid] == key)
            return mid;

        if(key > arr[mid])
            return binarysearch(arr, mid+1, r, key);
        
        if(key < arr[mid])
            return binarysearch(arr, l, mid-1, key);
    }
    return -1;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int key = 10;

    int n = sizeof(arr)/sizeof(int);

    cout << binarysearch(arr, 0, n, key) << endl;

}