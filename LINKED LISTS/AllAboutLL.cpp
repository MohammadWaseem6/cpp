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
void inserthead2(int val){
    node* node2=new node();
    node2->data=data;
    node2->next=start2;
    start2=node2;
}

void display()
{
    node *temp = start;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}
 void merge()
int main()
{
    insertathead(10);
    insertathead(20);
    insertathead(30);
    insertathead(40);
    insertathead(50);
    insertathead(60);
    display();

    return 0;
}
