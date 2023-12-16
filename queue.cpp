#include<iostream>
using namespace std;

#define max 10

class Queue{
    int front;
    int back;
    int top;
    int arr[max];
    public:
    Queue()
    {
        front = -1;
        back = -1;
        top = -1;
    }

    void enqueue(int element);
    void dqueue();
    void peek();
    void empty();
    void display();
};

void Queue :: enqueue(int element)
{
    cout<<"element"<<element<<endl;
     if(back == -1)
     {
        
        arr[++back] = element;
        cout<<"back"<<back<<endl;
        front++;
        top++;
        return;
     }
     if(back <= max-1)
     {
        arr[++back] = element;
        cout<<"back"<<back<<endl;
        top++; 
     }
}

void Queue :: dqueue()
{
    if(back == -1)
    {
        cout<<"Queue is empty!!"<<endl;
        
        return;
    }
    else{
      front++;
    }
}

void Queue :: peek()
{
    cout<<"top index "<<top<<endl;
    cout<<"element at top in queue "<<arr[top]<<endl;
}

void Queue :: empty()
{
    if(top == -1)
    {
        cout<<"Queue is empty "<<endl;
        return;
    }
    else{
        cout<<"Queue is not Empty "<<endl;
    }
}

void Queue :: display()
{
    cout<<"[";
    for(int i = front;i<=back;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]";
}

int main()
{
    Queue q1;
    q1.enqueue(12);
    q1.display();
    q1.enqueue(18);
    q1.enqueue(20);
    q1.display();
    q1.dqueue();
    cout<<endl;
    q1.display();
    cout<<endl;
    q1.peek();
    q1.empty();
    q1.dqueue();
    q1.dqueue();
    q1.empty();
    q1.display();
    return 0;
}