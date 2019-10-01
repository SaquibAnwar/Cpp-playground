#include<iostream>

using namespace std;


// class A
// {
//     virtual void PureVirtualFunction() = 0;
// };

class A
{
public:
virtual void show() { ; }
};


int main(){
    cout << sizeof(A);
}