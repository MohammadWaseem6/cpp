#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

bool searchLinkedList(Node *head, int target)
{
    Node *current = head;

    while (current != nullptr)
    {
        if (current->data == target)
        {
            return true;
        }
        current = current->next;
    }

    return false;
}

void printLinkedList(Node *head)
{
    Node *current = head;

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

Node *findElement(Node *head, int key)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == key)
        {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int insertAtSpecifiedElement(Node *head, int key, int value)
{
    Node *ptr = findElement(head, key);
    if (ptr == nullptr)
    {
        cout << "Cannot find element." << endl;
        return 0;
    }
    else
    {
        Node *temp = new Node(value);
        temp->next = ptr->next;
        ptr->next = temp;
        return 1;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    int target = 3;

    cout << "Linked List: ";
    printLinkedList(head);

    if (searchLinkedList(head, target))
    {
        cout << target << " found in the linked list." << endl;
    }
    else
    {
        cout << target << " not found in the linked list." << endl;
    }

    int insertKey = 2;
    int insertValue = 10;

    if (insertAtSpecifiedElement(head, insertKey, insertValue))
    {
        cout << "Element " << insertValue << " inserted after " << insertKey << "." << endl;
    }

    cout << "Updated Linked List: ";
    printLinkedList(head);

    return 0;
}
