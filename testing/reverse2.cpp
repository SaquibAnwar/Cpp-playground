#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t>0){
	    char s[100];
	    cin.getline(s, 100);
	    char* ptr;
	    vector<string> v;
	    ptr = strtok(s, ".");
	    while(ptr != NULL){
	        v.push_back(ptr);
	        ptr = strtok(NULL, ".");
	    }
	    
	    for(int i = v.size()-1; i >= 0; i--){
	        cout << v[i];
	        if(i != 0){
	            cout << ".";
	        }
	    }
	    cout << endl;
	    v.clear();
	    t--;
        //cin.ignore();
	}
}