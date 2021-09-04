#include<iostream>
#include<algorithm>

using namespace std;

int printFact(int x,int ans=1){
    if(x>=0){
    if(x<=1)
            return ans;
            ans*=x;
        return printFact(x-1,ans);
    }
    return -1;
    
}

int main(){
    int x=5;
    cout<<printFact(10);


     return 0;
}