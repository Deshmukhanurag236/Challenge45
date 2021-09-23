#include<iostream>
#include<algorithm>

using namespace std;



int countBit_brian(unsigned int n){
    int count=0;
    while(n>0){
        n=(n&n-1);
        count++;
    }
    return count;
}

bool powerOfTwo_brian(unsigned int n){
    if(countBit_brian(n)==1){
        return true;
    }
    return false;
}

bool powerOfTwo(unsigned int n){
    if((n&(n-1))==0)
        return true;
    return false;
}

int main(){

    unsigned int x=8;
    cout<<powerOfTwo(x);


     return 0;
}