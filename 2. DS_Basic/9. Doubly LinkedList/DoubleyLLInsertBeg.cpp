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


void printCLL_doWhile(node* head){
    if(head==NULL) NULL;
    node* p=head;
    while(p){
        cout<<p->data<<" "; 
        p=p->next;
        
    }
    
    
}
int main(){
        node* A=new node(1);
        A=insertBeg(A,2);

        printCLL_doWhile(A);

     return 0;
}