#include<iostream>
#include<algorithm>

using namespace std;

void printSubset(string str,string curr="",int index=0){
    if(index==str.length()){
        cout<<curr<<" ";
        return;
    }
    printSubset(str,curr+str[index],index+1);
    printSubset(str,curr,index+1);
}

int main(){
    string str="ABCD";
    printSubset(str);


     return 0;
}