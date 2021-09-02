#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;


union t{
    int a;
    char arr[4];
}r;
int main(){
    r.a=pow(2,1);
    cout<<int(r.arr[0])<<int(r.arr[1])<<int(r.arr[2])<<int(r.arr[3]);


     return 0;
}