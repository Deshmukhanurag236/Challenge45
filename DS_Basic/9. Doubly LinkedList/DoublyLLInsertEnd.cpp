#include<iostream>
#include<algorithm>

using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node* insertEnd(node* head, int data){
    node* tmp=new node(data);
    if(head==NULL) return tmp;
    node* r=head;
    while(head->next!=NULL){
        head=head->next;
    
    }
    head->next=tmp;
    tmp->prev=head;
    return r;
}


void printCLL_While(node* head){
    if(head==NULL) NULL;
    node* p=head;
    while(p){
        cout<<p->data<<" "; 
        p=p->next;
        
    }
    
    
}
int main(){
        node* A=new node(1);
        A=insertEnd(A,2);

        printCLL_While(A);

     return 0;
}