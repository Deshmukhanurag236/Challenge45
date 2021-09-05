#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;
int repeatingChar(string s1){
   unordered_map<char,int> freq;
   for(auto x:s1){
       if(freq.find(x)==freq.end()){
           freq[x]=1;
       }
       else{
           freq[x]++;
       }
   }

   for(auto x:s1){
       if(freq[x]>1){
           return x;
       }

   }

   return -1;
       
}


int main(){
    string s1="afdge4fhgsd";
    int res=repeatingChar(s1);
    if(res==-1){
        cout<<"No repeating char)"<<endl;
    }
    else{
        cout<<char(res)<<endl;
    }


  return 0;
}