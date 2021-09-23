#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adj[],int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
bool DFSRecur(vector<int> adj[],int s,bool visited[],int parent){
    visited[s]=true;
    cout<<s<<" ";

    for(int i : adj[s]){
        if(visited[i]==false){
            if (DFSRecur(adj,i,visited,s)==true)
                return true;}
        else if(i!=parent){
            return true;
        }

        
    }
    return false;
}
bool DFS(vector<int> adj[],int v,int s){

    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    for(int i=0;i<v;i++){
        if(visited[i]==false){
        if(DFSRecur(adj,i,visited,-1)==true)
            return true;
        
        cout<<endl;}
    }

    return false;

    


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
    // addEdge(adj,1,3);
    // addEdge(adj,1,0);
    addEdge(adj,2,3);
    // addEdge(adj,2,0); 
    // addEdge(adj,3,1);
    // addEdge(adj,3,2);
    addEdge(adj,4,6);
    addEdge(adj,4,5);
    // addEdge(adj,5,4);
    // addEdge(adj,5,6);
    // addEdge(adj,6,5);
    // addEdge(adj,6,4);
    printGraph(adj,V);
    bool ans=DFS(adj,V,0);
    cout<<"The status of cycle in graph is : "<<ans<<endl;
     return 0;
} 