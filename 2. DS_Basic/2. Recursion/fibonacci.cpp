#include<iostream>
#include<algorithm>

using namespace std;

int fibonacci(int x){
    if(x>=0){
    if(x<=1)
            return x;
        return fibonacci(x-1)+fibonacci(x-2);
    }
    return -1;
    
}

int main(){
    int x=10;
    cout<<fibonacci(x);


     return 0;
}