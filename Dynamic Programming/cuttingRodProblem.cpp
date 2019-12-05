#include<bits/stdc++.h>

using namespace std;

int memo[1000];

int dyMaxProfit(int arr[], int n){
    int dp[100] = {};

    
    for(int i = 1; i <= n; ++i){
        int best = 0;
        for(int j = 1; j <=i; ++j){
            best = max(best, arr[j] + dp[i-j]);
        }
        dp[i] = best;
    }
    return dp[n];
}

int memMaxProfit(int arr[], int n){
    if(n == 0) return 0;

    if(memo[n] != -1){
        return memo[n];
    }

    int best = 0;
    for(int i = 1; i <= n; ++i){
        int netProfit = arr[i] + memMaxProfit(arr, n-i);
        memo[n] = max(netProfit, memo[n]);
    }
    return memo[n];
}


int maxProfit(int arr[], int n){
    if(n == 0) return 0;

    int best = 0;
    for(int i = 1; i <= n; ++i){
        int netProfit = arr[i] + maxProfit(arr, n-i);
        best = max(netProfit, best);
    }
    return best;
}


int main(){
    int totalLen;
    cin >> totalLen;
    int *priceOfEachLen = new int[totalLen+1];
    memset(memo, -1, sizeof(memo));

    for(int eachLen = 1; eachLen <= totalLen; ++eachLen){
        cin >> priceOfEachLen[eachLen];
    }

    int ans = dyMaxProfit(priceOfEachLen, totalLen);
    cout << ans << endl;
}