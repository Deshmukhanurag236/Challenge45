#include<iostream>
#include<algorithm>

using namespace std;
int fact(int x,int ans=1){
    if(x>=0){
    if(x<=1)
            return ans;
            ans*=x;
        return fact(x-1,ans);
    }
    return -1;
    
}
int lexicographicalRank(string s){
    
    int n=s.length();
    int rank=1;
    int mul=fact(n);
    int count[256]={0};
    for(int i=0;i<n;i++){
        count[s[i]]++;
        // cout<<int(s[i])<<" : "<<s[i]<<" : "<<count[s[i]]<<endl;

    }
    for(int i=1;i<256;i++){
        count[i]=count[i]+count[i-1];
        // cout<<char(i)<<" : "<<i<<" : "<<count[i]<<endl;
}
    for(int i=0;i<n;i++){
            mul=mul/(n-i);
            rank=rank+count[s[i]-1]*mul;
            for(int j=s[i];j<256;j++){
                count[j]--;
            }
    }
    return rank;
        
}

int main(){

    string s="STRING";
    cout<<lexicographicalRank(s);

     return 0;
}