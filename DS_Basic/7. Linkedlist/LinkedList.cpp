#include <iostream>
using namespace std;
class node{
    public:
    int x;
    node* next;
};

node* head=NULL;
node* tail=NULL;

class linkedList{
public:
node* createNode(int x){

    node* tmp=new node();
    
    if(!tmp){
        cout<<"overflow"<<endl;
        exit(1);
    }
    tmp->x=x;
    return tmp;

    
}

void push_start(int x){
    node* tmp=createNode(x);
    if(!head){
        head = tail = tmp;
        return;
    }

    node* tp=head;
    tmp->next=tp;
    head=tmp;
}

void push_end(int x){
    node* tmp=createNode(x);
    if(!tail){
        head = tail = tmp;
        return;
    }

    
    tail->next=tmp;
    tail=tmp;
}

void push_after(int y,int x){
    node* tmp=createNode(x);
    // if(!head){
    //     head = tail = tmp;
    //     return;
    // }
    // if(head==tail){
    //     head->next=tmp;
    //     tail=tail;
    // }

    node* tp=head;
    
        int j=0;
        while(tp)
            {  
            if(tp->x==y)
                {j=1;
                // cout<<tp->x;
                break;}
                tp=tp->next;
            }
        if(j){
            
            tmp->next=tp->next;
            // cout<<(tp->next)->x;
            tp->next=tmp;

            
        }
        if(!j){
            cout<<"Not Found. Try Again"<<endl;
        }
        
    
   
}
void printLinkedList(){
    if(!head){
        cout<<"Nothing here to print"<<endl;
        return;
        }
        node* tmp=head;
        while(tmp){
            cout<<tmp->x;
            tmp=tmp->next;
        }

}
};


int main(){
    linkedList L;
    // L.push_start(5);
    // L.push_start(4);
    // L.push_end(7);
    L.push_after(7,6);
    L.printLinkedList();
    return 0;
}