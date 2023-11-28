#include <iostream>
#include <string>
using namespace std;
void display(int arr[], int size, string props)
{
    cout << "printing " << props << " sorting";
    cout << "[";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
}

int BubbleSort(int arr[], int size)
{
    int count = 0;
    while (count <= size)
    {
        for (int i = 0; i <= size - 1; i++)
        {
            for (int j = i + 1; j <= size; j++)
            {
                if (arr[i] > arr[j])
                {

                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    i++;
                }
            }
        }
        count++;
    }
    display(arr, size, "after");
    return 0;
}

int main()
{
    int size;
    cout << "enter size of an array:-\t";
    cin >> size;

    int arr[size], props;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << "enter the " << i << " element of an array:- ";
        cin >> arr[i];
    }
    display(arr, size, "before");
    cout << endl;
    BubbleSort(arr, size);
    return 0;
}