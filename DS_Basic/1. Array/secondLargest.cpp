#include<iostream>
#include<algorithm>

using namespace std;

int secondLargestEle(int *arr,int size){
    int max=INT_MIN;
    int secondMax=-1;
    for(int i =0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    for(int i=0;i<size;i++){
        if(arr[i]==max){
            continue;
        }
       
        if(arr[i]>secondMax){
            secondMax=arr[i];
        }
    }
    
    return secondMax;
}

int main(){
     int arr[]={1,5,234,34,123,432};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargestEle(arr,size)<<endl;


     return 0;
}