#include<iostream>
#include<algorithm>

using namespace std;

void swap(int &i,int &j){
    int tmp=i;
    i=j;
    j=tmp;
}
void reverse(int *arr,int size){
  int begin=0;
  int end=size-1;

  while(begin<end){
      swap(arr[begin],arr[end]);
      begin++;
      end--;

    
    }
 
  
      
}

int main(){
     int arr[]={1,2,3,4,5,6};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}