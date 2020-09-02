// Ram is very good at mathematics. He was given a number n and was told to 
// find out number of trailing zeroes in n! in logarithmic time. Can you help him?

// Input Format
// An integer n

// Constraints
// n can go upto 2000

// Output Format
// An integer denoting number of trailing zeroes

// Sample Input
// 5
// Sample Output
// 1
// Explanation
// 5! is 120, so there is one trailing zero.

#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int countZeros = 0;
    while(n > 0)
    {
        n /= 5;
        countZeros += n;
    }

    return countZeros;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}