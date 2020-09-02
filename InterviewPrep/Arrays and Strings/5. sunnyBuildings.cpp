#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans, maxh;
    ans = maxh = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] >= maxh)
            ans++;

        maxh = max(maxh, a[i]);
    }

    cout << ans << endl;
}