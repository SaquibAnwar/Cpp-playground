#include<bits/stdc++.h>

using namespace std;
int mem[100][100];
int count = 0;


int memMaxProfit(int *arr, int be, int en, int yr){
    if(be > en)
        return 0;
    
    if(mem[be][en] != -1)
        return mem[be][en];

    int q1 = (arr[be]*yr) + memMaxProfit(arr, be+1, en, yr+1);
    int q2 = (arr[en]*yr) + memMaxProfit(arr, be, en-1, yr+1);
    int ans = max(q1, q2);
    mem[be][en] = ans;
    return ans;
}


int maxProfit(int *arr, int be, int en, int yr){
    if(be > en)
        return 0;
    
    int q1 = (arr[be]*yr) + maxProfit(arr, be+1, en, yr+1);
    int q2 = (arr[en]*yr) + maxProfit(arr, be, en-1, yr+1);
    int ans = max(q1, q2);
    return ans;
}


int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    memset(mem, -1, sizeof(mem));

    int ans = memMaxProfit(arr, 0, n-1, 1);
    cout << ans << endl;
}