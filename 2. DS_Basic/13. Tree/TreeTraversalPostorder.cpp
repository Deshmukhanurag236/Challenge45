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

void postorder(Node *root){
    if(root!=NULL){
        
        postorder(root->left);
        
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    postorder(root);

     return 0;
}