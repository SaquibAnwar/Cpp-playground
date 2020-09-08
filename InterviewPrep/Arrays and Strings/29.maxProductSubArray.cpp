// Given an integer array arr, find the contiguous subarray within an array (containing at least one number) which has the largest product.

// Input Format
// Take input N. Next line N contains elements of array, denoting the elements of array.

// Constraints
// It is assured that the product does not exceed 10^16.

// Output Format
// print largest product.

// Sample Input
// 15 
// 1
// 2
// 2
// 1
// 2
// 3
// 4
// 5
// 6
// 1
// 2
// 3
// 4
// 5
// 7
// Sample Output
// 2419200

#include<bits/stdc++.h>

using namespace std;

int maxProduct(vector<int> v)
{
    if(v.size() == 1)
        return v[0];

    int np = 1, pp = 1, Max = INT_MIN;
    bool hasZero = false, hasPos = false;

    for(auto i : v)
    {
        if(i > 0)
        {
            hasPos = true;
            pp *= i;
            if(np != 1)
                np *= i;
        }
        else if(i < 0)
        {
            int temp = pp;
            pp = max(np*i, 1);
            np = temp*i;
        }
        else
        {
            np = pp = 1;
            hasZero = true;
        }

        if(Max < pp)
            Max = pp;
    }

    if(Max == 1)
    {
        if(hasPos) return Max;
        if(hasZero) return 0;
    }

    return Max;
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

    cout << maxProduct(v) << endl;
}