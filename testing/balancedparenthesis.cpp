#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
            }
            
            char x;
            if(s[i] == '}'){
                x = st.top();
                st.pop();
                if(x == '(' || x == '['){
                    return false;
                }
            }
            else if(s[i] == ')'){
                x = st.top();
                st.pop();
                if(x == '{' || x == '['){
                    return false;
                }
            }
            else if(s[i] == ']'){
                x = st.top();
                st.pop();
                if(x == '(' || x == '{'){
                    return false;
                }
            }
        }
        
        return (st.empty());
    }

int main(){
    string s = "()";
    isValid(s) ? cout << "false" : cout << "false";
    cout << endl;
}