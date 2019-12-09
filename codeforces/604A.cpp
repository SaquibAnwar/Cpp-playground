#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        string str;
        cin >> str;
        vector<string>v;
        int i = 0;
        while(str[i] != '\0'){
            string c;
            int k = 0, j = 0;

            while(str[j] != '.'){
                c[k++] = str[j++];
            }
            v.push_back(c);
        }

        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
    }
}