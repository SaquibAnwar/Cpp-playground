#include <iostream>
#include <vector>
using namespace std;

vector<string> v;

void print_subs(string input, string output){
    if(input.length() == 0){
        v.push_back(output);
        return;
    }

    print_subs(input.substr(1), output);
    print_subs(input.substr(1), output + input[0]);  

}


int main(){
    string input;
    cin >> input;
    string output = "";
    print_subs(input, output);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}