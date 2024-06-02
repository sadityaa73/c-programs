#include<iostream>
using namespace std;

class Base{
    public:
    string name;
    public:
   virtual void print(){
        cout<<"Base Class";
    }
    string getName(string val)
    {
        name = val;
        cout<<name<<endl;
        return name;
    }
};

class Derived :public Base{
    public:
    void print()
    {
        cout<<"Derived Class"<<endl;
    };
};

int main()
{
    Base *base = new Base;
    Derived derived1;
    base = &derived1;
    base->print();
    return 0;
}