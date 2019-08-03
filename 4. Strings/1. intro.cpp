#include<iostream>

using namespace std;

int main(){
    char a[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    cout << a << endl;
    cout << sizeof(a) << endl;

    char b[] = "hello";
    cout << b << endl;
    cout << sizeof(b) << endl;

    char c[100];
    //cin >> c;
    cin.getline(c, 100);
    cout << c << endl;

    char d[1000];
    cin.getline(d, 100, '.');
    cout << d << endl;

}