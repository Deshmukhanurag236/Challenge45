#include<iostream>
#include<algorithm>

using namespace std;

void oddAppearing(int arr[],int n){
    int XOR=0,res1=0,res2=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    // cout<<XOR<<endl;
    int sn=XOR&( ~(XOR-1));
    for(int i=0;i<n;i++){
        if((arr[i]&sn)!=0){
            res1^=arr[i];
            }
        else   
            res2^=arr[i];
    }
    cout<<res1<<" "<<res2;
}

int main(){

    int arr[]={1,1,3,4,4,5};
    oddAppearing(arr,6);

     return 0;
}