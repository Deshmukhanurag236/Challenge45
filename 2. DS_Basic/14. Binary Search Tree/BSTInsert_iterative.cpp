#include<iostream>
#include<algorithm>

using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key =x;
        right=left=NULL;
    }
};




Node *insert_iterative(Node *root,int x){
    Node *tmp=new Node(x);
    Node *parent=NULL;
    Node *curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x){
            curr=curr->left;
        }
        else if(curr->key<x)
        curr=curr->right;
        else
            return root;
    } 
    if(parent==NULL)
        return tmp;
    if(parent->key>x)
        parent->left=tmp;
    else
        parent->right=tmp;
    
    return root;
}

int main(){

    Node *root=new Node(1);
    root=insert_iterative(root,2);
    root=insert_iterative(root,0);
    

     return 0;
}
