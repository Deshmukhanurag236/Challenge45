#include<iostream>
#include<algorithm>

using namespace std;

int sumOfDigit(int x,int k=0){
    
    if(x==0)
            return k;
    k+=x%10;
    x/=10;
    return sumOfDigit(x,k);
        
    
    
    
}

int main(){
    int x=12;
    cout<<sumOfDigit(x);


     return 0;
}