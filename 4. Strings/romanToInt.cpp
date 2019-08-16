#include<bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<char,pair<int,int>> mp = { {'I',{1,1}},{'V',{2,5}},{'X',{3,10}},
                        {'L',{4,50}},{'C',{5,100}},{'D',{6,500}},{'M',{7,1000}}};
    int T;
    cin >> T;
    while(T--)
    {
        string roman;
        cin >> roman;
        int count = 0;
        int i=0;
        for(; i<roman.size()-1;) //excluding the last char
        {   int diff = mp[roman[i]].first - mp[roman[i+1]].first;
            if(diff < 0)
            {
                count += mp[roman[i+1]].second-mp[roman[i]].second;
                i+=2;
            }
            else
            {
                count += mp[roman[i]].second;
                i++;
            }
        }
        if(i == roman.size()-1) count += mp[roman[i]].second;
        cout << count <<endl;
    }
	return 0;
}