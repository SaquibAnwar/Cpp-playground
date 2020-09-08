// Given an array where the ith element represents the price of a given stock on ith day.

// Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times). You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

// Input Format
// First line contains single integer n denoting the size of the array.
// Next line contains n space separated integers denoting the array.

// Constraints
// 1 <= N <= 10^6
// 0 <= Ai <= 10^4

// Output Format
// Print a single integer denoting the max profit possible.

// Sample Input
// 6
// 7 1 5 3 6 4
// Sample Output
// 7
// Explanation
// Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4. Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.

#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> v)
{   int n = v.size();

    if(n == 0)
        return 0;

    int ans = 0;
    int peak = v[0];
    int valley = v[0];
    int i = 0;
    
    while(i < n-1)
    {
        while(i < n-1 and v[i] >= v[i+1])
            i++;
        valley = v[i];

        while(i < n-1 and v[i] <= v[i+1])
            i++;
        peak = v[i];

        ans += peak-valley;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    cout << maxProfit(a) << endl;
}