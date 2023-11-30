#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class linkedlist
{
private:
    Node *head;

public:
    linkedlist()
    {
        head = nullptr;
    }

    void push(int element);
    void pop();
    void insertAtMid(int midCounter, int element);
    void display(int &midCounter);
};

void linkedlist ::push(int element)
{
    Node *newNode = new Node(element);
    Node *currentNode;
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        currentNode = head;
        while (currentNode->next != nullptr)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

void linkedlist ::display(int &midCounter)
{
    midCounter = 0;
    if (head == NULL)
    {
        cout << "Head is Empty!!";
        return;
    }
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        if (temp->next == nullptr)
            cout << "NULL";
        temp = temp->next;
        midCounter++;
    }
    cout << endl;
}

void linkedlist ::pop()
{
    if (head == NULL)
    {
        cout << "Head is Empty!!";
        return;
    }
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return;
    }
    Node *currentnode = head;
    while (currentnode->next->next != nullptr)
    {
        currentnode = currentnode->next;
    }
    delete currentnode->next;
    currentnode->next = nullptr;
}

void linkedlist ::insertAtMid(int midCounter, int element)
{

    Node *currentNode = head;
    Node *nextNode;
    int start = 0, end = midCounter, mid, counter = 0;
    mid = (start + end) / 2;
    while (currentNode != nullptr)
    {
        counter++;
        nextNode = currentNode->next;
        if (mid == counter)
        {
            Node *newNode = new Node(element);
            currentNode->next = newNode;
            currentNode->next->next = nextNode;
        }
        currentNode = currentNode->next;
    }
}

int main()
{
    int midCounter = 0;
    linkedlist newList;
    newList.push(10);
    newList.push(20);
    newList.push(30);
    newList.display(midCounter);
    cout << "counter" << midCounter;
    cout << endl;
    newList.insertAtMid(midCounter, 15);
    newList.display(midCounter);
    newList.insertAtMid(midCounter, 50);
    newList.display(midCounter);
    return 0;
}