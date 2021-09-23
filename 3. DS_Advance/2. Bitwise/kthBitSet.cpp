#include<iostream>
#include<algorithm>

using namespace std;

bool kthBitSet(unsigned int n,int k){
    if(n&(1<<(k-1)) !=0){
        return true;
    }
    cout<<(1<<(k-1));
    return false;
}



int main(){

    unsigned int x=5;
    cout<<kthBitSet(x,3);


     return 0;
}