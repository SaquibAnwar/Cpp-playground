// Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list. word1 and word2 may be the same and they represent two individual words in the list.

// Input Format
// First line contains input N. Next line contains N space separated String denoting the elements of the array. third line contains word1 and word2

// Constraints
// None

// Output Format
// Shortest Distance between word1 and word 2

// Sample Input
// 5
// practice  makes perfect coding makes 
// makes makes  
// Sample Output
// 3

#include<bits/stdc++.h>

using namespace std;

int wordDistance(vector<string> v, string w1, string w2)
{
    int Min = v.size();
    if(w1 == w2)
    {
        int p = -1;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == w1)
            {
                if(p == -1)
                    p = i;
            }
            else
            {
                Min = min(Min, abs(p-i));
                p = i;
            }
        }
    }
    return Min;
}

int main()
{
    int n;
    cin >> n;

    vector<string> a;
    string x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    string word1;
    cin >> word1;
    string word2;
    cin >> word2;

    cout << wordDistance(a, word1, word2) << endl;
}