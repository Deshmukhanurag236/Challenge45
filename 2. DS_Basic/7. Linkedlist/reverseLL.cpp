#include<iostream>
#include<algorithm>

using namespace std;

struct node{
    int data=0;
    node* next=NULL;
};

node* createNode(int data){
    node *tmp=new node();
    if(!tmp){
        cout<<"Cannot be created"<<endl;
        exit(-1);
    }
    tmp->data=data;
    return tmp;
}

node* reverseLL(node* head,node* &newHead){
    
    if(head==NULL)
        return newHead;
     if(head->next==NULL){
         newHead=head;
        return head;
     }

     node* prev=reverseLL(head->next,newHead);
     prev->next=head;
     head->next=NULL;
     return head;

}   
void rprint(node* head){
    if(!head)
        return;
    cout<<head->data<<" ";
    rprint(head->next);
}

int main(){

     node* A=createNode(1);
    //  node* B=createNode(2);
    //  node* C=createNode(3);
    //  node* D=createNode(4);
    //  A->next=B;
    //  B->next=C;
    //  C->next=D;
     
    reverseLL(A,A);
    rprint(A);
     

     return 0;
}