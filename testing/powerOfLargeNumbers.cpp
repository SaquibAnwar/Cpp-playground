#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
       
        int q = 2;
        int arr[100000] = {0};
        arr[0] = a;
        int len = 1;
        int x= 0;
        int num = 0;
        while(q <= b){
            int x = 0;
            int num = 0;
            while(x < len){
                arr[x] = arr[x] * arr[x];
                arr[x] = arr[x] + num;
                num = arr[x]%10;
                arr[x] = arr[x]/10;
                x++;
            }
        }
    }
}