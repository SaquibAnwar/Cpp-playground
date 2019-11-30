#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int arr[100] = {0};
        int count = 0;
        for(int i = 0 ; i < 100; i++){
            if(i == 0){
                arr[i] = 1;
                count++;
            }
            else if(i >= a  and arr[i-a] == 1){
                arr[i] = 1;
                count++;
            }
            else if(i >= b  and arr[i-b] == 1){
                arr[i] = 1;
                count++;
            }
        }
        if(count > 50){
            cout << "Finite" << endl;
        }
        else{
            cout << "Infinite" << endl;
        }
    }
}