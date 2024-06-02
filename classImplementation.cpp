#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    int standard;
    string first_name;
    string last_name;

    void set_first_name(string Stu_first_name){
        first_name = Stu_first_name;
    };
    void set_last_name(string Stu_last_name){
        last_name = Stu_last_name;
    };
    void set_age(int Stu_age){
        age = Stu_age;
    };
    void set_standard(int std){
        standard = std;
    };

    void get_first_name(){
        cout<<first_name<<endl;
    };
    void get_last_name(){
        cout<<last_name<<endl;
    };
    void get_age(){
        cout<<age<<endl;
    };
    void get_standard(){
        cout<<standard<<endl;
    }
};

int main()
{
    Student s1;
    s1.set_first_name("aditya");
    s1.set_last_name("prakash");
    s1.set_age(24);
    s1.set_standard(12);

    s1.get_first_name();
    s1.get_last_name();
    s1.get_age();
    s1.get_standard();
    return 0;
}