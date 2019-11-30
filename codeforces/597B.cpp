#include<bits/stdc++.h>

using namespace std;

string str;
bool mukabla(char *s, int a, int b, int c, int n){
    int count = 0;
    int k = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            if(a > 0){
                a--;
                str[k++] = 'P';
                count++;
            }
            else{
                if(count >= n/2){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(s[i] == 'P'){
            if(b > 0){
                b--;
                str[k++] = 'S';
                count++;
            }
            else{
                if(count >= n/2){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(s[i] == 'S'){
            if(c > 0){
                c--;
                str[k++] = 'R';
                count++;
            }
            else{
                if(count >= n/2){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a, b, c;
        cin >> a >> b >> c;
        char s[n];
        cin >> s;
        bool ans = mukabla(s, a, b, c, n);
        if(ans){
            cout << "YES\n";
            for(int i = 0; s[i] != '\0'; i++){
                cout << str[i];
            }
        }
        else{
            cout << "NO\n" << endl;
        }
        str.clear();
    }
}