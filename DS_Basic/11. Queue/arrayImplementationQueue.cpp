#include<iostream>
#include<algorithm>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next =NULL;
    }
};

struct Queue{
    Node *front;
    Node *rear;
    Queue(){
        front=NULL;
        rear=NULL;
    }

    void enqueue(int x){
        Node *tmp=new Node(x);
        if(tmp==NULL){
            front=rear=tmp;
            return ;
        }
        rear->next=tmp;
        rear=tmp;
    }

    void deque(){
        if(front==NULL) return;
        Node *tmp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete(tmp);

    }
};

int main(){

    Queue* q=new Queue();
    q->enqueue(2);
    q->enqueue(3);
    cout<<(q->front->data)<<endl;
     return 0;
}