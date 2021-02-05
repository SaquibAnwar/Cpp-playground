#include<bits/stdc++.h>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> v;
        v.clear();
        for(int i = 0; i < n; i ++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }
        
        int k;
        cin >> k;
        
        reverse(v.begin(), v.end());
        
        int l = 0, r = k-1;
        
        while(l < r)
        {
            swap(v[l++], v[r--]);
        }
        
        reverse(v.begin() + k, v.end());
        
        
        
        for(int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}