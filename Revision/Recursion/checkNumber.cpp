#include<iostream>

using namespace std;

bool checkNumber(int input[], int size, int x)
{
    bool present = false;
    if(size >= 0)
    {
        if(input[0] == x)
            present = true;
        else
            present = checkNumber(input+1, size-1, x);
        
    }
    return present;
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    checkNumber(arr, n, x) ? cout << "true" : cout << " false";
    cout << endl;
}