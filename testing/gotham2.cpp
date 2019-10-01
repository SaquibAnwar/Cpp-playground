#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t){
    	int n; 
    	cin >> n;
    	int *arr = new int[n];
    	for(int i = 0; i < n; i++){
    	    cin >> arr[i];
    	}
    	
    	int sum = 0;
    	
    	for(int i = 0; i < n; i++){
    	    for(int j = i; j < n; j++){
    	        if(arr[i] < arr[j]){
    	            sum += arr[j];
    	            i++;
    	            j = i;
    	        }
    	    }
    	}
    	
    	cout << sum << endl;
	    t--;
    }
	
	return 0;
// 	25974
// 41042
	
}