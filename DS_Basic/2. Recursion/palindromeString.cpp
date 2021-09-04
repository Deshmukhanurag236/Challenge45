#include<iostream>
#include<algorithm>

using namespace std;

bool palindromeString(string x,int s, int e){
    if(s<=e){
        if(x[s]==x[e])
            palindromeString(x,s+1,e-1);
        else    
            return false;
    return true;

    }
    return false;
    
    
}

int main(){
    string x="naman";
    int s=0;
    int e=x.length()-1;
    cout<<palindromeString(x,s,e);


     return 0;
}