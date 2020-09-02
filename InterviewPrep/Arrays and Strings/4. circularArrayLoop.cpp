// You are given an array of positive and negative integers. 
//If a number k at an index is positive, then move forward k steps. 
//Conversely, if it's negative (-k), move backward k steps. 
//Since the array is circular, you may assume that the last element's next element is the first element, 
//and the first element's previous element is the last element.

// Determine if there is a loop (or a cycle) in array. 
//A cycle must start and end at the same index and the cycle's length > 1. 
//Furthermore, movements in a cycle must all follow a single direction. 
//In other words, a cycle must not consist of both forward and backward movements. 
//Print 1 if cycle present else print 0.

// Input Format
// First Line Contains single integer n Second line contains n space separated integers

// Constraints
// 1<=n<=1e6
// -1000<=Ai<=1000

// Output Format
// single digit 1 or 0

// Sample Input
// 5
// 2 -1 1 2 2
// Sample Output
// 1

#include<bits/stdc++.h>

using namespace std;

// to return the next index
int next(vector<int> a, int i)
{
    return (i+a[i]+a.size())%a.size();
}

bool CircularLoop(vector<int> v)
{
    int n = v.size();
    for(int i = 0; i < n; i++)
    {
        int slow = i, fast = i;
        if(v[i] == 0)
            continue;

        while(v[slow]*v[next(v,slow)] > 0 &&
            v[fast]*v[next(v,fast)] > 0 &&
            v[fast]*v[next(v,next(v,fast))] > 0)
            {
                slow = next(v, slow);
                fast = next(v, next(v, fast));

                if(slow == fast)
                {
                    //Cycle is present, but cycle length should be > 1
                    if(slow == next(v, slow))
                        break;
                    
                    return true;
                }
            }

        slow = i;
        int val = v[slow];
        while(val*v[slow] > 0)
        {
            int x = slow;
            slow = next(v, slow);
            v[x] = 0;
        }
    }

    return false;
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
    cout << CircularLoop(v) << endl;
}