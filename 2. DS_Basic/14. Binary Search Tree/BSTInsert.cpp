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

Node* insert(Node *root,int x){
    if(root==NULL)
        return new Node(x);
    
    else if(root->key<x)
        root->right= insert(root->right,x);
    else
        root->left=insert(root->left,x);

    return root;
}


int main(){

    Node *root=new Node(1);
    root=insert(root,2);
    root=insert(root,0);

     return 0;
}
