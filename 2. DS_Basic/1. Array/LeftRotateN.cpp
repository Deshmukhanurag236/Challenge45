#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


vector<int> leftRotate(int *arr,int size,int lr){
  
    vector<int> tmp;
    for(int i=lr;i<size;i++){
        tmp.push_back(arr[i]);

    }

    for(int i=0;i<lr;i++){
        tmp.push_back(arr[i]);
    }

    return tmp;
  
      
}

int main(){
     int arr[]={1,2,3,4,5,6};
    int lr=5;
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans=leftRotate(arr,size,lr);

      for(auto i=ans.begin();i<ans.end();i++){
        cout<<*i<<" ";
    }

     return 0;
}