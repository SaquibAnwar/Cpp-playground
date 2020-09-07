// Given an array having n elements representing balls of various colours like red, white or blue, sort them in-place so that balls of the same colour are adjacent, with the colours in the order red, white and blue.
// To represent the colour red, white, and blue we will use the integers 0, 1, and 2 respectively.
// Note:You are not suppose to use the sort function for this problem.

// Input Format
// First line contains integer n as size of array. Next n lines contains a single integer as element of array.

// Constraints
// None

// Output Format
// Print the balls in order so that balls of same colour are adjacent.

// Sample Input
// 6
// 2 0 2 1 1 0
// Sample Output
// 0 0 1 1 2 2 

#include<bits/stdc++.h>

using namespace std;

void sortingInLinearTime(vector<int> &v)
{
    int left = 0, right = v.size()-1, curr = 0;

    while(curr <= right)
    {
        if(v[curr] == 0)
        {
            swap(v[left], v[curr]);
            left++; 
            curr++;
        }
        else if(v[curr] == 2)
        {
            swap(v[curr], v[right]);
            right--;
        }
        else
        {
            curr++;
        }
    }
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

    sortingInLinearTime(v);
    
    for(auto i: v)
        cout << i << " ";
    cout << endl;
}