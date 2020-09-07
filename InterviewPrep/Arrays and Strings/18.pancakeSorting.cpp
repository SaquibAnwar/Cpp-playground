// Sharadh bhaiya is playing a game of pancakeflip .
// He has given his students an array 'A' in which they can perform a pancake flip.
// The task is to choose some positive integer k<= A.length, then reverse the order of the first k elements of A.
//  Return the k-values corresponding to a sequence of pancake flips that sort A.
//  Note:Any valid answer that sorts the array within 10 * A.length flips will be judged as correct. 
// go to this link Pancake Sorting leetcode

// Input Format
// First line contains t number of testcases. Second line contains integer n as size of array. Next line contains n integer as element of array.

// Constraints
// 1 <= A.length <= 100 A[i] is a permutation of [1, 2, …, A.length]

// Output Format
// Print the k-values corresponding to a sequence of pancake flips that sort array.

// Sample Input
// 1
// 4
// 3 2 4 1
// Sample Output
// 3 4 2 3 1 2 

#include<bits/stdc++.h>

using namespace std;

int find(vector<int> a, int n)
{
    for(int i = 0; i < a.size(); i++)
        if(a[i] == n)
            return i;
    
    return -1;
}

void flip(vector<int> a,  int k)
{
    for(int i = 0; i < k/2; i++)
        swap(a[i], a[k-i-1]);
}

vector<int> PancakeSort(vector<int> a)
{
    vector<int> list;
    int n = a.size();
    while(n > 0)
    {
        int idx = find(a, n);
        if(idx != n-1)
        {
            flip(a, idx+1);
            flip(a, n);
            list.push_back(idx+1);
            list.push_back(n);
        }
        n--;
    }
    return list;
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

    vector<int> ans = PancakeSort(v);
    for(auto i: ans)
    {
        cout << i << " ";
    }
    cout << endl;
}