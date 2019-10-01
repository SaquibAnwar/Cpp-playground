#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        stack<int> s;
        for(int i = n-1; i > 0; i--){
            s.push(arr[i]);
        }
        
        int i = 0;
        int x = 0;
        int sum = 0;
        while(!s.empty() && i != n-1){
            x = s.top();
            static int c = 1;
            if(arr[i] < x){
                if(i == 1){
                    sum += x;
                }
                else{
                    sum = sum + (c*x);
                    c=1;
                }
                i++;
                s.pop();
            }
            else{
                c++;
                s.pop();
            }
        }
        cout << sum << endl;
        t--;
    }
}

// 133+161+311+512+512+1212+19212+19212+0 