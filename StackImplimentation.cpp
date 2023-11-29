#include <iostream>
#include <string>
using namespace std;
#define max 6
class stack
{
    int top;

public:
    int arr[max];
    int capacity;
    // constructor:
    stack()
    {
        top = -1;
        capacity =0;
    }

    int push(int x);
    int pop();
    int isEmpty();
    int size();
    void display(int arr[], int size, string props);
};

void stack::display(int arr[], int size, string props)
{
    cout << "printing stack after " << props << endl;
    cout<<"[";
    int counter = 0;
    while(counter<=size)
    {
       cout<<arr[counter];
       if(counter != size)
       cout<<",";
       counter++;
    }
    cout<<"]";
    cout<<endl;
}
int stack::push(int x)
{
    if (top >= max - 1)
    {
        cout << "stack is overflowed" << endl;
        return false;
    }
    else
    {
        arr[++top] = x;
        capacity++;
        display(arr,top,"inserting element");
        return x;
    }
}

int stack::pop()
{
    if (top < 0)
    {
        cout << "stack is underflowed" << endl;
        return false;
    }
    else
    {
        int x = arr[top--];
        capacity--;
        cout<<"item is poped:- "<<x<<endl;
        display(arr,top,"poping element");
        return x;
    }
}

int stack::isEmpty()
{
    if (top < 0)
        return true;
    else
        return false;
}

int stack::size()
{
    return capacity;
}

int main()
{
    stack s1;
    s1.push(2);
    s1.push(10);
    s1.push(12);
    s1.push(66);
    s1.push(2);
    s1.push(1);
    cout<<"size "<<s1.size()<<endl;
    cout<<s1.isEmpty()<<endl;
    s1.pop();
    s1.pop();
    cout<<"size "<<s1.size()<<endl;
    return 0;
}