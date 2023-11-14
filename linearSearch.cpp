#include<iostream>
using namespace std;

int findElement(int key,int n,int arr[]){
    //  for(int i=0;i<=n-1;i++)
    //  {
    //   if(arr[i]==key)
    //   {
    //     cout<<"element is found inside the array";
    //     break;
    //   }
    //   else{
    //     cout<<"element is not found";
    //   }
    //  }
    int i=0;
    while(i<n-1)
    {
      if(arr[i]==key)
      {
        cout<<"element is found inside the array";
      }
      i++;
    }
     return 0;
}

int main()
{   int n,key;
    cout<<"enter the sixe of an array:-\t";
    cin>>n;
    int arr[n];
    for( int i=0;i<=n-1;i++)
    {
      cout<<"enter the elements of an array:-\t";
      cin>>arr[i];
    }
    cout<<"your final array is :-\t"<<"{";
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"}";

    cout<<"enter the key element you want to find inside the array:-\t";
    cin>>key;

    cout<<findElement(key,n,arr);

    return 0;
}