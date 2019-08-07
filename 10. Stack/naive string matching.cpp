#include <iostream>

using namespace std;

void naiveAlgo(string str, string pat){
	for(int i = 0; i < str.size() - pat.size(); i++){
		int j;
		for(j = 0; j < pat.size(); j++){
			if(str[i+j] != pat[j]){
				break;
			}
		}
		if(j == pat.size()){
			cout << "pattern is found at " << i << " position." << endl;
		}
	}
}

int main(int argc, char const *argv[])
{
	string str, pat;
	cin >> str;
	cin >> pat;
	naiveAlgo(str, pat);
	return 0;
}