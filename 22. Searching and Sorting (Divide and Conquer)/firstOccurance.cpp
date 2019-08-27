#include<bits/stdc++.h>

using namespace std;


int FirstOccurance(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid;
    int ans = -1;

    while(s<=e){
        mid = (s+e)/2;

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
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

    int ans = FirstOccurance(arr, n, key);

    if(ans != -1)
        cout << "Key is found at position : " << ans + 1 << " position" << endl;
    else
    {
        cout << "Key not found" << endl;
    }
    

    delete[] arr;
}