#include<bits/stdc++.h>

using namespace std;

int convert(string input, string output, int m, int n){
    int dp[101][101] = {};
    
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++){
        dp[0][i] = dp[0][i-1]+1;    //insertion
    }
    for(int i = 1; i <= m; i++){
        dp[i][0] = dp[i-1][0]+1;    //deletion
    }

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            int q1 = dp[i-1][j-1];  //replacement
            int q2 = dp[i-1][j];    //deletion
            int q3 = dp[i][j-1];    //insertion
            dp[i][j] = min(q1, min(q2,q3)) + (input[i-1] != output[j-1]);
        }
    }
    return dp[m][n];
}


int main(){
    string input, output;
    cin >> input >> output;

    int ans = convert(input, output, input.size(), output.size());
    cout << ans << endl;
}