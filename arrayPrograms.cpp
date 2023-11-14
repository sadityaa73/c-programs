#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    float avg=0;
    cout<<"enter the size of array:-\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<"enter the lements of an array";
        cin>>arr[i];
    }
    cout<<"your final array:-\t"<<"[";
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;

//finding sum of array elements:
   int count=0;
   while(count<=n-1)
   {
     sum+=arr[count];
     count++;
   }
   cout<<"sum of array element:-\t";
   cout<< sum <<endl;

//finding average sum of array elements:

int i=0;
int sum2=0;
while(i<=n-1)
{
    sum2+=arr[i];
    i++;
}
cout<<"value of i"<<i<<endl;
cout<<"value of sum"<<sum<<endl;
avg = sum/i;
cout<<"avg sum of array elements:-\t"<<avg<<endl;

//finding product of array elements:

int j=0;
int product;
while(j<=n-1)
{
    product*=arr[j];
    j++;
}
cout<<"product of array elements:-\t"<<product<<endl;

//finding maximum and minimum value from the array elements:

int k=0,max=0;
while(k<=n-1)
{
    if(max < arr[k])
    {
        max = arr[k];
    }
    k++;
}
cout<<"maximum value from the array:-\t"<<max<<endl;

int t=0,min;
while(t<=n-1)
{
    min=arr[0];
    if(arr[t]<min)
    {
        min = arr[t];
    }
    t++;
}
cout<<"minimum value from the array:-\t"<<min<<endl;
    return 0;
}