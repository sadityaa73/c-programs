#include<iostream>
using namespace std;

class Node{
    public:
      int val;
      Node *next;
    
    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

class List{
    private:
      Node *head;
    public:
      List()
      {
         head = nullptr;
      }
    void insert(int data);
    void display();  
};

void List :: insert(int data)
{
    Node *new_Node = new Node(data);
    Node *currentNode;

    if(head == nullptr)
    {
        head = new_Node;
        return;
    }
    else{
        currentNode = head;
        while(currentNode->next != nullptr)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = new_Node;
    }
};

void List :: display()
{
    Node *temp = head;
    cout<<"[";
    while(temp!=nullptr)
    {
        cout<<temp->val<<"->";
        if(temp->next == nullptr)
        {
            cout<<"NULL";
        }
        temp = temp->next;
    }
    cout<<"]";
};

int main()
{
    List l1;
    l1.insert(2);
    l1.insert(13);
    l1.insert(21);
    l1.insert(10);
    l1.display();
    return 0;
}