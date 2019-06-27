// Code : Maximum Frequency Number
// Send Feedback
// You are given with an array of integers that contain numbers in random order. Write a program to find and return the number which occurs maximum times in the given input.
// If more than one element occurs same number of times in the input, return the element which is present in the input first.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Most frequent element
// Constraints :
// 1 <= N <= 10^5
// Sample Input 1 :
// 13
// 2 12 2 11 12 2 1 2 2 11 12 2 6 
// Sample Output 1 :
// 2
// Sample Input 2 :
// 3
// 1 4 5
// Sample Output 2 :
// 1

#include<iostream>
#include<unordered_map>
using namespace std;
// #include "solution.h"

int highestFrequency(int *input, int n){
    unordered_map<int, int>m;
    for(int i=0; i<n; i++)
    {
        int key = input[i];
        if(m.count(key)==0)
        {
            m[key]=1; //initializing frequency value to 1 when key is not already present in hashmap
        }
        else
        {
            m[key]++; //incrementing frequency value by 1 when key is already present in hashmap
        }
    }

    int maxim = m[input[0]];
    int ans = input[0];
    int j=1;
    while(j<n)
    {
        if(m[input[j]] > maxim)
        {
            maxim = m[input[j]];
            ans = input[j];
        }
        j++;
    }
    return ans;
}


int main()
{
    int n;
    int input[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    int maxKey= highestFrequency(input, n);
    cout<<maxKey;
    return 0;
}




