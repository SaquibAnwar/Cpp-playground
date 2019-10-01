#include<bits/stdc++.h>

using namespace std;

void reverse(string s){
    for(int i = s.size()-1; i >=0; i--){
        cout << s[i];
    }
    cout << " ";
}


int main(){
    char s[100];
    cin.getline(s, 100);
    char *ptr;

    vector<string> v;
    ptr = strtok(s, " ");

    while(ptr != NULL){
        v.push_back(ptr);
        ptr = strtok(NULL, " ");
    }

    for(int i = 0; i < v.size(); i++){
        reverse(v[i]);
    }
}