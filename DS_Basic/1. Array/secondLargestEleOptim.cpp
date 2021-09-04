#include<iostream>
#include<algorithm>

using namespace std;

int secondLargestEle(int *arr,int size){
    int max=INT_MIN;
    int secondMax=-1;
    for(int i =0;i<size;i++){
        
        if(arr[i]>max){
            if(max!=INT_MIN){
                secondMax=max;
            }
            
            max=arr[i];
        }
        else{
            if(arr[i]!=max && arr[i]>secondMax){
                secondMax=arr[i];
                
            }
        }
    }
    
    
    return secondMax;
}

int main(){
     int arr[]={1,3,4,3,3,3,4,4,4,4,5,5};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargestEle(arr,size)<<endl;


     return 0;
}