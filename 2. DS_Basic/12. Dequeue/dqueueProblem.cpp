/* Implement the following function
    1. InsertMin(x)
    2. InsertMax(x)
    3. getMin(x)
    4. getMax(x)
    5. extractMin(x)
    6. extractMax(x)
*/
#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

void insertMin(deque<int> &dq,int x){
    if(dq.front()>x)
        dq.push_front(x);
    else
        cout<<"This number is not minimum"<<endl;
}

void insertMax(deque<int> &dq,int x){
    if(dq.back()<x)
        dq.push_back(x);
    else
        cout<<"This number is not Max"<<endl;
}


int getMin(deque<int> &dq){
    return dq.front();
}

int getMax(deque<int> &dq){
    return dq.back();
}

void extractMin(deque<int> &dq){
    dq.pop_front();
}

void extractMax(deque<int> &dq){
    dq.pop_back();
}

int main(){
    deque<int> dq;
    insertMin(dq,5);
    insertMax(dq,10);
    insertMin(dq,3);
    insertMax(dq,15);
    insertMin(dq,2);
    cout<<"Min : "<<getMin(dq)<<endl;
    cout<<"Max : "<<getMax(dq)<<endl;
    insertMin(dq,1);
    cout<<getMin(dq)<<endl;
    insertMax(dq,20);
    cout<<getMax(dq)<<endl;

    for(auto x:dq){
        cout<<x<<" ";
    }

     return 0;
}