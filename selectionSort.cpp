#include <iostream>
#include <string>
using namespace std;

void display(int arr[], int size, string props)
{
    cout << "display array " << props << "sorting:" << endl;
    cout << "[";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << "]";
}

int selectionSort(int arr[], int size)
{
    int count = 0;
    while (count < size)
    {    
        int min = arr[count];
        int temp;
        cout<<"min "<<min<<endl;
        for (int i = count; i <= size - 1; i++)
        {
            if (min > arr[i])
            {
                 temp = arr[i];
                 arr[i] = min;
                 min = temp;
            }
        }
        arr[count] = min;

        cout<<"element "<<arr[count]<<endl;
        cout<<endl;
        count++;
    }
    display(arr, size, "after");
    return 0;
}

int main()
{
    int size;
    cout << "enter the size of array:-";
    cin >> size;

    int arr[size];
    for (int i = 0; i <= size - 1; i++)
    {
        cout << "enter the "
             << " " << i << " "
             << "element of an array:-\t";
        cin >> arr[i];
    }

    display(arr, size, "before");
    cout << endl;
    selectionSort(arr, size);
    return 0;
}