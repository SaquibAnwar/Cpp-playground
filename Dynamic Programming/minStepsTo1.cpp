#include<bits/stdc++.h>

using namespace std;

int dyMinStepsTo1(int n){
    int *dp = new int[n+1];
    for(int i = 0; i <= n; i++){
        dp[i] = -1;
    }
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    int ans1, ans2, ans3;

    for(int i = 4; i <= n; i++){
        ans1 = ans2 = ans3 = n;
        if(i%2 == 0){
            ans1 = dp[i/2];
        }
        if(i%3 == 0){
            ans2 = dp[i/3];
        }
        ans3 = dp[i-1];
        dp[i] = min(ans1, min(ans2,ans3))+1;
    }
    return dp[n];
}


int minStepsTo1(int n){
    if(n == 1){
        return 0;
    }
    int q1 = INT_MAX, q2 = INT_MAX, q3 = INT_MAX;

    if(n%3 == 0){
        q1 = minStepsTo1(n/3)+1;
    }
    if(n%2 == 0){
        q2 = minStepsTo1(n/2)+1;
    }

    q3 = minStepsTo1(n-1)+1;
    
    int ans = min(q1, min(q2, q3));

    return ans;
}

int memo[10000];
int memMinStepsTo1(int n){
    if(n == 1){
        return 0;
    }
    int q1 = INT_MAX, q2 = INT_MAX, q3 = INT_MAX;
    if(memo[n] != -1){
        return memo[n];
    }
    if(n%3 == 0){
        q1 = memMinStepsTo1(n/3)+1;
    }
    if(n%2 == 0){
        q2 = memMinStepsTo1(n/2)+1;
    }

    q3 = memMinStepsTo1(n-1)+1;
    
    memo[n] = min(q1, min(q2, q3));

    return memo[n];
}


int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        memo[i] = -1;
    }
    int ans = dyMinStepsTo1(n);
    cout << ans << endl;
}