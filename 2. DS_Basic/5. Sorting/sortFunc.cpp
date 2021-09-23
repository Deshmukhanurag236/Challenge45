#include<iostream>
#include<algorithm>

using namespace std;

//Sort can be used with vector, array, deque;
//quicksort, heapsort, insertionsort

int main(){
    int arr[]={1,2,2,5,7,4,5,78,43,235,3,54,6,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr,arr+size,greater<int>());
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;




     return 0;
}