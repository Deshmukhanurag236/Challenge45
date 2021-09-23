#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;
bool uniqueCharStr(string S){
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


int main(){

    string s="Aaa";
    cout<<uniqueCharStr(s);

     return 0;
}