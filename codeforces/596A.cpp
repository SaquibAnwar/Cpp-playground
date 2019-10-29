#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a == 9 and b == 1){
        int x = a*100 + 99;
        cout << x << " " << x+1;
    }
    else if(b-a == 1){
        int x = a*100 + 99;
        cout << x << " " << x+1;
    }
    else if(a-b == 0){
        int x = a*100 + (rand()%10);
        cout << x << " " << x+1;
    }
    else
    {
        cout << "-1";
    }
    
}