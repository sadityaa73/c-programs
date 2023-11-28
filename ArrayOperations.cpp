#include <iostream>
using namespace std;

const int Max_Size = 100;

void display(int arr[], int &size)
{
    cout << "size of array " << size << endl;
    cout << "[";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << "]";
    cout << endl;
}

int insertAtBegain(int arr[], int &size, int element)
{
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    size++;
    display(arr, size);
    return 0;
}

int insertAtEnd(int arr[], int &size, int element)
{
    arr[size] = element;
    size++;
    display(arr, size);
    return 0;
}

int insertAtMid(int arr[], int &size, int element)
{
    int start = 0, end = size - 1, mid = (start + end) / 2;
    cout << "mid " << mid << endl;
    for (int i = size; i >= mid; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[mid] = element;
    size++;
    display(arr, size);
    return 0;
}

int deleteAtStart(int arr[], int &size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    display(arr, size);
    return 0;
}

int deleteAtEnd(int arr[], int &size)
{
    size--;
    display(arr, size);
    return 0;
}
int deleteAtMid(int arr[], int &size)
{
    int start = 0, end = size - 1, mid = (start + end) / 2;
    for (int i = mid; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    display(arr, size);
    return 0;
}

int deleteAtGivenPosition(int arr[], int &size, int element)
{
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] == element)
        {
            for (int j = i; j <= size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    size--;
    display(arr, size);
    return 0;
}

int main()
{
    int arr[Max_Size] = {2, 6, 8, 4};
    int size = 4;

    display(arr, size);
    insertAtBegain(arr, size, 1);
    insertAtBegain(arr, size, 10);
    insertAtEnd(arr, size, 22);
    insertAtEnd(arr, size, 34);
    insertAtMid(arr, size, 55);
    deleteAtStart(arr, size);
    deleteAtEnd(arr, size);
    deleteAtMid(arr, size);
    deleteAtGivenPosition(arr,size,55);
    return 0;
}