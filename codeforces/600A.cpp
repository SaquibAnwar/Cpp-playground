#include<bits/stdc++.h>

using namespace std;

bool check(){
    int n;
    int a[100001];
    int b[100001];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int l = 0, r = 0, k = 0;
    int i = 0;
    for(i = 0; i < n; i++){
        if(a[i] == b[i]){
            continue;
        }else{
            l = i;
            k = b[i] - a[i];
            break;
        }
    }

    if(i == n-1){
        return true;
    }
    if(k < 0){
        return false;
    }
    r = l;
    while(a[r] != b[r]){
        r++;
    }
    cout <<"l : " << l << " r : " << r << endl;
    for(int i = l; i < r; i++){
        a[i] += k;
    }

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}



int main(){
    int t;
    cin >> t;
    
    while(t--){
        bool ans = check();
        cout << ans? "YES\n":"NO\n";
    }
        
}