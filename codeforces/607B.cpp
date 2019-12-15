#include<bits/stdc++.h>

using namespace std;

void swapping(string a, char b, int index){
    int size = a.size()-1;
    while(size > index){
        if(a[size] < b){
            swap(a[index], a[size]);
            break;
        }
        size--;
    }
    if(size == index){
        cout << "---\n";
        return;
    }
    cout << a << endl;
    return;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a;
        cin.ignore();
        cin >> b;

        int n = min(a.size(), b.size());

        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                cout << a << endl;
                break;
            }

            if(a[i] == b[i]){
                int j = i;
                while(a[j] != b[j]){
                    if(j == a.size()-1){
                        cout << "---\n";
                        break;
                    }
                    if(a[j] < b[j]){
                        cout << a << endl;
                        break;
                    }
                    j++;
                }
                i = j;
            }

            if(a[i] > b[i]){
                swapping(a, b[i], i);
                break;
            }
        }
    }
}