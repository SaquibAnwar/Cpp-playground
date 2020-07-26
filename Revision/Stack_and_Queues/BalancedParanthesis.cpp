#include<bits/stdc++.h>

using namespace std;

bool IsBalanced(string str)
{
    stack<char> s;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);

        if(str[i] == ')' || str[i] == '}' || str[i] == ']')
            if(s.empty())
                return false;

        if(str[i] == ')')
        {
            char top = s.top();
            s.pop();
            if(top != '(')
                return false;
        }
        if(str[i] == '}')
        {
            char top = s.top();
            s.pop();
            if(top != '{')
                return false;
        }
        if(str[i] == ']')
        {
            char top = s.top();
            s.pop();
            if(top != '[')
                return false;
        }
    }
    return true;
}

int main()
{
    string str;
    getline(cin, str);

    IsBalanced(str) ? cout << "true" : cout << "false";
    cout << endl;
}