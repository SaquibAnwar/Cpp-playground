#include<iostream>

using namespace std;

int main()
{
    int i;
    cout << &i << endl;
    
    int *p = &i;
    cout << p << endl;
    
    *p = 10;
    cout << i << endl; 

    cout << &p << endl;
    cout << sizeof(p) << " " << sizeof(i) << endl;

    i++;
    cout << *p << " " << i << endl;

    (*p)++;
    cout << *p << " " << i << endl;

    int* q = p;
    cout << &p << " " << &i << " " << &q << endl;
    cout << i << " " << *p << " " << *q << endl;

    int* r = &(*p);
    cout << r << " " << *r << endl;

    cout << "===================" << endl;
    int a = 5;
    int* b = &a;
    int** c = &b;
    cout << a << " " << b << " " << c << endl;
    cout << a << " " << *b << " " << *c << endl;
    cout << a << " " << *b << " " << **c << endl;

}