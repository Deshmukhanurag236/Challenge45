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



int MaxNum(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(root->key,max(MaxNum(root->left),MaxNum(root->right)));
    }
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);

    cout<<MaxNum(root)<<endl;
     return 0;
}