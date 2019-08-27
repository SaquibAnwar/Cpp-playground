#include<bits/stdc++.h>

using namespace std;

int searchIn(int arr[], int s, int e, int key){
    //base case
    if(s > e)
        return -1;

    // rec case
    int mid = (s+e)/2;
    if(arr[mid] == key)
        return mid;
    
    // mid lies in the first line
    if(arr[s] <= arr[mid]){
        if(key >= arr[s] && arr[mid] >= key){
            return searchIn(arr, s, mid-1, key);
        }
        else{
            return searchIn(arr, mid+1, e, key);
        }
    }

    // mid lies in the second line
    if(arr[mid] <= key && arr[e] >= key){
        return searchIn(arr, mid+1, e, key);
    }
    return searchIn(arr, s, mid-1, key);
}


int main(){
    int arr[] = {5, 6, 7, 8, 1, 2, 3, 4};
    int key;
    cin >> key;

    int n = sizeof(arr)/ sizeof(int)-1;
    int pos = searchIn(arr, 0, n, key);

    if(pos == -1){
        cout << "Key not found" << endl;
    }
    else{
        cout << "Key is found at " << pos+1 << " position" << endl;   
    }

    return 0;
}