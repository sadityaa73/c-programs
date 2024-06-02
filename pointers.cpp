#include<iostream>
using namespace std;
int main(){

    //declearing a normal variable;
    int a = 23;

    //declearing a pointer variable:
    int *b = &a;
    
    *b=25;

    cout<<"a"<<a<<endl;
    cout<<"b"<<*b<<endl;
    cout<<b<<endl;
    return 0;
}