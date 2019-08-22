#include <bits/stdc++.h>

using namespace std;

void print(priority_queue<int, vector<int>, greater<int>> pq){
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}


int main(){
    int num;

    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
    cin >> k;
    int size = 0;

    while(scanf("%d", &num)!=EOF){
        if(num == -1){
            print(pq);
        }
        else if(size < k){
            pq.push(num);
            size++;
        }
        else{
            if(num > pq.top()){
                pq.pop();
                pq.push(num);
            }
        }
    }
    return 0;
}