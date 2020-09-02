#include<iostream>
#include<vector>

using namespace std;

vector<int> majorityElement(vector<int> v)
{
    int element1 = v[0];
    int count1 = 0;

    int element2 = 0;
    int count2 = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == element1)
        {
            count1++;
        }
        else if (v[i] == element2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            element1 = v[i];
            count1++;
        }
        else if (count2 == 0)
        {
            element2 = v[i];
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    //To check if the the count is greater than N/3
    count1 = count2 = 0;
    vector<int> ans;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == element1)
        {
            count1++;
        }
        else if (v[i] == element2)
        {
            count2++;
        }
    }

    if(count1 > v.size()/3)
        ans.push_back(element1);
    if(count2 > v.size()/3)
        ans.push_back(element2);

    return ans;
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

    vector<int> ans;
    ans = majorityElement(v);
    if(ans.size() == 0)
    {
        cout << "None";
    }
    else
    {
        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    cout << endl;
}