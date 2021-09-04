#include<iostream>
#include<algorithm>

using namespace std;


int largestEle(int *arr,int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){

  int arr[5]={1,3,290,2,4};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<largestEle(arr,size)<<endl;
  

     return 0;
}