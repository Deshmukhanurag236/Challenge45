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

node *deleteHead(node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    else{
        node* tmp=head;
        head=head->next;
        head->prev=NULL;
        delete tmp;
        return head;
    }
}

void printDLL_While(node* head){
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

        printDLL_While(A);
        cout<<endl;

        A=deleteHead(A);
        printDLL_While(A);

     return 0;
}