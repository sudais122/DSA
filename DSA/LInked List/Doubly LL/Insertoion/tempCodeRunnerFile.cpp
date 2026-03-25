#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*pre;
    Node*next;
};
Node*head = nullptr;
void insertatspcific(int pos,int val){
    Node*newnode = new Node;

    newnode->data = val;
    newnode->next = nullptr;
    newnode->pre = nullptr;

    if (head == nullptr)
    {
        head = newnode;
        return;
    }

    Node*temp = head;

    if (pos == 1)
    {
        newnode->pre = nullptr;
        newnode->next = head;
        return;
    }
    
    for (int i = 0; i < pos-1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->pre = temp; //backword link

    if (temp->next != nullptr)
    {
        temp->next->pre =newnode;
    }
    temp->next = newnode;
}

void print(){
    Node*temp = head;

    while (temp != nullptr)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    
}
int main() {
    insertatspcific(1,34);
    insertatspcific(2,45);
    insertatspcific(3,43);
    insertatspcific(4,14);
    insertatspcific(3,3);
    print();
    return 0;
}