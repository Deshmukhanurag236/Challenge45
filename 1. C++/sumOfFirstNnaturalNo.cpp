#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    if(n>0)
        cout<<endl<<"The sum of first "<<n<<" natural number is : "<<n*(n+1)/2<<endl;
    else
        cout<<"Enter a valid positive number"<<endl;
     return 0;
}