#include<iostream>
using namespace std;

void ans (int n, string S)
{
    // Write your code here
    for(int i = 0; i < n; i++){
        S[i] = (toupper(S[i]));
    }
    int T;
    for(char i = 65; i < 65+26; i++){
        T = 0;
        for(int j = 0; j < n; j++){
            if(i == S[j]){
                T = 1;
            }
        }
        if(T == 0){
            break;
        }
    }

    if(T == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
}

int main(){
    string str = "toosmallword";
    ans(str.length(), str);
}