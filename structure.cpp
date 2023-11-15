#include<iostream>
#include<string>
using namespace std;

//declearing a structure by using typedef:
typedef struct student{
    string name;
    int roll;
    float marks;
}stu;
void display(stu s1){
    cout<<"student_name"<<":-"<<s1.name<<endl;
    cout<<"student_roll"<<":-"<<s1.roll<<endl;
    cout<<"student_marks"<<":-"<<s1.marks<<endl;
    
}
int main()
{
    stu s1;
    s1.name="aditya";
    s1.roll = 1;
    s1.marks = 32.6;

    // passing structure in funciton:
    display(s1);
    return 0;
}