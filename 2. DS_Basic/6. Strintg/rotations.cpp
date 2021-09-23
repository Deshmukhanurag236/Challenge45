#include<iostream>
#include<algorithm>


using namespace std;

int rotationsOfString(string s,string p){
   
   int sL=s.length();
   int pL=p.length();
   if(pL==sL){
       string tmp=s+s;
       return (tmp.find(p)!=string::npos);

   }
   return false;
   

 

}


int main(){
    string s="ABCD";
    string p="CDAB";
    cout<<rotationsOfString(s,p);

     return 0;
}