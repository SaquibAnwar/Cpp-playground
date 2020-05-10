#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    int max = 0;
    int count = 1;
    for(int i = 0; i <= str.length()-1; i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
            }
            count = 1;
        }
    }

    cout << max << endl;
}