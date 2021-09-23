#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adj[],int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void BFS(vector<int> adj[],int s,bool visited[]){
   
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

void BFSDisc(vector<int> adj[],int v){
bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        // cout<<"hitted"<<endl;
        if(visited[i]==false){

            BFS(adj,i,visited);
            cout<<endl;
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

    int V=7;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    // addEdge(adj,1,0);
    addEdge(adj,2,3);
    // addEdge(adj,2,0);
    // addEdge(adj,3,1);
    // addEdge(adj,3,2);
    addEdge(adj,4,6);
    addEdge(adj,4,5);
    // addEdge(adj,5,4);
    // addEdge(adj,5,6);
    addEdge(adj,6,5);
    // addEdge(adj,6,4);
    printGraph(adj,V);
    BFSDisc(adj,V);
     return 0;
} 