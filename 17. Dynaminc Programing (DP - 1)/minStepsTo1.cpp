// Code : Min Steps to 1
// Send Feedback
// Given a positive integer n, find the minimum number of steps s, that takes n to 1. You can perform any one of the following 3 steps.
// 1.) Subtract 1 from it. (n= n - ­1) ,
// 2.) If its divisible by 2, divide by 2.( if n%2==0, then n= n/2 ) ,
// 3.) If its divisible by 3, divide by 3. (if n%3 == 0, then n = n / 3 ).  
// Just write brute-force recursive solution for this.
// Input format :
// Line 1 : A single integer i.e. n
// Output format :
// Line 1 : Single integer i.e number of steps
// Constraints :
// 1 <= n <= 500
// Sample Input 1 :
// 4
// Sample Output 1 :
// 2 
// Sample Output 1 Explanation :
// For n = 4
// Step 1 : n = 4/2 = 2
// Step 2 : n = 2/2 = 1
// Sample Input 2 :
// 7
// Sample Output 2 :
// 3
// Sample Output 2 Explanation :
// For n = 7
// Step 1 : n = 7 ­ - 1 = 6
// Step 2 : n = 6 / 3 = 2
// Step 3 : n = 2 / 2 = 1



#include<iostream>
#include <climits>

using namespace std;

// Dyanmic Programing
int minSteps_3(int n){
    int* dp = new int[n+1];

    for(int i = 0; i <= n; i++){
        dp[i] = 0;
    }
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    int ans1, ans2, ans3;

    for(int i = 4; i <= n; i++){
        ans1 = ans2 = ans3 = n;
        ans1 =dp[i-1];

        if(i%2 == 0){
            ans2 = dp[i/2];
        }

        if(i%3 == 0){
            ans3 = dp[i/3];
        }
        dp[i] = 1 + min(ans1, min(ans2, ans3)); 
    }
    return dp[n];
}


// Memoization
int minStepsHelper(int n, int* ans){
    // Base case
    if(n <= 1){
        return 0;
    }

    // Check if output already exists
    if(ans[n] != -1){
        return ans[n];
    }

    // Calculate output
    int x = minStepsHelper(n-1, ans);
    
    int y = INT_MAX;
    if(n%2 == 0){
        y = minStepsHelper(n/2, ans);
    }

    int z = INT_MAX;
    if(n%3 == 0){
        z = minStepsHelper(n/3, ans);
    }

    int output = min(x, min(y, z)) + 1;
    
    // save output fr final use
    ans[n] = output;
    
    return output;

}


int minSteps_2(int n){
    int * ans = new int [n+1];

    for(int i = 0; i <= n; i++){
        ans[i] = -1;
    }

    return minStepsHelper(n, ans);
}



// Brute Force approach
int minSteps(int n){
    // Base case
    if(n <= 1){
        return 0;
    }

    // Recursive call
    int x = minSteps(n-1);
    
    int y = INT_MAX;
    if(n%2 == 0){
        y = minSteps(n/2);
    }

    int z = INT_MAX;
    if(n%3 == 0){
        z = minSteps(n/3);
    }

    // Calculate final output
    int ans = min(x, min(y, z)) + 1;

    return ans;
}


int main(){
    int n;
    cin >> n;
    cout << minSteps_3(n) << endl;
}