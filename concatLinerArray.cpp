#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    cout<<"printing size "<<size<<endl;
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

int arrConact(int arr[], int arr2[], int size, int size2)
{
    int newArrSize = size + size2;
    int finalArr[newArrSize];
    int index = 0;
    int counter = 0;
    while (counter <= size - 1)
    {
        if (index <= newArrSize - 1)
        {
            finalArr[index] = arr[counter];
            index++;
        }
        cout<<"value of index from 1st "<<index<<endl;
        counter++;
    }
    counter = 0;
    while (counter <= size2 - 1)
    {
       if (index <= newArrSize - 1)
        {
            finalArr[index] = arr2[counter];
            index++;
        }
        cout<<"value of index from 2nd "<<index<<endl;
        counter++;
    }
    display(finalArr, newArrSize);
    return 0;
}

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {5, 6, 7, 8};
    
    arrConact(arr1,arr2,4,4);
    return 0;
}