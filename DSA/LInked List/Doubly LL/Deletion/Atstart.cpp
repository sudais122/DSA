#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node*prev;
};

Node*head = nullptr;

void insetatstart(int val){
    Node*newnode = new Node;

    newnode->data = val;
    newnode->prev= nullptr;
    newnode->next = head;

    if (head != nullptr)
    {
       head->prev = newnode; //upate the pre 
    }
    head = newnode; //this means that we need this line of code in any case
}
void deleteAtstart(){
    if (head == nullptr)
    {
        cout << "DLL is Empty"<<endl;
    }
    Node*temp = new Node;

    head = head->next;
    delete temp;
    
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
    insetatstart(45);
    insetatstart(66);
    insetatstart(78);
    insetatstart(90);
    deleteAtstart();
    print();
    return 0;
}