#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int *arr, int n)
{
    bool sorted = false;

    while(!sorted)
    {
        sorted = true;
        int i = 0;
        while(i < n-1){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
                sorted = false;
            }
            i++;
        }
    } 
}

int main()
{
    int arr[] = {9, 5, 1, 7, 5, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr, size);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}