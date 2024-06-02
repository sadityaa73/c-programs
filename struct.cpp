#include <iostream>
using namespace std;

// class Base {
//     public:
//     Base(){
//         cout<<"Base class constructor called"<<endl;
//     }
//     ~Base(){
//         cout<<"Base class Dconstructor called"<<endl;
//     }
// };

// class Derived : public Base{
//   public:
//     Derived()
//     {
//          cout<<" Derived class constructor called"<<endl; 
//     }
//     ~Derived()
//     {
//         cout<<"Derived class Dconstructor called"<<endl;
//     }
// };
int main()
{
   int a = 5, b = 10, c = 15;
        int *arr[ ] = {&a, &b, &c};
        cout << *arr[*arr[2]];
    return 0;
}