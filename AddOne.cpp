#include<bits/stdc++.h>

using namespace std;

int main()
{
     vector<int> A{ 1, 2, 3 };
//     int ans = 0;
    vector<int> output; 

    string ans;
    for(int i = 0; i < A.size(); i++)
    {
        ans += to_string(A[i]);
    }
    
    stringstream in;
    in << ans;
    long long number;
    in >> number;
    
    cout << number << endl;
    number += 1;
    while(number)
    {
        output.push_back(number%10);
        number /= 10;
    }
    
    reverse(output.begin(), output.end());
    
    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    
    //return output;
}

