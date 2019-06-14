#include<iostream>
#include "newFraction.cpp"

using namespace std;

int main(){
    Fraction f1(10, 3);
    Fraction f2(5, 2);

    // Fraction f3 = f1.add(f2);
    // f1.print();
    // f2.print();
    // f3.print();

    // Fraction f4 = f2 + f3;
    // Fraction f5 = f2 * f3;
    // f4.print();
    // f5.print();

    // if(f1 == f2)
    //     cout << "Equal" << endl;
    // else
    //     cout << "Not Equal" << endl;

    // ++f1;
    // f1.print();

    // Fraction f6 = ++f1;
    // f6.print();

    // Fraction f3 = ++(++f1);
    // f1.print();
    // f3.print();

    // Fraction f3 = f1++;
    // f1.print();
    // f3.print();

    f1 += f2;
    f1.print();
    f2.print();

    (f1 += f2) += f2;
    f1.print();
    f2.print();

}