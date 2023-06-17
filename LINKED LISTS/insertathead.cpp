#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    { // constructorr
        data = d;
        next = NULL;
    }
};
void InsertatHead(Node *&head, int data)
{ // function
    Node *newNode = new Node(data);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{ // creating function traversing the linked list
    Node *temp = head;
    temp = temp->next;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node* head=node1();
    print(head);
    InsertatHead(head, 13);
}
