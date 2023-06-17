#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = tail->next;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // insertAtTail(tail, 20);
    // insertAtTail(tail, 30);
    // insertAtTail(tail, 40);
    // insertAtTail(tail, 50);
    // print(head);
    // insertAtTail(tail, 20);
     insAtHead(head, 40);
    insAtHead(head, 50);
    insAtHead(head, 20);
   
    print(head);

    return 0;
}
