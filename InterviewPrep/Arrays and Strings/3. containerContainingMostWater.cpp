#include<bits/stdc++.h>

using namespace std;

int MostWater(vector<int> height)
{
    int area = 0;
    int left = height[0];
    int right = height.size()-1;
    while(left < right)
    {
        area = max(area, (min(height[left], height[right])*(right-left)));

        if(height[left] < height[right])
            left++;
        else
            right--;
    }

    return area;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> v;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << MostWater(v) << endl;
}