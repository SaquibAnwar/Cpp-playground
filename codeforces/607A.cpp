#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n = s.size();

        if(s[n-1] == 'o'){
            cout << "FILIPINO" << endl;
        }
        else if(s[n-1] == 'a'){
            cout << "KOREAN\n";
        }
        else if(s[n-1] == 'u'){
            cout << "JAPANESE\n";
        }
    }
}