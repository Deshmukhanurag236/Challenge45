#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int balancedBracket(string A){
    int l=A.length();
    stack<char> s;
    s.push(A[0]);
    if(A[0]=='}' || A[0] == ']' || A[0]==')')
        return 0; 
    for(int i=1;i<l;i++){
        if(A[i]=='}' && s.top()=='{')
            s.pop();
        else if (A[i]==']' && s.top()=='[')
            s.pop();
        else if (A[i]==')' && s.top()=='(')
            s.pop();
        else
            s.push(A[i]);  
    }

    return s.empty()==true;

}


int main(){
    string s="({[({[]})]})";
    cout<<balancedBracket(s);


     return 0;
}