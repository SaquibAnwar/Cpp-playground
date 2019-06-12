#include <iostream>

using namespace std;

int is_sorted(int a[], int size){
    if(size == 0 || size == 1)
        return *a;
    
    if(a[0] > a[1]){
        int temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }
    cout<<(*a)<<endl;
    int isSmallSorted = is_sorted(a+1, size-1);
    return isSmallSorted;
}

int main(){
    int size;
    cin >> size;
    int * input = new int[1 + size];

    for(int i = 0; i < size; i++)
        cin >> input[i];

    cout<< is_sorted(input,size) << endl;

    delete [] input;

}