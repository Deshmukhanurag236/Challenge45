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

void preorder(Node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        
        preorder(root->right);
    }
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    preorder(root);

     return 0;
}