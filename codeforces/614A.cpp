#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 

        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, k;
        cin >> n >> s >> k;
        int *arr = new int[k];
        for(int i = 0; i < k; i++){
            cin >> arr[i];
        }

        sort(arr, arr+k);
        int ans = binarySearch(arr, 0, k, s);
        if(ans == -1){
            cout << "0" << endl;
        }
        else{
            int l = arr[0];
            for(int i = 0; i < k; i++){
                
            }
        }

    }
}