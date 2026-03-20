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
void DeletatBegin(){
    
    if (head == nullptr)
    {
        cout << "Linked List is empty the nothing to delete"<<endl;
    }
    Node*temp = head;
    
    head = head->next;
    delete temp;

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
    DeletatBegin();
    Print();
    return 0;
}