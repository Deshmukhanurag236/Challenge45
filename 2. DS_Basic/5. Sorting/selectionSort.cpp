#include<iostream>
#include<algorithm>

using namespace std;


void selectionSort(int *arr, int n){
    int tmp[n];
    for(int i=0;i<n;i++){
        int min_idx=0;
        for(int j=1;j<n;j++){
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
            tmp[i]=arr[min_idx];
            arr[min_idx]=INT_MAX;
        
    }
    for(int i=0;i<n;i++){
        arr[i]=tmp[i];
    }
}
   

int main(){

    int arr[]={1,2,2,5,7,4,5,78,43,235,3,54,6,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}