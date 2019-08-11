#include<bits/stdc++.h>
#define MAX_N 100005
int reset[MAX_N];

using namespace std;

void KMPpreprocessing(string pat){
    int i = 0, j = -1;
    reset[0] = -1;
    while(i < pat.size()){
        // check for resetting
        while(j >= 0 and pat[i] != pat[j]){
            j = reset[j];
        }
        i++;
        j++;
        reset[i] = j;
    }
}

void KMPsearch(string str, string pat){
    KMPpreprocessing(pat);
    int i = 0, j = 0;
    while(i < str.size()){
        while(j >= 0 and str[i] != pat[j]){
            j = reset[j];
        }
        i++;
        j++;
        if(j == pat.size()){
            cout << "Pattern is found at " << i-j << endl;
            j = reset[j];
        }
    }
}

int main(){
    string str = "ababcabdababd";
    string pat = "abd";

    for(int i = 0; i < MAX_N; i++){
        reset[i] = -1;
    }
    KMPsearch(str, pat);

    return 0;
}