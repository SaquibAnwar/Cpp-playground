#include <iostream>

using namespace std;

int main(){
    int * p = new int;
    *p = 10;
    cout<< *p << endl;

    // double *pd = new double; //to declare a double in heap

    // char * c = new char;    // to declare a char in heap


    // array declaration in heap
    int n ; 
    cout<<"Enter num of elements : ";
    cin>>n;
    int * pa = new int[n];

    for(int i = 0; i < n ; i++)
        cin>>pa[i];

    int max = -1;
    for(int i = 0; i < n; i ++)
        if(pa[i] > max)
            max = pa[i];


    cout<< max <<endl ;
}