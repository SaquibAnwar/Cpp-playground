// Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

// (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

// Find the minimum element.

// You may assume no duplicate exists in the array.

// Input Format
// First line contains an integers n i.e number of array elements. following line contains n integers representing array.

// Constraints
// None

// Output Format
// A single integer denoting minimum element.

// Sample Input
// 7
// 3 4 5 6 0 1 2
// Sample Output
// 0

#include<bits/stdc++.h>

using namespace std;

int findMin(vector<int> v)
{
    int start = 0, end = v.size()-1;
    int minimum = INT_MAX;

    while(start <= end)
    {
        int mid = (start+end)/2;
        minimum = min(minimum, v[mid]);

        if(v[start] > v[end])
            start = mid+1;
        else 
            end = mid-1;
    }
    return minimum;
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

    cout << findMin(v) << endl;

}
