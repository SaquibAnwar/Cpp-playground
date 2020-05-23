#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int arr[] = {8, 6, 5, 9, 3, 6, 11, 7, 2, 1, 4, 10, 9};

    //int size = sizeof(arr)/sizeof(arr[0]);

    //cout << size << endl;

    int size;
    cin >> size;

    int * arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < size; i++){
        int val = arr[i]; 
        int j = i-1;
        while(val < arr[j] and j >= 0)
        { 
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = val;
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}