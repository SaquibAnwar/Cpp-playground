#include<iostream>

using namespace std;

int convert(string a, int len){
    
    if(len <= 0)
        return (a[len] - '0')*10;

    int digit = (a[0] - '0');
    digit += convert(a, len-1);
    return digit;
}


int main(){
    char a[100];
    cin >> a;
    int n = 0;
    for(int i = 0; a[i] != '\0'; i++){
        n += 1;
    }
    cout << convert(a, n);
}