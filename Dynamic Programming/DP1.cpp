#include<bits/stdc++.h>

using namespace std;

int memo[1000];

// Dynamic Programming
int dyfib(int n){
    memo[0] = 0;
    memo[1] = 1;
    for(int i = 2; i <= n; i++){
        memo[i] = memo[i-1]+memo[i-2];
    }

    return memo[n];
}

// Memoization
int memofib(int n){
    if(n == 0 || n == 1){
        return n;
    }

    if(memo[n] != -1){
        return memo[n];
    }

    int ans = memofib(n-1) + memofib(n-2);
    memo[n] = ans;
    return ans;
}


// Recursion
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;
}

// 0 1 1 2 3 5 8 13 21 34 55

int main(){
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        memo[i] = -1;
    }

    int ans = dyfib(n);
    cout << ans << endl;
}