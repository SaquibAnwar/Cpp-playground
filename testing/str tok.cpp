#include<bits/stdc++.h>

using namespace std;

void tokenizer(string str){
    for(size_t i=0; i<str.length(); i++){
        char c = str[i];
        if( c == ' ' ){
            cout << endl;
        }else if(c == '\"' ){
            i++;
            while( str[i] != '\"' ){ cout << str[i]; i++; }
        }else{
            cout << c;
        }
    }
}

int main(){
    string s = "add string \"this is a string with space!\"";
    tokenizer(s);
}