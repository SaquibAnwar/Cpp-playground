#include<iostream>

using namespace std;

void towerofhanoi(int n, char s, char d, char h){
    if(n == 0)
        return;

    towerofhanoi(n-1, s, h, d);
    cout << "Move " << n << " dist from " << s << " to " << d << endl;
    towerofhanoi(n-1, h, d, s);
}

int main(){
    int n;
    cin >> n;
    towerofhanoi(n, 'A', 'C', 'B');
}