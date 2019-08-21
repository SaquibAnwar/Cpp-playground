#include <bits/stdc++.h>

using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        if(i != nums1.size()){
            while(i < nums1.size()){
                ans.push_back(nums1[i]);
                i++;
            }
        }
        
        if(j != nums2.size()){
            while(j < nums2.size()){
                ans.push_back(nums2[j]);
                j++;
            }
        }
        //cout << ans.size() << endl;
        double ret;
        int size = ans.size();
        if(size%2 == 0){
            ret = (ans[size/2-1] + ans[(size/2)]);
            ret = ret/2;
        }
        else{
            ret = ans[size/2];
        }
        return ret;
        
        
}

int main(){
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double ans = 
    findMedianSortedArrays(nums1, nums2);
    cout << ans << endl;
}