#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value) {
    Node* node1 = new Node();
    node1->data = value;
    node1->next = NULL;
    
    if (top == NULL) {
        top = node1;
    } else {
        node1->next = top;
        top = node1;
    }
}

int pop() {
    if (top == NULL) {
        cout << "Stack is Empty" << endl;
        return -1;
    } else {
        Node* ptr = top;
        top = top->next;
        int data = ptr->data;
        delete ptr;
        return data;
    }
}

void display() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    } else {
        Node* ptr = top;
        while (ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    
    return 0;
}
