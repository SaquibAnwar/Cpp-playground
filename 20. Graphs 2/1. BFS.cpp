#include <bits/stdc++.h>

using namespace std;

void printBFS(int** edges, int n, int sv){
    queue<int> pendingVertices;
    bool* visited = new bool[n];
    for(int i = 0; i < n; i++){
        visited[i] = false;
    }

    pendingVertices.push(sv);
    visited[sv] = true;
    while(!pendingVertices.empty()){
        int curVertix = pendingVertices.front();
        pendingVertices.pop();
        cout << curVertix << endl;
        for(int i = 0; i < n; i++){
            if(i == curVertix){
                continue;
            }

            if(edges[curVertix][i] == 1 and !visited[i]){
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
    }
    delete [] visited;
}

// 4 4
// 0 1
// 0 3
// 1 2
// 2 3
// 1 3

int main(){
    int n;
    int e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i = 0; i < n; i++){
        edges[i] = new int[n];
        for(int j = 0; j < n; j++){
            edges[i][j] = 0;
        }
    }

    for(int i = 0; i < e; i++){
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    cout << "BFS Traversal" << endl;
    printBFS(edges, n, 0);

}