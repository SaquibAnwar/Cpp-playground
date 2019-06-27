#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char *a = new char[n+1];
    
    //string a;
    cin.ignore();
    cin.getline(a, n+1);
    
    char *b = new char[n+1];
    cin.getline(b, n+1);

    cout<<" Output of a :" ;
    cout<<a;
    cout << endl;
    cout<<" Output of b :" ;
    for(int i = 0; b[i] != '\0' ; i++){
        cout<<b[i];
    }
    cout << endl;
}
