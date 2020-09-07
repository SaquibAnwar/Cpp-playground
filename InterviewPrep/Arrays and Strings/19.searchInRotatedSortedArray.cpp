// Given an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
// (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
// You are given a target value to search. If found in the array return its index, otherwise return -1.
// Note:You may assume no duplicate exists in the array.

// Input Format
// First line contains size of Array. Second line contains n elements of Array. Third line contains target elements.

// Constraints
// Your algorithm's runtime complexity must be in the order of O(log n).

// Output Format
// Print the index of element if found , otherwise print -1.

// Sample Input
// 7
// 4 5 6 7 0 1 2
// 0
// Sample Output
// 4

#include<bits/stdc++.h>

using namespace std;

int SearchInArray(vector<int> v, int num)
{
    int n = v.size();
    int s = 0;
    int e = n-1;

    while(s <= e)
    {
        //4 5 6 7 8 0 1 2
        int mid = (s + e)/2;

        if(v[mid] == num)
            return mid;
        else if(v[mid] > v[e])
        {
            if(num > v[mid] or num < v[s])
                s = mid + 1;
            else
                e = mid - 1;
        }
        else
        {
            if(num < v[mid] or num > v[e])
                e = mid - 1;
            else
                s = mid + 1;
        }
    }
    return -1;
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

    int k;
    cin >> k;

    cout << SearchInArray(v, k) << endl;
}