#include <bits/stdc++.h>

using namespace std;

float squareroot(int n, int p){
    int s = 0, e = n;
    float ans;
    while(s <= e){
        int mid = (e+s)/2;
        if(mid*mid == n){
            ans = mid;
        }
        else if(mid*mid < n){
            s = mid+1;
            ans = mid;
        }
        else{
            e = mid-1;
        }
    }


    //fractional part
    float inc = 0.1;

    for(int i = 0; i < p; i++){
        while(ans*ans <= n){
            ans += inc;
        }
        //ans*ans > n
        ans -= inc;
        inc /= 10;
    }

    return ans;
}


int main(){
    cout << squareroot(10, 3) << endl;
    cout << squareroot(13, 4) << endl;
    cout << squareroot(48, 2) << endl;
}