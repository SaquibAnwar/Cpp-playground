#include<iostream>

using namespace std;

// Brute force approach
int fibo(int n){
    if(n <= 1)
        return n;

    int sum = fibo(n-1) + fibo(n - 2);
    return sum;
}



// Memoization
int fibo_helper(int n, int * ans){
    if(n <= 1)
        return n;

    // check if output already exist
    if(ans[n] != -1){
        return ans[n];
    }

    int a = fibo_helper(n - 1, ans);
    int b = fibo_helper(n - 2, ans);

    // Save the output for future use
    ans[n] = a + b;

    // return the final output
    return ans[n];
}



// Dynamic Programing
int fib_3(int n){
    int * ans = new int[n + 1];

    ans[0] = 0;
    ans[1] = 1;

    for(int i = 2; i <= n; i++){
        ans[i] = ans[i-1] + ans[i-2];
    }

    return ans[n];
}


int fib_2(int n){
    int* ans = new int[n+1];
    for(int i = 0; i <= n; i++)
        ans[i] = -1;

    return fibo_helper(n, ans);
}


int main(){
    int n;
    cin >> n;
    cout << fibo(n) << endl;;
}
// 0 1 1 2 3 5 8 13 21