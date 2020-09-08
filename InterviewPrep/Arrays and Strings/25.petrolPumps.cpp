// There are N petrol pumps along a circular route, where the amount of gas at pump i is gas[i].
// You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from pump i to its next pump (i+1). You begin the journey with an empty tank at one of the petrol pumps.
// Return the starting petrol pump's index if you can travel around the circuit once in the clockwise direction, otherwise return -1.

// Input Format
// Take input N denotes N gas stations along a circular route The first N line contains integers representing the amount of gas at station i is gas[i]. The next N line contains integers representing the amount of cost[i]

// Constraints
// Note:
// If there exists a solution, it is guaranteed to be unique.
// Both input arrays are non-empty and have the same length.
// Each element in the input arrays is a non-negative integer.

// Output Format
// print the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise print -1.

// Sample Input
// 6 
// 1
// 4
// 2 
// 3 
// 6 
// 2
// 2
// 3 
// 4 
// 5 
// 6 
// 7
// Sample Output
// -1

#include<bits/stdc++.h>

using namespace std;
int complete(vector<int> p, vector<int> c)
{
    int net = 0, cur = 0, start = 0;
    
    for(int i = 0; i < p.size(); i++)
    {
        net += p[i] - c[i];
        cur += p[i] - c[i];

        if(cur < 0)
        {
            cur = 0;
            start = i+1;
        }
    }

    if(net < 0)
        return -1;

    return start;
}

int main()
{
    int n;
    cin >> n;
    vector<int> petrol, cost;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x;
        cin >> y;
        petrol.push_back(x);
        cost.push_back(y);
    }

    cout << complete(petrol, cost) << endl;
}