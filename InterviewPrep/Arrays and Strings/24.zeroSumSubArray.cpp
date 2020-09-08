// You are given an array arr of size N. You need to print the total count of sub-arrays having their sum equal to 0

// Input Format
// First line of the input contains an integer T denoting the number of test cases
// For each test case :
// Line 1 : N the size of Array
// Line 2 : N elements for Array

// Constraints
// 1 <= T <= 100
// 1 <= N <= 10^6
// -10^10 <= Ai <= 10^10

// Output Format
// For each test case, in a new line, print the total number of subarrays whose sum is equal to 0.

// Sample Input
// 1
// 1
// 0
// Sample Output
// 1

#include<bits/stdc++.h>

using namespace std;

int zeroSumSubArray(vector<int> v)
{
    vector<int> p;
    unordered_map<int, int> map;
    map.insert(make_pair(0, 1));
    p[0] = v[0];
    if(map.find(p[0]) == map.end())
        map.insert(make_pair(p[0], 1));
    else
        map[p[0]]++;

    for(int i = 1; i < v.size(); i++)
    {
        p[i] = p[i-1] + v[i];

        if(map.find(p[i]) == map.end())
            map.insert(make_pair(p[i], 1));
        else
            map[p[i]]++;
    }

    for(int i = 0; i < p.size(); i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    int count = 0;
    for(int i = 0; i < map.size(); i++)
    {
        int val = map[i];
        if(val > 1)
            count += val*(val-1)/2;
    }

    return count;
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

    cout << zeroSumSubArray(v) << endl;
}