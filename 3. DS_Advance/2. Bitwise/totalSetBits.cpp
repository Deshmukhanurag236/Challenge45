#include<iostream>
#include<algorithm>

using namespace std;

int countBit_naive(unsigned int n){
    int count=0;
    while(n>0){
        if((n&1)==1){
            count++;
        }

        n/=2;
    }
    return count;
}


int countBit_brian(unsigned int n){
    int count=0;
    while(n>0){
        n=(n&n-1);
        count++;
    }
    return count;
}

int countBit(unsigned int n){
    int table[256];

    table[0]=0;
    for(int i=1;i<256;i++){
        // table[i]=countBit_brian(i);
        table[i]=(i&1)+table[i/2];
    }
    int count=0;
    while(n>0){
        int res=(n&0xff);
        n=n>>8;
        count+=table[res];
    }

    return count;
}
int main(){

    unsigned int x=13;
    cout<<countBit(x);


     return 0;
}