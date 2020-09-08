// A peak element is an element that is greater than its neighbors.

// Given an input array arr, where arr[i] ≠ arr[i+1], find a peak element if exists return true else return false.
// You may imagine that arr[ -1 ] = arr[ n ] = -∞.

// Input Format
// A single integer, N, denoting the number of elements in array. Next line contains N integers, denoting the elements of array.

// Constraints
// n<1000000

// Output Format
// if peak element is present print true else print false

// Sample Input
// 13
// 1 2 1 3 5 6 4 8 5 7 9 11 10
// Sample Output
// true

#include<bits/stdc++.h>

using namespace std;

bool hasPeakElement(vector<int> v, int s, int e)
{
    if(s > e)
        return false;

    if(s == e)
        return true;
    
    int mid = (s + e)/2;

    if(v[mid] < v[mid+1])
        return hasPeakElement(v, mid+1, e);

    return hasPeakElement(v, s, mid);
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

    bool ans = hasPeakElement(v, 0, v.size()-1);
    if(ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}