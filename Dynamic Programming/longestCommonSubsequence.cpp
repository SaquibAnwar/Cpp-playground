#include<bits/stdc++.h>

using namespace std;
int memo[100][100];

int dyLCS(string a, string b){
    int dp[101][101] = {};

    int n = a.size();
    int m = b.size();

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1]; 
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }


    int ans = dp[n][m];
    return ans;
}
/*
int memLCS(string a, string b, int i, int j){
    if(a[i] == '\0' || b[i] == '\0'){
        return 0;
    }

    if(memo[i][j] != -1){
        return memo[i][j];
    }

    if(a[i] == b[j]){
        int ans = 1 + memLCS(a, b, i+1, j+1);
        memo[i][j] = ans;
    }
    else{
        int q1 = memLCS(a, b, i+1, j);
        int q2 = memLCS(a, b, i, j+1);
        int ans = max(q1, q2);
        memo[i][j] = ans;
        return ans;
    }
}

int LCS(string a, string b, int i, int j){
    if(a[i] == '\0' || b[i] == '\0'){
        return 0;
    }
    else if(a[i] == b[j]){
        return 1 + LCS(a, b, i+1, j+1);
    }
    else{
        return max(LCS(a, b, i+1, j), LCS(a, b, i, j+1));
    }
}
*/

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    memset(memo, -1, sizeof(memo));
    int ans = dyLCS(a, b);
    cout << ans << endl;
}