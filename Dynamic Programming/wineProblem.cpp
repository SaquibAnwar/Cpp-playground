#include<bits/stdc++.h>

using namespace std;

int maxProfit(int arr[], int n){
    
}


int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = maxProfit(arr, n);
    cout << ans << endl;
}