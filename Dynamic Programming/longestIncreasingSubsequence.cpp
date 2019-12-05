#include<bits/stdc++.h>

using namespace std;

int longestIncreasingSubsequence(int arr[], int n){
    int dp[100];
    for(int i = 0; i < n; i++) dp[i] = 1;

    int best = -1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] <= arr[i]){   // jth element can be absorbed by ith element
                int curLen = 1 + dp[j];
                dp[i] = max(curLen, dp[i]);
            }
        }
        best = max(dp[i], best);
    }

    for(int i = 0; i < n; i++){
        cout << dp[i] <<" ";
    }
    cout << endl;

    return best;
}


int main(){
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = longestIncreasingSubsequence(arr, n);
    cout << ans << endl;
}