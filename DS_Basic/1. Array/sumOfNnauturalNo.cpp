#include<iostream>
#include<algorithm>

using namespace std;

int sumNno(int n){
    return n*(n+1)/2;
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<sumNno(n);

     return 0;
}