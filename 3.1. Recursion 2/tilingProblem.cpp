#include<iostream>

using namespace std;

#define ll long long int

int main(){
    
    int T;
    cin >> T;
    
    while(T--){
        int n;
        cin >> n;
    
        ll * a = new ll[n+1];
        ll ans = 0;
        a[0] = 1;
        a[1] = 1;

        for(int i = 2; i <= n; i++){
            a[i] = a[i-1] + a[i-2];
            ans = a[n];
        }
        
        delete [] a;
        cout << ans << endl;
    }
    return 0;
}