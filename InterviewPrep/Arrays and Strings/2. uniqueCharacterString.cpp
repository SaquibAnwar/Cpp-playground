// Ramu has an array of strings. 
// He want to find a string s such that it is a concatenation of sub-sequence of given array and have unique characters.
// Since,he has just started coding so he needs your help.
// A sub-sequence of an array is a set of elements that can be obtained by deleting some elements(posssibly none) from the array 
// and keeping the order same.
// Print the maximum possible length of s.

// Input Format
// The first line of input contains an interger n -the length of array.Next n lines contains the element(strings) of the array

// Constraints
// 1 <= n <= 18, 1 <= arr[i].length<= 26

// Output Format
// Print one integer - the maximum length of s.

// Sample Input
// 3
// ab
// cd
// ab
// Sample Output
// 4

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int Helper(vector<string> v, int i, string s)
{
    if(i >= v.size())
    {
        if(s.length() > 26)
            return 0;

        int freq[26] = {0};
        for(int j = 0; j < s.length(); j++)
        {
            if(freq[s[j]-'a'] == 1)
                return 0;

            freq[s[j]-'a']++;
        }
        return s.length();
    }

    int op1 = INT_MIN, op2 = INT_MIN;

    //Including the ith string
    if(s.length() + v[i].length() <= 26)
    {
        op1 = Helper(v, i+1, s+v[i]);
    }

    //excluding the ith string
    op2 = Helper(v, i+1, s);

    return max(op1, op2);
}

int UniqueString(vector<string> v)
{
    return Helper(v, 0, "");
}

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    cout << UniqueString(v) << endl;
}