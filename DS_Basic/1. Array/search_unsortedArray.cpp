#include<iostream>
#include<algorithm>

using namespace std;

int search(int *arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    
    }
    return -1;
}

int main(){

        int arr[]={1,3,45,23,5};
        cout<<search(arr,5,45);


     return 0;
}