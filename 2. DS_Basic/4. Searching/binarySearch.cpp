#include<iostream>
#include<algorithm>

using namespace std;

int binarySearch(int *arr,int size,int start,int mid,int end,int x){
    if(end>=start){
        mid=(start+end)/2;
        if(arr[mid]==x){
            return 1;
            
        }
        else if(arr[mid]<x){
            start=mid+1;


        }
        else{
            end=mid-1;
        }
        return binarySearch(arr,size,start,mid,end,x);


    }
    return -1;
   
}

int main(){
    int arr[]={1,3,5,6,7,33,45,67,545};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=58;
    cout<<binarySearch(arr,size,0,0,size-1,x);


     return 0;
}