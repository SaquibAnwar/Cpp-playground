#include<iostream>

using namespace std;

int main()
{
    int arr[] = {2, 9, 6, 3, 7, 8, 9, 4, 1, 5};

    int size = sizeof(arr)/sizeof(int);

    int sum = 0;

    for(int i = 0 ; i < size; i++)
        sum += arr[i];

    int sumofN = (size*(size-1))/2;
    
    cout << sum-sumofN << endl;
}