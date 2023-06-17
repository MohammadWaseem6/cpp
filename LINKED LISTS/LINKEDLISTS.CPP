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
        this->next = nullptr;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    Node *node1 = new Node(10);
     cout << node1->data << endl;
    // cout << node1->next << endl;

    insertAtHead(head, 14);
    printList(head);

    return 0;
}
