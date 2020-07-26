#include<bits/stdc++.h>

using namespace std;

int maxSumSubArray(int a[], int size)
{
    int ans = INT_MIN, sum = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        sum +=  a[i]; 
        ans = max(ans, sum);
  
        if (sum < 0) 
            sum = 0; 
    } 
    return ans;
}


int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(int);

    cout << maxSumSubArray(arr, n) << endl;
}