#include <iostream>

using namespace std;

inline int max (int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    cin >> a >> b;

    int c = (a > b) ? a : b;

    cout << c << endl << max(a, b) << endl;

    int x, y;
    x = 12;
    y = 34;
    cout << max(x, y) << endl;
}