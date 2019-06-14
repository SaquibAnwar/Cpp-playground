#include<iostream>
#include "fraction.cpp"

using namespace std;

int main(){
    Fraction f1(10, 2);
    Fraction f2(15, 4);

    const Fraction f3;
    // you can call only contant functions through constanat objects
    cout << f3.getNumerator() << " " << f3.getDenominator() << endl;

    f3.print();

}