#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std;

int countDistinctEle(int *arr,int size){

    unordered_set<int> tmp;
    int count=0;
    for(int i=0;i<size;i++){
        if(tmp.find(arr[i])==tmp.end()){
            count++;
            tmp.insert(arr[i]);
        }
        
    }
    return count;;
}

int main(){

    int arr[]={15,12,13,12,13,13,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<countDistinctEle(arr,size);
     return 0;
}