#include<iostream>
#include<algorithm>
#include<stack>
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

void iterative_preorder(Node *root){
    if (root==NULL) return;
    stack<Node *> st;
    st.push(root);
    while(st.empty()==false){
        Node *curr=st.top();
        cout<<(curr->key)<<" ";
        st.pop();
        if(curr->right!=NULL) st.push(curr->right);
        if(curr->left!=NULL) st.push(curr->left);

    
    }
}

void iterative_Preorder_eff(Node *root){

    if(root==NULL) return;
    stack<Node *> st;
    Node *curr=root;
    while(curr!=NULL||st.empty()==false){
        while(curr!=NULL){
            cout<<(curr->key)<<" ";
            if(curr->right!=NULL)
                st.push(curr->right);
            curr=curr->left;
        }
        if(st.empty()==false){
            curr=st.top();
            st.pop();
        }
    }

}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    
    iterative_Preorder_eff(root);
     return 0;
}