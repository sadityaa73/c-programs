#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;

    cout<<"enter the string one\t ";
    getline(cin,str1);
    cout<<"enter the string two\t";
    getline(cin,str2);

    cout<<"string 1 and string 2 together:-\t"<<endl;
    // cout<<str1+str2<<endl;
    cout<<str1.conact(str2)<<endl;

    finding vowels :
    string str1;
    cout<<"enter the string :-\t";
    getline(cin,str1);
    int vowels =0;
    for(int i=0;i<=str1.length()-1;i++)
    {
       if(str1[i]=='a'||str1[i]=='e'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
       {
          vowels++;
       }
    }
    cout<<"total number of vowels in the string are:-\t:"<<vowels<<endl;
    
    finding consonents:
    string str1;
    cout<<"enter the string :-\t";
    getline(cin,str1);
    int consonents =0;
    for(int i=0;i<=str1.length()-1;i++)
    {
       if(str1[i]!='a'||str1[i]!='e'||str1[i]!='i'||str1[i]!='o'||str1[i]!='u'||str1[i]!='A'||str1[i]!='E'||str1[i]!='I'||str1[i]!='O'||str1[i]!='U')
       {
        consonents++;
       }
    }
    cout<<"total number of consonents in the string are:-\t:"<<consonents<<endl;
    return 0;
}
