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
void insertBeg(node* &head,int x){
    node* tmp=createNode(x);
    if(!head){
        head  = tmp;
        return;
    }

    node* tp=head;
    tmp->next=tp;
    head=tmp;


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
void printNthEnd(node* head,int n){
    if(head==NULL){
        return ;
    }
    node* first=head;
    for(int i=0;i<n;i++){
        if(first==NULL) return;
        first=first->next;
    }
    node *second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<(second->data);

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
     cout<<"Search Ans : "<<search(A,11)<<endl;
     insertBeg(A,0);
     insertBeg(A,1);
     insertBeg(A,2);

     rprint(A);
     cout<<endl;
     cout<<"3rd Last Node is ";
     printNthEnd(A,3);

     

     return 0;
}