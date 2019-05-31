#include <iostream>

using namespace std;

int factorial(int n){
    //cout<<n<<endl;
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


int main(){
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
}