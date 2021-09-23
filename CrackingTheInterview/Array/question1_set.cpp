#include<iostream>
#include<algorithm>
#include<set>
#include<unordered_map>

using namespace std;
bool uniqueCharStr_set(string S){
    set<char> tmp;
    for(char i: S){
        if(tmp.find(i)==tmp.end()){
            tmp.insert(i) ;       }
        else{
            return false;
        }
    }
    return true;
}

bool uniqueCharStr_map(string S){
    unordered_map<char,int> tmp;
    for(char i: S){
        if(tmp.find(i)==tmp.end()){
            tmp[i]=1;
        }
        else{
            return false;
        }
    }
    return true;
}

bool uniqueCharStr_noDS(string S){
    int len=S.length();
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(S[i]==S[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){

    string s="A";
    // cout<<uniqueCharStr_set(s)<<endl;
    // cout<<uniqueCharStr_map(s)<<endl;  
    cout<<uniqueCharStr_noDS(s)<<endl;
     return 0;
}