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