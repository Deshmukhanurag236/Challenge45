#include<iostream>
#include<algorithm>


using namespace std;

int anagramExist(string s,string p){
    int sl=s.length();
    int pl=p.length();

    
if(pl<sl){
    int countS[256]={0};
    int countP[256]={0};

    for(int i=0;i<pl;i++){
            countS[s[i]]++;
            countP[p[i]]++;
    }
    int i=0;
    while(i+pl<sl){

        for(int x=0;x<256;x++){
            if(countS[x]!=countP[x]){
                break;
            }
            if(x==255){
                return true;
            }
            
        }

        countS[s[i]]--;
        countS[s[i+pl]]++;
        i++;


    }}
    return false;

}


int main(){
    string s="geeksforgeeks";
    string p="rofs";
    cout<<anagramExist(s,p);

     return 0;
}