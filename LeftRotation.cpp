#include<bits/stdc++.h>

using namespace std;

vector<int> rotate(vector<int> v, int k)
{
    reverse(v.begin(), v.end());
    
    int l = 0, r = k + 1;
    
    while(l < r)
    {
        swap(v[l++], v[r--]);
    }
    
    l = k+2, r = v.size()-1;
    
    while(l < r)
    {
        swap(v[l++], v[r--]);
    }
    
    return v;
}
vector<vector<int> > solve(vector<int> &A, vector<int> &B) {
    vector<vector<int>> ans;
    
    int k = 0;
    for(int i = 0; i < B.size(); i++)
    {
        vector<int> temp;
        //B[i] = B[i]%A.size();
        temp = rotate(A, B[i]);
        ans.push_back(temp);
    }
    
    //reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> A {1, 2, 3, 4, 5};
    vector<int> B {2, 3};
    
    vector<vector<int>> ans = solve(A, B);
    
    for(int i = 0; i < ans.size(); i++)
    {
        for(int k = 0; k < ans[i].size(); k++)
        {
            cout << ans[i][k] << " ";
        }
        cout << endl;
    }
    
}