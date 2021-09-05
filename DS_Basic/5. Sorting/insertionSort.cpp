#include<iostream>
#include<algorithm>

using namespace std;


void insertionSort(int *arr, int n){
    for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }

}
   

int main(){

    int arr[]={1,2,2,5,7,4,5,78,43,235,3,54,6,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}