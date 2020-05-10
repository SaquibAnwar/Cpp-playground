#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n;
    cin >> n;
    ll* v = new ll[n+1]; 

    for(ll i = 1; i <= n; i++){
        v[i] = 0;
    }

    for(ll i = 1; i < n; i++)
    {
        ll num;
        cin >> num;
        v[num] = 1;
    }

    for(ll i = 1; i <= n; i++)
    {
        if(v[i] == 0){
            cout << i << endl;
            break;
        }
    }

    delete [] v;
}