#include<bits/stdc++.h>

using namespace std;

bool check(int a){
    vector<int> v;
    while(a>0){
        v.push_back(a%10);
        a = a/10;
    }

    int flag = 0;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(i == j){
                continue;
            }
            if(v[i] == v[j]){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1){
        return false;
    }
    else{
        return true;
    }
}


int main(){
    int m, n;
    cin >> m >> n;
    int count = 0;
    for(int i = m; i <= n; i++){
        bool a = check(i);
        if(a){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}