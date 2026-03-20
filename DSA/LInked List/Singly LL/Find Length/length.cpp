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
void Print(){
    cout << "Link list elements are:" << " ";
    Node*temp = head;
    
    while (temp != nullptr)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
void findLength(){
    int count =0 ;
    Node*temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    } 
    cout << "Length of List is: "<<count <<endl;
}
int main() {
    InsertAtBegin(1);
    InsertAtBegin(2);
    InsertAtBegin(3);
    InsertAtBegin(4);
    InsertAtBegin(5);
    findLength();
    Print();
    return 0;
}