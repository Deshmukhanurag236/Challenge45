#include<iostream>
#include<algorithm>

using namespace std;

void printnum(int x,int k=1){
    if(x>=0){
    if(x==0)
            return;
        cout<<k<<endl;
        printnum(x-1,k+1);
        
    }
    
    
}

int main(){
    int x=100;
    printnum(x);


     return 0;
}