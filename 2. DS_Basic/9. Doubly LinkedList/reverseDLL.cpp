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

node* insertBeg(node* head, int data){
    node* tmp=new node(data);
    tmp->next=head;
    if(head!=NULL){
        head->prev=tmp;
    
    }
    return tmp;
}


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

node* reverseDLL(node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    node *prv=NULL;
    node *curr=head;
    node *r=NULL;
    while(curr!=NULL){
        if(curr->next==NULL){
            r=curr;
        }
        
        prv=curr->prev;
        curr->prev=curr->next;
        curr->next=prv;
        curr=curr->prev;
    }
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
        cout<<endl;
        A=reverseDLL(A);
        printCLL_While(A);

     return 0;
}