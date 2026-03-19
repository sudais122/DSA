//how to insert at teh begin
//

#include<iostream>
using namespace std;

struct node{
    int data; 
    node * next;
};
node*head = NULL;

void insert(int val){
    node*newnode = new node;

    newnode->data = val;
    newnode->next = head;
    head = newnode;
}

void display(){
    node * temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
int main() {
    insert(23);
    insert(243);
    display();
    return 0;
}