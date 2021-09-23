#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adj[],int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFSRecur(vector<int> adj[],int s,bool visited[]){
    visited[s]=true;
    cout<<s<<" ";

    for(int i : adj[s]){
        if(visited[i]==false){
            DFSRecur(adj,i,visited);
        }
    }
}
void DFS(vector<int> adj[],int v,int s){

    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    DFSRecur(adj,s,visited);


}
void printGraph(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<" : ";
        for(int j:adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int V=4;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    // printGraph(adj,V);
    DFS(adj,V,0);
     return 0;
} 