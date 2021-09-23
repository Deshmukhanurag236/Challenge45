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

bool search(Node *root,int x){
    if(root==NULL)
        return false;
    else if(root->key==x)
        return true;
    else if(root->key>x)
        return search(root->left,x);
    else
        return search(root->right,x);
}

Node* insert(Node *root,int x){
    if(root==NULL)
        return new Node(x);
    
    else if(root->key<x)
        root->right= insert(root->right,x);
    else
        root->left=insert(root->left,x);

    return root;
}

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
    root=insert(root,2);
    root=insert(root,0);
    cout<<search(root,3);

     return 0;
}
