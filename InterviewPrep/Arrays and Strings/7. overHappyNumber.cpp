// A 'overhappy' number follows the following criteria:

// It is always a positive integer. 
// The integer number is replaced by the sum of the squares of its digits and 
// this process is repeated until the sum equals 1.
// The numbers which loop endlessly and never reach to the sum of 1 are not overhappy numbers.

// Input Format
// First line contains an positive integer n.

// Constraints
// None

// Output Format
// Print true if n is overhappy number else print false.

// Sample Input
// 19
// Sample Output
// true

#include<bits/stdc++.h>

using namespace std;


bool helper(map<int, bool> m, int n)
{
    if(n == 1)
        return true;

    if(m.find(n) != m.end())
        return false;

    m.insert(make_pair(n, true));

    int sum = 0;
    while(n > 0)
    {
        int d = n%10;
        sum += d*d;
        n /= 10;
    }

    n = sum;

    return helper(m, n);
}

bool isHappy(int n)
{
    map<int, bool> m;
    return helper(m , n);
}

int main()
{
    int n;
    cin >> n;
    bool ans = isHappy(n);
    cout << ans << endl;
}