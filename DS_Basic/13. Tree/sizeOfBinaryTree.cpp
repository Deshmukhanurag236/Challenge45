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

void sizeBinaryTree(Node *root,int &count){
    if(root!=NULL){
        
        sizeBinaryTree(root->left,count);
        
        sizeBinaryTree(root->right,count);
        cout<<root->key<<" ";
        count++;
    }
}

int getSize(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1+getSize(root->left)+getSize(root->right);
    }
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    int count=0;
    sizeBinaryTree(root,count);
    cout<<endl;
    cout<<"Size : "<<count;
    cout<<endl;
    cout<<"Size : "<<getSize(root);
     return 0;
}