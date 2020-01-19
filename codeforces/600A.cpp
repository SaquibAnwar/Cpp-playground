#include<bits/stdc++.h>

using namespace std;

bool check(int n){
        int a[100000];
        int b[100000];
        int size = n+2; 
        vector<int>v(size, 0
        );

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        for(int i = 1; i <= n; i++){
            cin >> b[i];
            v[i] = b[i] - a[i];
        }

        int count = 0;
        for(int i = 0; i < size-1; i++){
            if(v[i] < 0){
                return false;
            }
            if(v[i] != v[i+1]){
                ++count;
            }
        }

        return (count <= 2);

}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ans = check(n);

        if(ans){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}