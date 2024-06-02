#include<iostream>
using namespace std;

int removeAtIndex(int arr[],int size,int index)
{
    for(int i=0;i<=size-1;i++)
    {
       if( i == index)
       {
          int k = i;
           while(k <= size)
           {
              arr[k] = arr[k+1];
              k++;
           }
       }
    }
    cout<<"after remove element at  given index"<<endl;
    for(int j=0;j<=size-1;j++)
    {
       cout<<arr[j]<<",";
    }
    return 0;
}

int main()
{
    int array[5]={2,5,3,1,7};
    int size = (sizeof(array)/sizeof(int));
    removeAtIndex(array,size,0);
    return 0;
}