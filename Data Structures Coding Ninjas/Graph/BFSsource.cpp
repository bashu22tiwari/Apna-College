#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFSWithSource(vector<int> adj[], int v, int s){
    bool visited[v];
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }

    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        cout << u << " ";
    
    for(int x : adj[u]){
        if(visited[x]==false){
            visited[x] = true;
            q.push(x);
        }
    }
    }
}

int main(){
    int v=5;
    vector<int> adj[5];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,3,0);
    addEdge(adj,1,3);
    addEdge(adj,2,3);

    BFSWithSource(adj,4,0);
    return 0;
}