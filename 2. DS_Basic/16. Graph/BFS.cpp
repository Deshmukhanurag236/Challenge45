#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adj[],int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void BFS(vector<int> adj[],int v,int s){

    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(int i :adj[curr]){
            if(visited[i]==false){
                visited[i]=true;
                q.push(i);
            }
        }
    }


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
    BFS(adj,V,0);
     return 0;
} 