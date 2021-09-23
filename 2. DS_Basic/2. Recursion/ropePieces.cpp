#include<iostream>
#include<algorithm>

using namespace std;

int ropePieces(int n,int a, int b, int c){
       
       if(n==0){
           return 0;
       }
       if(n<0)
        return -1;

       int res=max(max(ropePieces(n-a,a,b,c),ropePieces(n-b,a,b,c)),ropePieces(n-c,a,b,c));
        if(res==-1)
            return -1;
        else   
            return res+1;
    }

int main(){
    int n=23,a=11,b=9,c=12;
  
    cout<<ropePieces(n,a,b,c);
     return 0;
}