#include<bits/stdc++.h>

using namespace std;


bool subset(vector<int> set, int n, int sum) 
{ 
    
    bool arr[n+1][sum+1]; 
   
    
    for (int i = 0; i <= n; i++) 
      arr[i][0] = true; 
   
    
    for (int i = 1; i <= sum; i++) 
      arr[0][i] = false; 
   
    
     for (int i = 1; i <= n; i++) 
     { 
       for (int j = 1; j <= sum; j++) 
       { 
         if(j<set[i-1]) 
         arr[i][j] = arr[i-1][j]; 
         if (j >= set[i-1]) 
           arr[i][j] = arr[i-1][j] ||  arr[i - 1][j-set[i-1]]; 
       } 
     } 

     return arr[n][sum]; 
} 


bool check(int n){
    vector<int> v;
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            v.push_back(i);
        }
    }
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }

    if(sum < n){
        return false;
    }

    int size = v.size();
    if(!subset(v, size, n)){
        return false;
    }

    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(check(n))
            cout << "Special" << endl;
        else
        {
            cout << "Not Special" << endl;
        }
        
    }
}