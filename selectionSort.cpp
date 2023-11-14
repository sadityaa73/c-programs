#include<iostream>
using namespace std;

int main()
{
    int arr[10],n,max=0;
    cout<<"enter the size of array:-\t";
    cin>>n;
    for(int i=0;i <= n-1;i++)
    {
       cout<<"enter the element of array:-\t";
       cin>>arr[i];
    }
    cout<<"you final array is" <<endl;
    for(int j=0;j <= n-1;j++){
        cout<<arr[j]<<",";
    }
    cout<<endl;
   
   //print the sorted array:

   for(int i=0;i<=n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            int temp;
            temp = arr[j];
            cout<<"temp"<<temp<<endl;
            arr[j] = arr[i];
            cout<<"arr[j]"<<arr[j]<<endl;
            arr[i] = temp;
            cout<<"arr[i]"<<arr[i]<<endl;
        }
    }
   }
   cout<<"sorted array is :-\t";
   for(int i=0;i<=n-1;i++)
   {
    cout<<arr[i]<<",";
   }
    
    return 0;
}