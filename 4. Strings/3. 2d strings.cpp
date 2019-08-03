#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> s;
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string in;
        getline(cin, in);
        s.push_back(in);
    }

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }
    cout << endl;
    cout << s[2] << endl;
}