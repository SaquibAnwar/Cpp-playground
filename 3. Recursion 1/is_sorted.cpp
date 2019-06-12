#include <iostream>

using namespace std;

bool is_sorted(int a[], int size){
    if(size == 0 || size == 1)
        return true;
    
    if(a[0] > a[1])
        return false;
    
    bool isSmallSorted = is_sorted(a+1, size-1);
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