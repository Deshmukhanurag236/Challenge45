#include<iostream>
#include<algorithm>

using namespace std;

int deleteX(int *arr,int size,int x){
    int pos;
    for( pos=0; pos<size;pos++){
        if(arr[pos]==x){
            break;
        }
    }

    if(pos==size){
        return size;
    }

    for(int i=pos;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    if(pos==size-1){
        arr[pos]=0;
    }
    else{
        arr[size-1]=0;
    }
    return size-1;
}

int main(){

  int arr[5]={1,3,2,2,4};
    int x=2;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<deleteX(arr,size,x)<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}