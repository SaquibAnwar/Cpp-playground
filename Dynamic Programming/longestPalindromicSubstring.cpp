#include<bits/stdc++.h>

using namespace std;

void printSubStr( string str, int low, int high ) 
{ 
    for( int i = low; i <= high; ++i ) 
        cout << str[i]; 
    cout << endl;
} 

int LPS(string s, int n){
    bool dp[n][n];
    int palindromBeginsAt = 0;
    int maxLength = 1;

    memset(dp, 0, sizeof(dp));
    //Single letter palindromes
    for(int i = 0; i < n; i++){
        dp[i][i] = true;
    }

    // finding palindromes of two characters
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            palindromBeginsAt = i;
            dp[i][i+1] = true;
            maxLength = 2;
        }
    }

    // finding palindromes of 3 to n and saving the string
    for(int k = 3; k <= n; k++){
        for(int i = 0; i < n-k+1; i++){
            int j = i+k-1;
            if(s[i] == s[j]         // matching first and last character
                and
                dp[i+1][j-1])       // rest of the substring should be a palindrome   
            {
                dp[i][j] = true;

                if(k > maxLength){
                    palindromBeginsAt = i;
                    maxLength = k;
                }
            }
        }
    }
    printSubStr(s, palindromBeginsAt, palindromBeginsAt + maxLength - 1);
    return maxLength;

}


int main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = LPS(s, n);
    cout << ans << endl;
}