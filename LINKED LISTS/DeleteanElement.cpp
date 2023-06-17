#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *start = NULL;
node* start2=NULL;
void insertathead(int data)
{
    node *node1 = new node();
    node1->data = data;
    node1->next = start;
    start = node1;
}

void display()
{
    node *temp = start;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

// void deleteNode(int value)
// {
//     if (start == NULL)
//     {
//         cout << "List is empty. No node to delete." << endl;
//         return;
//     }

//     node *temp = start;
//     node *prev = nullptr;

//     if (temp != nullptr && temp->data == value)
//     {
//         start = temp->next;
//         delete temp;
//         cout << "Node with value " << value << " deleted successfully." << endl;
//         return;
//     }

//     while (temp != nullptr && temp->data != value)
//     {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp != nullptr)
//     {
//         prev->next = temp->next;
//         delete temp;
//         cout << "Node with value " << value << " deleted successfully." << endl;
//     }
//     else
//     {
//         cout << "Node with value " << value << " not found." << endl;
//     }
// }

void reverse()
{
    if (start == nullptr || start->next == nullptr)
    {
        return;
    }
    else
    {
        node *prev = nullptr;
        node *current = start;
        node *successor = current->next;

        while (current != nullptr)
        {
            current->next = prev;
            prev = current;
            current = successor;
            if (successor != nullptr)
            {
                successor = successor->next;
            }
        }
        start = prev;
    }
}

int main()
{
    insertathead(2);
    insertathead(4);
    insertathead(6);
    insertathead(8);
    insertathead(10);
    cout << "Original Linked List:" << endl;
    display();

    // deleteNode(4);
    // cout << "Linked List after deleting node with value 4:" << endl;
    // display();

    reverse();
    cout << "Reversed Linked List:" << endl;
    display();

    return 0;
}
