#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int t, n;
	string s;
	cin >> t;
	cin.ignore();
	while(t--) {
	    getline(cin, s);
	    stringstream ss(s);
	    stack <string> st;
        string word; 
        while(getline(ss, word, '.')) 
            st.push(word); 
	    while(!st.empty()) {
	        cout << st.top() << (st.size() != 1 ? "." : "");
	        st.pop();
	    }
	    cout << endl;
	}
	return 0;
}
