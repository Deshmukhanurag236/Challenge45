#include<iostream>
#include<algorithm>

using namespace std;
int anagram(string s1,string s2){
    int count[255]={0};
    for(auto x:s1){
        count[x]++;
    }
    for(auto x:s2){
        count[x]--;
    }
    for(auto x:count){
        if(x!=0)
            return -1;
    }
    return 1;
}


int main(){
    string s1="Anurag";
    string s2="garunAnu";
    cout<<anagram(s1,s2);


     return 0;
}