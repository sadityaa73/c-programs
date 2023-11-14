#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"enter the row of the 2d array:-\t";
    cin>>m;
    cout<<"enter the column of the 2d array:-\t";
    cin>>n;
    //m for row and n for column;
    int arr[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"enter the elements for"<<"["<<i<<"]"<<"["<<j<<"]"<<":-\t";
            cin>>arr[i][j];
        }
    }

    //printing 2d array:

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<endl;

    }

    //manipuating 2d array:

    arr[1][0]= 3;
    arr[1][1]= 2;

    cout<<"after manipuating 2d array manually"<<endl;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<endl;

    }

    return 0;
}