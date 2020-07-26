#include<iostream>

using namespace std;

int countZeros(int n)
{
    if(n <= 0)
        return 0;

    int ans = countZeros(n/10);

    return ((n%10 == 0) ? ans+1 : ans);
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}