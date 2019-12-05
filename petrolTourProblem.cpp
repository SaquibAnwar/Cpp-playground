#include<bits/stdc++.h>

using namespace std;

int tour(int pet[], int dist[], int n){
    int sum = 0, diff = 0, start = 0;
    for(int i = 0; i < n; i++){
        sum += pet[i] - dist[i];
        if(sum < 0){
            start = i+1;
            diff += sum;
            sum = 0;
        } 
    }
    return sum+diff>0 ? start:-1;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dist[100], petrol[100];
        int j = 0, k = 0;
        for(int i = 0; i < 2*n; i++){
            if(i%2 == 0)
                cin >> petrol[k++];
            else
                cin >> dist[j++];
        }

        int ans = tour(petrol, dist, n);
        cout << ans << endl;
    }
}