#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> v;

void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)
        v.push_back(a);  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
} 


int main(){
    string a;
    cin>>a;

    int n = a.length();

    permute(a, 0, n-1);
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }

    cout << endl;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == a){
            cout << v[i+1];
        }
    }

}