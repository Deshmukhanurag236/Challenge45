#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

bool isPrime(int n){
    float ans=(n-1)/6.0;
    float ans2=(n+1)/6.0;
    if( (ans-(int)ans!=0.0) && (ans2-(int)ans2!=0.0) && ans>0 ){
        return false;

    }
   return true;
}


int main(){
    int x=2;
    float y=4.0;
    y=y/2;
    cout<<isPrime(7);


     return 0;
}