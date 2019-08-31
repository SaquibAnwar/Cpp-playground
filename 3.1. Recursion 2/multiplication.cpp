#include<iostream>

using namespace std;

int multiply(int a, int b){
    int mult = 0;
    if(b > 0){
        if(b == 1){
            return a;
        }

        mult = a;
        mult += multiply(a, b-1);
    }
    if(b < 0){
        if(b == -1){
            return -a;
        }

        mult = -a;
        mult += multiply(a, b+1);
    }
    return mult;
}


int main(){
    int a, b;
    cin >> a >> b;
    int x = multiply(a, b); 
    cout << x << endl;
    return 0;
}