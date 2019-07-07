#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int checkBalanced(char* exp){
    stack<char> s;
    int count = 0;
    int len = strlen(exp);
    for(int i = 0; i  < len; i++){
        if(exp[i] == '('){
            s.push(exp[i]);
        }
        else if(exp[i] == ')'){
            if(s.empty()){
                continue;
            }
            else{
                count += 2;
                s.pop();
            }
        }
    }
    return count;
}

int main(){
    char input[100000];
    cin.getline(input, 100000);
    int n = checkBalanced(input);
    //cout << n << " ";
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            cout << n/i << " " <<n/(n/i);
        }       
        break;
    }
    //cout << n;
}