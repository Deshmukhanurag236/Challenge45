#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;
int NonrepeatingChar(string s1){
  int pos[256];
  for(int i=0;i<256;i++){
      pos[i]=300;
  }

  for(int i=0;i<s1.length();i++){
      if(pos[s1[i]]==300)
        pos[s1[i]]=i;
      else
        pos[s1[i]]=301;
        // cout<<s1[i]<<" "<<pos[s1[i]]<<endl;
  }

  int res=INT_MAX;

  for(auto x:pos){
      if(x<res)
        res=x;
  }
//   cout<<pos['a'];
  return (res==INT_MAX || res>256 )?-1:res;
       
}


int main(){
    string s1="afdge4fhagsd";
    int res=NonrepeatingChar(s1);
    if(res==-1){
        cout<<"No Nonrepeating char)"<<endl;
    }
    else{
        cout<<s1[res]<<endl;
    }


  return 0;
}