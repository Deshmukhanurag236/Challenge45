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
int search(node* head,int x){
    if(!head)
        return -1;
    // cout<<head->next->data<<endl;
    if(head->data==x){
        // cout<<head->data<<" ";
        return 1;
        }
        // return search(head->next,x)+1;
    else{
        int res=search(head->next,x);
        if(res==-1)
         return -1;
        else {
            return res+1;
        }
    }
   
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
     cout<<"Ans : "<<search(A,11);

     return 0;
}