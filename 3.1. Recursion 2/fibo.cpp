#include <iostream>

using namespace std;

#define ll long long int

ll fibo(int n){
    if(n == 0 || n == 1)
        return  n;
     
    return fibo(n-1) + fibo(n-2);
}

//0 1 1 2 3 5 8 13
int main(){
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        ll a = fibo(i);
        cout << a << " ";
    }
    cout << endl;
}