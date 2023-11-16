#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int roll;
    string subjects[3];

    int setDetails(string name, int roll,int n, string subjects[])
    {
        this->name = name;
        this->roll = roll;
        for (int i = 0; i <=n-1; i++)
        {
            this->subjects[i]=subjects[i];
        }
        return 0;
    }
    void getDetails(int n)
    {
        cout << "name of student:-\t" << name << endl;
        cout << "roll of student:-\t" << roll << endl;
        for (int j = 0; j <=n-1; j++)
        {
            cout << "name of the subject" << j << ":-\t" << subjects[j] << endl;
        }
    }
};

int main()
{
    student s1;
    int n;
    string name;
    int roll;
    cout << "enter the name of student:-";
    getline(cin,name);
    cout << "enter the roll of the student:-";
    cin >> roll;
    cout<<"enter the number of subject:-";
    cin>>n;
    string subject[n];
    for (int i = 0; i <=n-1; i++)
    {
        cout << "enter the name of the " << i << "subject:-\t";
        cin>>subject[i];
    }
    s1.setDetails(name, roll,n, subject);
    s1.getDetails(n);
    return 0;
}