// You have to given an array A of size N.
// Find all the elements which appear more than floor(N/3) times in the given array.
// Wait Wait!
// There is a condition that you have to do your job in O(N) time complexity and O(1) space complexity.

// Input Format
// First line contains N ->No. of elements in the array
// Second line has N integers denoting the elements of the array A ie A1,A2,A3…….AN.

// Constraints
// 1<=N<=10^7
// 0<=Ai<=10^9

// Output Format
// Print a single line containing all the majority elements occurring more than floor(N/3) times.
// If there is no majority element then just print "No Majority Elements".

// Sample Input
// 8
// 2 2 3 1 3 2 1 1 
// Sample Output
// 1 2


#include<iostream>
#include<vector>

using namespace std;

vector<int> majorityElement(vector<int> v)
{
    int element1 = v[0];
    int count1 = 0;

    int element2 = 0;
    int count2 = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == element1)
        {
            count1++;
        }
        else if (v[i] == element2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            element1 = v[i];
            count1++;
        }
        else if (count2 == 0)
        {
            element2 = v[i];
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    //To check if the the count is greater than N/3
    count1 = count2 = 0;
    vector<int> ans;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == element1)
        {
            count1++;
        }
        else if (v[i] == element2)
        {
            count2++;
        }
    }

    if(count1 > v.size()/3)
        ans.push_back(element1);
    if(count2 > v.size()/3)
        ans.push_back(element2);

    return ans;
}


int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    vector<int> ans;
    ans = majorityElement(v);
    if(ans.size() == 0)
    {
        cout << "None";
    }
    else
    {
        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    cout << endl;
}