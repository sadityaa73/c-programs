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
    
};
int sumOfMarks(stu s1){
    s1.marks = 20.4; 
    cout<<"printing marks in function"<<":"<<s1.marks<<endl;
    return 0;
};
void nameOfStu(stu &s1)
{
    s1.name ="aashu";
    cout<<"printing name of student from inside the function\t"<<":"<<s1.name<<endl;
}
int main()
{
    stu s1;
    s1.name="aditya";
    s1.roll = 1;
    s1.marks = 32.6;

    // passing structure in funciton:
    display(s1);
    //passing structure in function as value :
    sumOfMarks(s1);
    cout<<"after passing structure as value"<<":-"<<s1.marks;
    //passing structure in funciton as reference:
    nameOfStu(s1);
    cout<<"after passing structure as refernce"<<":-"<<s1.name;
    return 0;
}