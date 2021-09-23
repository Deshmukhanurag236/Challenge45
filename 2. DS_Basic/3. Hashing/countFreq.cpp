#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

map<int,int> countFreq(int *arr,int size){

    map<int,int> tmp;
    for(int i=0;i<size;i++){
        if(tmp.find(arr[i])!=tmp.end()){
            tmp[arr[i]]++;
        }
        else{
            tmp[arr[i]]=1;
        }
        
    }
    return tmp;
}

int main(){

    int arr[]={15,12,13,12,13,13,18};
    vector<int> v;
    for(int i:arr){
        v.push_back(i);
    }
    vector<int>::iterator ip;
  
    ip = std::unique(v.begin(), v.begin()+v.size());

    v.resize(std::distance(v.begin(), ip));

    int size=sizeof(arr)/sizeof(arr[0]);
    map<int,int> freq=countFreq(arr,size);
    for(auto x: v)
        cout<<x<<" : "<<freq[x]<<endl;
    
     return 0;
}