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
        node* B=new node(2);
        A->next=B;
        B->prev=A;

        node* C=new node(3);
        B->next=C;
        C->prev=B;
        
        printCLL_doWhile(A);

     return 0;
}