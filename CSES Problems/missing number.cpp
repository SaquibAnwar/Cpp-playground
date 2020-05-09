#include<bits/stdc++.h>

using namespace std;

int main(){
    long n;
    cin >> n;
    long* v = new long[n]; 

    for(long i = 0; i < n; i++){
        v[i] = 0;
    }

    for(long i = 0; i < n-1; i++)
    {
        long num;
        cin >> num;
        v[num] = 1;
    }

    for(long i = 0; i < n; i++)
    {
        if(v[i] == 0){
            cout << i << endl;
            break;
        }
    }

    delete [] v;
}