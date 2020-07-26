#include<iostream>

using namespace std;

int main()
{
    int a[10];
    a[0] = 10;
    a[1] = 20;

    cout << &a << endl; 
    cout << a << " " << a[0] << " " << *a << " " << 0[a] << endl;
    cout << a+1 << " " << a[1] << " " << *(a+1) << " " << 1[a] << endl;
}