#include<iostream>
#include<algorithm>

using namespace std;

int insert(int *arr,int size,int cap,int pos, int x){
    if(cap==size)
        return size;
    for(int i=cap;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    return cap+1;
    


}

int main(){

    int arr[5]={1,3,2};
    int cap=3;
    int x=4;
    int pos=3;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<insert(arr,5,cap,pos,x)<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}