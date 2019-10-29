#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, d;
        cin >> n >> k >> d;
        int * a = new int[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        unordered_map <int, int> mp;
        
        int min = INT_MAX;
        for(int i = 0; i <= n-d; i++){
            for(int j = i; j < i+d; j++){
                int key = a[j];
                if(mp.count(key) == 0){
                    mp[key] = 1;
                }
                else{
                    mp[key]++;
                }
            }
            if(min > mp.size()){
                min = mp.size();
            }
            mp.clear();
        }

        cout << min << endl;
    }
}