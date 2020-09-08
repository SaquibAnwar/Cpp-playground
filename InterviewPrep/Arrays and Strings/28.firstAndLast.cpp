// Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array. Note:- If the x is not found in the array, print -1 -1

// Input Format
// The first line contains two integers n and x. The second line contains n spaced integers.

// Constraints
// 1<n <10^8

// -1< arr[i]<10^9

// Output Format
// Print index of the first and last occurrences of the number x with a space in between.

// Sample Input
// 9 7
// 1 3 5 5 5 5 7 123 125
// Sample Output
// 6 6

#include<bits/stdc++.h>

using namespace std;

int FirstIndex(vector<int> v, int target)
{
    int s = 0, e = v.size()-1;
    int first = 0;
    while(s <= e)
    {
        int mid = (s + e)/2;
        
        if(v[mid] == target)
        {
            first = mid;
            e = mid-1;
        }
        else if(v[mid] < target)
            s = mid+1;
        else
            e = mid-1;
    }

    return first;
}

int LastIndex(vector<int> v, int target)
{
    int s = 0, e = v.size()-1;
    int last = 0;
    while(s <= e)
    {
        int mid = (s + e)/2;
        
        if(v[mid] == target)
        {
            last = mid;
            s = mid+1;
        }
        else if(v[mid] < target)
            s = mid+1;
        else
            e = mid-1;
    }

    return last;
}

int main()
{
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << FirstIndex(v, target) << endl;
    cout << LastIndex(v, target) << endl;
}