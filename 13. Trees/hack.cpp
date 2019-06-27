#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

void  rotatearray(char* a, int n){
    char temp = a[0];
    int i;
    for(i = 0; i < n; i++){
        a[i] = a[i+1];
    }
    a[i-1] = temp;
}


int main(){
    // int n;
    // cin>>n;
    char *a = new char[7];
    
    //string a;
    cin.getline(a, 7);
    //getline(cin,a);

    rotatearray(a, 7);

    cout<<" Output of a :" ;
    for(int i = 0; a[i] != '\0'; i++){
        cout << a[i];
    }
    cout << endl;
}