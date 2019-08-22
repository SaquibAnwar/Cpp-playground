#include <bits/stdc++.h>

using namespace std;

    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()/2;
        vector<int> ans;
        while(i < j){
            for(int k = height.size()-1; k >= j; k--){
                int res = min(height[i], height[k]) * abs(i-k);
                ans.push_back(res);
            }
            i++;
        }
        
        sort(ans.begin(), ans.end());
        return ans[ans.size()-1];
    }

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ans = maxArea(height);
    cout << ans << endl;
}