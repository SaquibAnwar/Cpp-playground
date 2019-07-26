#include<iostream>
using namespace std;

int knapsack(int* weights, int* values, int n, int maxWeight){
    int* prev = new int[maxWeight+1];
    int* curr = new int[maxWeight+1];
    for(int i = 1; i < n+1; i ++){
        for(int w = 1; w < maxWeight+1; w++){
            if(weights[i-1] > w){
                curr[w] = prev[w];
            }
            else{
                curr[w] = max(prev[w - weights[i-1]] + values[i-1], prev[w]);
            }
        }
        prev = curr;
        curr = new int[maxWeight+1];
    }
    
    int ans = prev[maxWeight];
    delete[] curr;
    delete[] prev;
    return prev[maxWeight];
}

int main(){
    int n;
    int weights[] = {5, 1, 8, 9, 2};
    int values[] = {4, 10, 2, 3, 1};
    int W = 15;
    cout << knapsack(weights, values, 5, W) << endl;
}