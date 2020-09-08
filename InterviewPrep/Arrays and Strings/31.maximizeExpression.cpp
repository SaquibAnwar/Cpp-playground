// Dobby is bored since he has no new problems to solve.So,he thought of a new problem himself.The problem is :
// Given two arrays of integers with equal lengths,find the maximum value of: |a1[i] - a1[j]| + |a2[i] - a2[j]| + |i - j| where 1<=i , j<=n where n is the length of the arrays.

// Input Format
// The first line contains an integer n - the size of the arrays.
// Next line contains n integers - elements of array a1
// Last line contains n integers - elements of array a2

// Constraints
// 1<=n<=10^5

// Output Format
// Print a single integer equal to the maximum value of the expression given in the question

// Sample Input
// 3
// 1 2 3
// 4 5 6
// Sample Output
// 6

#include<bits/stdc++.h>

using namespace std;

int maximizeExpression(vector<int> a, vector<int> b)
{
    int ans;
    int n = a.size();
    int a1, a2, b1, b2, c1, c2, d1, d2;
    a1 = b1 = c1 = d1 = INT_MIN;
    a2 = b2 = c2 = d2 = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(a1 < a[i]+b[i]+i)
            a1 = a[i]+b[i]+i;
        if(a2 > a[i]+b[i]+i)
            a2 = a[i]+b[i]+i;

        if(b1 < -a[i]+b[i]+i)
            b1 = -a[i]+b[i]+i;
        if(b2 > -a[i]+b[i]+i)
            b2 = -a[i]+b[i]+i;

        if(c1 < a[i]+b[i]-i)
            c1 = a[i]+b[i]-i;
        if(c2 > a[i]+b[i]-i)
            c2 = a[i]+b[i]-i;

        if(d1 < b[i]-a[i]-i)
            d1 = b[i]-a[i]-i;
        if(d2 > b[i]-a[i]-i)
            d2 = b[i]-a[i]-i;
    }

    int case1 = max(a1-a2, b1-b2);
    int case2 = max(c1-c2, d1-d2);
    ans = max(case1, case2);

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    cout << maximizeExpression(a, b) << endl;
}