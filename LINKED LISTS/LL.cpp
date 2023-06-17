#include<iostream>
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
void insertatend(int data){
	Node* n2 = new node(data);
	n2->next= head;
	head=n2;
}
int main(){
	cout<<insertatend;
	
	
	
}
