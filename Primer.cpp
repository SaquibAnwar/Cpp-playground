#include<bits/stdc++.h>

using namespace std;

int main()
{
    string A = "interviewbit";
    string ans = "";
    int k = 0;
    for(int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] == 'a' || A[i] == 'e' or A[i] == 'i' or A[i] == 'o' || A[i] == 'u')
            ans += A[i];
    }
    
    cout << ans << endl;
}