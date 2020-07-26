#include<iostream>

using namespace std;

bool isSorted(int a[], int n)
{
    if(n == 0 || n == 1)
        return true;
    
    if(a[0] > a[1])
        return false;

    return isSorted(a+1, n-1);
}

int main()
{
    int arr[] = {1,2,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    isSorted(arr, size) ? cout << "true" : cout << "false";
    cout << endl;
}