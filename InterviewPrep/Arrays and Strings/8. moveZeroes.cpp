// Given an array A, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Input Format
// First line contains integer n as size of array. next n lines contains a single integer as element of array.

// Constraints
// Note: Do this in-place without making a copy of the array and Minimize the total number of operations.

// Output Format
// Print the output Array.

// Sample Input
// 5
// 0 
// 1 
// 0 
// 3
// 12
// Sample Output
// 1 3 12 0 0


#include<bits/stdc++.h>

using namespace std;

void MoveZeros(vector<int> &v)
{
    int i, j;
    i = j = 0;
    while(i < v.size())
    {
        if(v[i] == 0)
        {
            i++;
        }
        else if(v[i] != 0 && v[j] == 0)
        {
            swap(v[i], v[j]);
            j++;
        }
        else if(v[i] != 0)
        {
            i++;
            j++;
        }
    }

    for(int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }
    cout << endl;
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

    MoveZeros(v);
}