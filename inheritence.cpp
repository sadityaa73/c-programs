#include<iostream>
#include<string>
using namespace std;

class employee{
    public:
    int phone_number;
    string address;
    int salary;
};

class male_employee:public employee{
    public:
     string name;

     int set_details(string name,int phone_number,string address,int salary)
     {
        this->name = name;
        this->phone_number = phone_number;
        this->address = address;
        this->salary = salary;
        return 0;
     }

     void display()
     {
        cout<<"name of employee:-"<<" "<<name<<endl;
        cout<<"phone number of employee:-"<<" "<<phone_number<<endl;
        cout<<"address of the employee:-"<<" "<<address<<endl;
        cout<<"salary of the employee:-"<<" "<<salary<<endl;
     }
};

int main()
{
    male_employee emp_1;
    string name,address;
    int phone_number,salary;
    cout<<"enter the name of employee:-"<<" "<<endl;
    cin>>name;
    cout<<"enter the phone number of employee:-"<<" "<<endl;
    cin>>phone_number;
    cout<<"enter the address of employee:-"<<" "<<endl;
    cin>>address;
    cout<<"enter the salary of employee:-"<<" "<<endl;
    cin>>salary;

    emp_1.set_details(name,phone_number,address,salary);
    emp_1.display();
    return 0;
}
