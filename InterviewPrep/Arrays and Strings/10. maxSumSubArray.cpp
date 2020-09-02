//Kadanes Algo

#include<bits/stdc++.h>

using namespace std;

int MaximumSum(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        currSum += arr[i];

        if(currSum > maxSum)
            maxSum = currSum;

        if(currSum < 0)
            currSum = 0;
    }

    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << MaximumSum(arr, n) << endl;
}