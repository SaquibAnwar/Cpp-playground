// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Input Format
// First Line Contains Single Integer n. Next line contain n strings

// Constraints
// length of strings is less than 1e5

// Output Format
// Single String

// Sample Input
// 3
// aad aas aac
// Sample Output
// aa

#include<bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> v)
{
    if(v.size() == 0)
        return "";

    string ans = v[0];
    for(int i = 1; i < v.size(); i++)
    {
        string temp = "";
        for(int j = 0; j < min(ans.length(), v[i].length()); j++)
        {
            if(ans[j] == v[i][j])
                temp += ans[j];
            else
                break;
        }
        ans = temp;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++)
    {   
        string x;
        cin >> x;
        v.push_back(x);
    }

    string ans = longestCommonPrefix(v);
    cout << ans << endl;
}