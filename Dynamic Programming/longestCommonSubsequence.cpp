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

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    memset(memo, -1, sizeof(memo));
    int ans = dyLCS(a, b);
    cout << ans << endl;
}