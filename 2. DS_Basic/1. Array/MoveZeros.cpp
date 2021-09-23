#include<iostream>
#include<algorithm>

using namespace std;

void swap(int &i,int &j){
    int tmp=i;
    i=j;
    j=tmp;
}
void moveZeros(int *arr,int size){
  int count=0;
  int i=0;
  while(i<size){

      

      if(arr[i]!=0){
            swap(arr[count],arr[i]);
            count++;           
      }
      
      i++;


    }
 
  
      
}

int main(){
     int arr[]={0,0,0,1,0,111,0,0,2,12,1,0};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr,size);
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}