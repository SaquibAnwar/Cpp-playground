#include <iostream>

using namespace std;

int main () {
    int i = 10;
    int j = 21;
    int const * p = &i;

    p = &j;

    // *p cant be done

    int * const p2 = &i;   // constant pointer
    (*p2)++;   // can be done
    //p2 = &j; cant be done

    int const * const p3 = &i;
    //p3 = &j;  cant be done
    // (p3)++;  cant be done
}