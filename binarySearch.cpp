#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start, end, mid;
    start = 0;
    end = n - 1;
    mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            cout << "key element is founded inside the array";
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int size;
    cout << "enter the size of array:-\t";
    cin >> size;
    int arr[size],key;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << "enter the array's"
             << " " << i << " "
             << "element:-\t";
        cin >> arr[i];
    }
    cout << endl;
    cout << "printing size of array:-\t" << sizeof(arr) << endl;
    cout << endl;
    cout<<"enter the key you want to find inside the array:-";
    cin>>key;
    cout << "[";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]";
    cout<<endl;
    int index = BinarySearch(arr,size,key);
    cout<<" at index of the key"<<":"<<index;

    return 0;
}