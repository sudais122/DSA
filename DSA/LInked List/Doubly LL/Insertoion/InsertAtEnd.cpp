#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*pre;
    Node*next;
};
Node*head = nullptr;

void inserttatend(int val){
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
    
    while (temp->next != nullptr)
    {
       temp = temp->next;
    }
    temp->next = newnode;
    newnode->pre = temp;
}

void print(){
    Node*temp = head;

    while (temp != nullptr)
    {
        cout << temp->data <<" " ;
        temp = temp->next;
    }
    

}
int main() {
    inserttatend(23);
    inserttatend(24);
    print();
    return 0;
}