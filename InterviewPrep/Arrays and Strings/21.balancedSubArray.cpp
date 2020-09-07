// You are given an array which contains elements equal to only 0 or 1.
// Your task is to find out the maximum length of the subarray which
// contains equal number of zeroes' and one's

// Input Format
// First line contains a single integer N. Next line contains N integers {0 or 1}.

// Constraints
// N<=100000

// Output Format
// Print a single line, the maximum length of the required subarray.

// Sample Input
// 2
// 0 1
// Sample Output
// 2

#include<bits/stdc++.h>

using namespace std;

int balancedSubArray(vector<int> v)
{
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {   
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << balancedSubArray(v) << endl;
}