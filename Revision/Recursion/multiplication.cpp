#include<iostream>

using namespace std;

int multiplyNumbers(int m, int n) {
    // Write your code here
if(n==1)
{return m;}
    return m+multiplyNumbers(m,n-1);
}

int multiply(int n, int m)
{
    if(m == 0 || n == 0)
        return 0;

    if(m == 1)
        return n;

    return n + multiply(n, m-1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    //cout << multiplyNumbers(n, m) << endl;
    cout << multiply(n,m) << endl;
    
}