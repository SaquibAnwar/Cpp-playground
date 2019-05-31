#include <iostream>

using namespace std;

int main(){
    int i = 10;
    int *p = &i;
    cout<< sizeof(p)<<endl;
    cout<< i <<endl;
    cout<< *p << endl;

    i++;

    cout<< i <<endl;
    cout<< *p << endl;

    i = 12;
    *p = 23;

    cout<< i << endl;

    (*p)++;

    cout<< *p <<endl;

    int *q = p;
    cout<<*q<<endl;

    return 0;
}