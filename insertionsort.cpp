#include <iostream>
#include <string>
using namespace std;
const int Max_Size = 20;
void display(int arr[], int size, string props)
{
    cout << "printing array " << props << " implimenting insertiona sort:- " << endl;
    cout << "[";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << "]";
}

int insertionSort(int arr[], int size)
{
    int i,key,j;
    for ( i = 1; i <= size - 1; i++)
    {
       key = arr[i];
       j = i-1;

       while(j>=0 && arr[j]>key)
       {
        arr[j+1] = arr[j];
        j = j-1;
       }
       cout<<"value of j"<<j<<endl;
       arr[j+1] = key;
    }
    display(arr, size, "after");
    return 0;
}

int main()
{
    // int size;
    // cout << "enter the size of array:- ";
    // cin >> size;
    // int arr[size];
    // for (int i = 0; i <= size - 1; i++)
    // {
    //     cout << "enter the " << i << " element of array:- ";
    //     cin >> arr[i];
    // }
    int arr[Max_Size] = {12, 4, 22, 3};
    int size = 4;
    cout << "size" << size << endl;
    display(arr, size, "before");
    cout << endl;
    insertionSort(arr, size);
    return 0;
}