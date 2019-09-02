#include<bits/stdc++.h>

using namespace std;

void printPatt(int n)
{
    //write your code here
    for(int i = 0; i < n; i++){
        int k = 0;
        while(k < i){
            cout << " ";
            k++;
        }
            
        for(int j = n-i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}

void printPatt1(int n)
{
    //write your code here
    for(int i = 0; i < n; i++){
        for(int j = n-i; j > 0; j--){
            cout << " * ";
        }
        cout << endl;
    }
}


int main(){
    printPatt(5);
}