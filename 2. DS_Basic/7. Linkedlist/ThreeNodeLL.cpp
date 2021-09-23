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

int main(){

     node* A=createNode(1);
     node* B=createNode(2);
     node* C=createNode(3);
     A->next=B;
     B->next=C;
     while (A)
     {
         cout<<(A->data)<<" ";
         A=A->next;
         /* code */
     }
     
    //  cout<<(A->data);

     return 0;
}