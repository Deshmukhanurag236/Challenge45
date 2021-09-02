#include<iostream>
#include<algorithm>

using namespace std;

void swapRef(int &x,int &y){
    int tmp=x;
    x=y;
    y=tmp;
}

void swapPointer(int *x,int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

void swapPointer2(int *x,int *y){
    int *tmp=x;
    x=y;
    y=tmp;
    cout<<"Internal swapPointer2 : "<<endl;
    cout<<" x : "<<*x<<" y : "<<*y<<endl;
}


int main(){

    int a=10,b=20;
    swapRef(a,b);
    cout<<"After swapRef a : "<<a<<" b : "<<b<<endl<<endl;
    swapPointer(&a,&b);
    cout<<"After swapPointer a : "<<a<<" b : "<<b<<endl<<endl;
    swapPointer2(&a,&b);
    cout<<"After swapPointer2 a : "<<a<<" b : "<<b<<endl<<endl;


     return 0;
}