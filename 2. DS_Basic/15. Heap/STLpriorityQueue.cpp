#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;



int main(){
    priority_queue<int> pq; //priority_queue<int,vector<int>,greator<int>>
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }


     return 0;
}