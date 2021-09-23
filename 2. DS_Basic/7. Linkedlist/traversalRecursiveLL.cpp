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

void rprint(node* head){
    if(!head)
        return;
    cout<<head->data<<" ";
    rprint(head->next);
}

int main(){

     node* A=createNode(1);
     node* B=createNode(2);
     node* C=createNode(3);
     node* D=createNode(4);
     A->next=B;
     B->next=C;
     C->next=D;
     rprint(A);

     return 0;
}