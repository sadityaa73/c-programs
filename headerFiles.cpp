#include<iomanip>
#include <ios>
#include<iostream>


using namespace std;
int main()
{
    float num = 1.34562345;
    double num2 = 2.3456234561;

    cout<<"float num:-\t"<<num<<endl;
    cout<<"double num:-\t"<<num2<<endl;

    cout<<setprecision(7);
    cout<<"after using setprecision(7)"<<endl;
    cout<<"float num:-\t"<<num<<endl;
    cout<<"double num:-\t"<<num2<<endl;

    cout<<setprecision(9);
    cout<<"after using setprecision(9)"<<endl;
    cout<<"float num:-\t"<<num<<endl;
    cout<<"double num:-\t"<<num2<<endl;
   
   int num = 50;
   cout<<num<<endl;
   cout<<setw(4);
   cout<<num;
     string str;
     cout<<"enter the name :-";
     cin>>setw(4)>>str;
     cout<<str;

use of cascading operator:

int h1,h2;

cout<<"enter the value of h1:-\t";
cin>>h1;
cout<<"enter the value of h2:-\t";
cin>>h2;
cout<<"total sum of the two integer you entered is:-\t"<<h1+h2<<endl;

    return 0;
}