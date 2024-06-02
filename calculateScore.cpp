#include<iostream>
#include<vector>
using namespace std;

class Student
{
    private:
     vector<int>score;
    public:
    void input(){
        for(int i=0;i<5;i++)
        {   
            int val;
            cin>>val;
            score.push_back(val);
        }
    }
    void display()
    {
        cout<<"[";
        for(int i=0;i<5;i++)
        {
            cout<<score[i]<<",";
        }
        cout<<"]"<<",";
    }
    int calculateTotalScore()
    {
        int total = 0;

        for(int i=0;i<5;i++)
        {
            total += score[i];
        }
        return total;
    }
};

int main(){
    Student *s = new Student[2];

    for( int i=0;i<2;i++)
    {
        cout<<"input for "<< i <<" th "<<" student :-"<<endl;
        s[i].input();
    }

    for( int i=0;i<2;i++)
    {
        s[i].display();
    }

    cout<<"totalScore:-"<<s[0].calculateTotalScore();
    return 0;
}