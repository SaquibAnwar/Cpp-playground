#include<bits/stdc++.h>

using namespace std;

int balancedStringSplit(string s) {
        int countL = 0, countR = 0;
        vector<char> v;
        int ans = 0;
        int i = 0;
        while(i != s.size()){
            if(s[i] == 'L'){
                countL++;
                i++;
                v.push_back(s[i]);
                while(s[i] != 'R'){
                    countL++;
                    v.push_back(s[i]);
                    i++;
                }
                int j = i;
                for(; j <= countL; j++){
                    if(s[j] == 'R'){
                        countR++;
                        v.push_back(s[j]);
                    }
                    // if(s[j] == 'L'){
                    //     ans++;
                    //     for(int i = 0; i < v.size(); i++){
                    //         cout << v[i];
                    //     }
                    //     cout << endl;
                    //     v.clear();
                    // }
                }
                if(countL == countR)
                    ans++;
                i = j;
            }
            
            if(s[i] == 'R'){
                countR++;
                i++;
                while(s[i] != 'L'){
                    countR++;
                    i++;
                    v.push_back(s[i]);
                }
                int j = i;
                for(; j <= countR; j++){
                    if(s[j] == 'L'){
                        countL++;
                        v.push_back(s[j]);
                    }
                    // if(s[j] == 'R'){
                    //     ans++;
                    //     for(int i = 0; i < v.size(); i++){
                    //         cout << v[i];
                    //     }
                    //     cout << endl;
                    //     v.clear();
                    // }
                }
                if(countL == countR)
                    ans++;
                i = j;      
            }
        }
        return ans;
}




int main(){
    string s;
    cin >> s;
    int n = balancedStringSplit(s);
    cout << n << endl;
}