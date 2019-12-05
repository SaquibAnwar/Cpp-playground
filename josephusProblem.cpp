#include<bits/stdc++.h>


using namespace std;

int winner(int n, int k){
    if(n == 1){
        return 0;
    }

    int ans = (winner(n-1, k)+k)%n;
    return ans;
}


int main(){
    int n, k;
    cin >> n >> k;

    int ans = winner(n,k);
    cout << ans << endl;
}