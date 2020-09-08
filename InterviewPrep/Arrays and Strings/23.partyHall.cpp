// Given an array of meeting time intervals consisting of start and end times [[S1,E1],[S2,E2],…] (SI < EI), find the minimum number of party halls required.

// Input Format
// Take input N
// Next N line consists of two space-separated integers SI and EI

// Constraints
// None

// Output Format
// print minimum required room

// Sample Input
// 5
// 1 4 
// 2 5
// 3 6
// 10 11
// 11 12
// Sample Output
// 3

#include<bits/stdc++.h>

using namespace std;

int partyHalls(vector<int> start, vector<int> end)
{
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    int partyHalls = 0, ans = 0;
    int i = 0, j = 0;

    while(i < start.size() and j < end.size())
    {
        if(start[i] < end[j])
        {
            partyHalls++;
            i++;
        }
        else
        {
            partyHalls--;
            j++;
        }

        ans = max(ans, partyHalls);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> start, end;

    for(int i = 0; i < n; i++);
    {
        int x, y;
        cin >> x >> y;
        start.push_back(x);
        end.push_back(y);
    }

    cout << partyHalls(start, end) << endl;
}