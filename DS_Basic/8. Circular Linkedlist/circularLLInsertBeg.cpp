#include<iostream>
#include<algorithm>

using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void printCLL_for(node* head){
    if(head==NULL) NULL;
    cout<<head->data<<" ";
    for(node* p=head->next;p!=head;p=p->next)
        cout<<p->data<<" ";
}

void printCLL_doWhile(node* head){
    if(head==NULL) NULL;
    node* p=head;
    do{
        cout<<p->data<<" "; 
        p=p->next;
        
    }while(p!=head);
    
    
}

node* insertBeg(node* head,int x){
    node *tmp=new node(x);
    if(head==NULL) 
        tmp->next=tmp;
    else{
        node* curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=tmp;
        tmp->next=head;

    }
    return tmp;
}



int main(){
    node* A=new node(1);
    node* B=new node(2);
    node* C=new node(3);

    A->next=B;
    B->next=C;
    C->next=A;

    printCLL_for(A);
    cout<<endl;
    printCLL_doWhile(A);
    cout<<endl;
    A=insertBeg(A,0);
    printCLL_for(A);
    
  
     return 0;
}