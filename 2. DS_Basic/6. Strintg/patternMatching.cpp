#include<iostream>
#include<algorithm>


using namespace std;

void patternMatching(string s,string p){
   
   int sL=s.length();
   int pL=p.length();
   if(pL<=sL){
       for(int i=0;i<sL-pL+1;){
           int j=0;
           for(;j<pL;j++){
            //    cout<<p[j]<<" i : "<<s[i]<<endl;
               if(s[i+j]!=p[j])    
                    break;
           }
               if(j==pL){
                    cout<<i<<" "<<s[i]<<endl;}
                if(j==0)
                    i++;
                else    
                    i+=j;

           }
       
   }
   
}


int main(){
    string s="AgfdsBCDEfds";
    string p="fds";
    patternMatching(s,p);

     return 0;
}