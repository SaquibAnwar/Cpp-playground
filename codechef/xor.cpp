#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int z;
        cin >> z;
        int x, y = 10;
        for(x = 2; x < z, y > z; x++, y--){
            if(z+x == x^z and z+y == y^z){
                cout << x << " " << y << endl;
                break;
            }
        }
    }
}