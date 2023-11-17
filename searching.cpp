#include <iostream>
using namespace std;

int linearSearch(int n, int key, int arr[])
{

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == key)
        {
            cout << "key elelments found at"
                 << " " << i << " "
                 << "the index inside of the array" << endl;
        }
    }
    return -1;
}

int binarySearch(int array[], int n)
{
    return 0;
};

int main()
{
    int n, key;
    cout << "enter the size of an array:-\t";
    cin >> n;
    int arr[n];
    cout << "enter the elements of an array:-\t";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "enter the " << i << "element of an array:-"
             << " ";
        cin >> arr[i];
    }

    cout << "printing array"
         << "" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << ",";
    }

    cout << "enter the key element you want to find inside the array:-"
         << " ";
    cin >> key;

    linearSearch(n, key, arr);
    binarySearch(arr, n);
    return 0;
}