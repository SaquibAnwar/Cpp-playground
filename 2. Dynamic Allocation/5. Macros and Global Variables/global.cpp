#include <iostream>

using namespace std;

int a;

void g() {
    a++;
    cout << a << endl;
}

void f() {
    cout << a << endl;
    a++;
    g();
}


// int main(){
//     a = 10;
//     f();
//     cout << a << endl;
// }

// #include <iostream>
// using namespace std;

// #define MULTIPLY(a, b) a*b

// int main(){
//     cout << MULTIPLY(2+3, 3+5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define SQUARE(x) x*x

// int main(){
//     int x = 36 / SQUARE(6);
//     cout << x;

//     return 0;
// }