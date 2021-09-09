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

node* insertEnd(node* head,int x){
    node *tmp=new node(x);
    if(head==NULL){ 
        tmp->next=tmp;
        return tmp;}
    else{
        tmp->next=head->next;
        head->next=tmp;
        int x=head->data;
        head->data=tmp->data;
        tmp->data=x;
        return tmp;

    }
    
}

node* deleteHead(node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }

    head->data=head->next->data;
    head->next=head->next->next;
    return head;
}

node* deleteKthNode(node* head,int k){
    if(head==NULL)
        return NULL;

    if(k==1){
        head=deleteHead(head);
        return head;}
    else{
        node* curr=head;
        for(int i=0;i<k-2;i++){
            head=head->next;
        }
        node* tmp=head->next;
        head->next=head->next->next;
        delete(tmp);
        return curr;
    }
        
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
    cout<<endl;
    A=insertEnd(A,4);
    printCLL_doWhile(A);
    cout<<endl;
    A=deleteHead(A);
    printCLL_doWhile(A);
    cout<<endl;
    A=deleteKthNode(A,3);
    printCLL_doWhile(A);
     cout<<endl;
    A=deleteKthNode(A,1);
    printCLL_doWhile(A);
     return 0;
}