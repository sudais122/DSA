#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};
Node*head = nullptr;

void InsertAtBegin(int val){
    Node*newnode = new Node;

    newnode->data = val;
    newnode->next = head;
    head = newnode;
};
void DeleteSpecific(int pos){
    if (head == nullptr)
    {
        cout << "Linked List is empty the nothing to delete"<<endl;
        return;
    }
    if (head->next == nullptr)
    { 
        delete head;
        head = nullptr; 
        return;
    }
    
    Node*temp = head;

    for (int i = 1; i < pos-1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    Node*next = temp->next->next;
    delete temp->next;
    temp->next = next;
}
void Print(){
    cout << "Link list elements are:" << " ";
    Node*temp = head;

    while (temp != nullptr)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
int main() {
    InsertAtBegin(1);
    InsertAtBegin(2);
    InsertAtBegin(3);
    InsertAtBegin(4);
    InsertAtBegin(5);
    DeleteSpecific(3);
    Print();
    return 0;
}