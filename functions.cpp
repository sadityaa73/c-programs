#include<iostream>
#include<string>
using namespace std;

//function decelaration:
//the parameters are recieve here is known as formal parameters or also kknows as formal arguments:
int greet(string first_name,string last_name)
{
    //funciton defination;
    cout<<"your name is :-\t"<<first_name<<" "<<last_name<<endl;
    
    cout<<"your name after manipulating the values:-\t"<<first_name<<" "<<last_name<<endl;
    first_name ="aashu";
    last_name ="singh";
    return 0;
}
int number(int *ptr1,int *ptr2)
{
    *ptr1=10;
    *ptr2=24;
    return 0;
}
int main()
{
    string first_name,last_name;
    cout<<"enter your first_name:-\t";
    getline(cin,first_name);
    cout<<"enter last name:-\t";
    getline(cin,last_name);

    //calling greet funciton:
    //the parameters are sending from here in known as actual paramanter or also known as actual argument;
    greet(first_name,last_name);

    //call by value :

    greet(first_name,last_name);
     cout<<"your name after manipulating the values:-\t"<<first_name<<" "<<last_name<<endl;
    //call by reference:
    int x=20,y=40;
    cout<<"value of x and y before send the address of the variable as call by ref"<<endl;
    cout<<"value of x:-\t"<<x<<" "<<"value of y:-\t"<<y<<endl;
    number(&x,&y);
    cout<<"value of x and y after send the address of the variable as call by ref"<<endl;
    cout<<"value of x:-\t"<<x<<" "<<"value of y:-\t"<<y<<endl;
    return 0;
}