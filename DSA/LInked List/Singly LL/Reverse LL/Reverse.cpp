#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};
Node*head = nullptr;

void insertatend(int val){
    Node*newnode = new Node;

    newnode->data = val;
    newnode->next = nullptr;

    if (head == nullptr)
    {
        head = newnode;
        return;
    }

    Node*temp = head;
    while (temp->next !=nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;  
};
void display(){
    Node*temp = head;

    while (temp != nullptr) 
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
};

void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;  // save next node
        curr->next = prev;  // reverse pointer
        prev = curr;        // move prev forward
        curr = next;        // move curr forward
    }

    head = prev;  // new head of revers ed list
}

int main() {
    insertatend(10);
    insertatend(15);
    insertatend(20);
    display();
    cout <<endl;
    reverse(head);
    display();
    return 0;
}