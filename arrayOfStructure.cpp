#include<iostream>
#include<string>
using namespace std;

typedef struct students{
    int roll;
    string name;
    float marks;
}stu;

//passing array of structure as formal parameter:
void display(stu groupA[],int n)
{
   for(int i=0;i<=n-1;i++)
    {
        cout<<"roll of students"<<i<<":-\t"<<groupA[i].roll<<endl;
        cout<<"roll of students"<<i<<":-\t"<<groupA[i].name<<endl;
        cout<<"roll of students"<<i<<":-\t"<<groupA[i].marks<<endl;
    } 
}
int main()
{
    int n;
    cout<<"enter the size of array:-\t";
    cin>>n;
    //array of structure:
    stu groupA[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<"enter the roll of student"<<i<<":-";
        cin>>groupA[i].roll;
        cout<<"enter the name of student"<<i<<":-";
        cin>>groupA[i].name;
        cout<<"enter the marks of student"<<i<<":-";
        cin>>groupA[i].marks;
    }
    //passing array of structure as actual parameter:
    display(groupA,n);
    return 0;
}