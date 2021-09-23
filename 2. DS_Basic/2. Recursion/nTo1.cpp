#include<iostream>
#include<algorithm>

using namespace std;

void printnum(int x){
    if(x>=0){
    if(x==0)
            return;
        cout<<x<<endl;
        printnum(x-1);
    }
    
    
}

int main(){
    int x=100;
    printnum(x);


     return 0;
}