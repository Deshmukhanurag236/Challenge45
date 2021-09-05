#include<iostream>
#include<algorithm>

using namespace std;
void swap(int &i,int &j){
    int tmp=i;
    i=j;
    j=tmp;
}

void bubbleSort(int *arr,int size){
    int len=size;
    int swaped=false;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                    swap(arr[j+1],arr[j]);
                    swaped=true;
            }
        }
         if(swaped==false){
        break;
    }
}
    }
   

int main(){

    int arr[]={1,2,2,5,7,4,5,78,43,235,3,54,6,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}