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

void insertEnd(node* head,int x){
    cout<<head->data<<"fdasf";
    node* tmp=createNode(x);
    if(!head){
        head = tmp;
        return ;
    }
    node* y= head;
    while(head->next){
        
        head=head->next;
       

    }

    cout<<head->data;
    head->next=tmp;
   
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
     cout<<"Search Ans : "<<search(A,11)<<endl;
     insertEnd(B,0);
     insertEnd(B,1);
     insertEnd(B,2);
     cout<<A->data<<"FDFDSF"<<endl;
     rprint(A);

     

     return 0;
}