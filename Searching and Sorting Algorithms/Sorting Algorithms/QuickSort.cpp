#include<bits/stdc++.h>
using namespace std;

int Partition(int *arr, int start, int end)
{
    int pivot = arr[end];
    int index = start;

    for(int i = start; i <= end-1; i++)
    {
        if(pivot >= arr[i])
        {
            swap(arr[index], arr[i]);
            index++;
        }
    }
    swap(arr[index], arr[end]);
    return index;
}

void QuickSort(int* arr, int start, int end)
{
    if(start >= end)
        return;
    
    int index = Partition(arr, start, end);
    QuickSort(arr, start, index-1);
    QuickSort(arr, index+1, end);
}


int main()
{
    int arr[] = {3, 6, 8, 4, 2, 1, 9, 7};

    int size = sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr, 0, size-1);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}