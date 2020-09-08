// Given an array of integers, 1 ≤ arr[i] ≤ n (n = size of array), some elements appear twice and others appear once.

// Find all the elements that appear twice in this array.
// __ Answer must be sorted

// Input Format
// 1.it reads a number N.

// 2.Take Another N numbers as an input and store them in an Array.

// Constraints
// Time Complexity O(N)

// Output Format
// print all the elements that appear twice in this array

// Sample Input
// 8
// 4 3 2 7 8 2 3 1
// Sample Output
// [2, 3]

#include<bits/stdc++.h>

using namespace std;

vector<int> freqTwo(vector<int> v)
{
    vector<int> ans;

    for(int i = 0; i < v.size(); i++)
    {
        int index = abs(v[i]);
        if(v[index-1] < 0)
        {
            ans.push_back(v[index]);
        }
        else
        {
            v[index-1] *= -1;
        }
    }
    return ans;
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

    vector<int> ans = freqTwo(v);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}