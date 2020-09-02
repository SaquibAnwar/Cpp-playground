// Given an integer n, return an array containing n unique integers such that they add up to 0.

// Input Format
// First line contains an integers n.

// Constraints
// None

// Output Format
// Array integers summing upto 0.

// Sample Input
// 5
// Sample Output
// -2 -1 0 1 2

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> v;
    int n1 = floor(n/2);
    for(int i = 1; i <= n1; i++)
    {
        v.push_back(i);
        v.push_back(-1*i);
    }
    if(n%2 == 1)
        v.push_back(0);

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}