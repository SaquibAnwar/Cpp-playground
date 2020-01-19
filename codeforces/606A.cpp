#include<bits/stdc++.h>

using namespace std;

int check(long i){
    vector<int> v;

    while(i > 0){
        v.push_back(i%10);
        i = i/10;
    }
    int t = 0;
    for(int i = 0; i < v.size()-1; i++){
        if(v[i] != v[i+1]){
            t=1;
            break;
        }
    }

    return (t == 0)?1:0;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        int ans = 0;
        long i = 10;
        if(n < 10){
            ans = n;
        }
        else{
            ans = 9;
            while(i <= n){
                ans += check(i);
                i++;
            }
        }

        cout << ans << endl;
    }
}