#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    return a.length()<b.length();
}

int main(){
    string s1("Hello world");
    cout << s1 << endl;

    string s2 = "Another Way !";
    cout << s2 << endl;

    cout << s2.length() << endl;

    for(int i = 0; i < s2.length(); i++){
        cout << s2[i] << " - ";
    }
    cout << endl;

    string s3;
    getline(cin, s3);

    cout << s3 << endl;

    string arr[] = {"pineapple", "applesssss", "mangoes", "pearsess"};
    sort(arr, arr+4, compare);
    for(int i = 0; i < 4; i++){
        cout << arr[i] << endl;
    }


    return 0;
}