#include<bits/stdc++.h>

using namespace std;

int subsequence(string input, string output[])
{
    if(input.empty())
    {
        output[0] = "";
        return 1;
    }

    string smallOutput = input.substr(1);
    int smallAnsSize = subsequence(smallOutput, output);
    for(int i = 0; i < smallAnsSize; i++)
    {
        output[smallAnsSize + i] = input[0] + output[i];
    }

    return 2 * smallAnsSize;
}

int main()
{
    string input;
    cin >> input;
    string* output = new string[1000];
    int count = subsequence(input, output);
    for(int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
}