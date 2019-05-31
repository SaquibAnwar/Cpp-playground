#include <iostream>

using namespace std;

int main(){
    int i = 10;
    cout<<&i<<endl;
    int * p = &i;
    cout<<p<<endl;

    cout<< *p << endl;

    float f = 10.2;
    float *pf = &f;

    double d = 122.36;
    double *pd = &d;

    cout<<pf<<endl<<pd<<endl;

    return 0;
}