#include<bits/stdc++.h>

using namespace std;

void convert(string s){
    int count = 0;
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(isupper(s[i]))
            count++;
    }

    if(count > len/2){
        for(int i = 0; i < len; i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i = 0; i < len; i++){
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
}


int main(){
    string s;
    cin >> s;
    convert(s);
}