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

void DelteEnd(){
    Node*temp = head;

    if (head == nullptr)
    {
        cout << "DLL is empty nothing to delete"<<endl;
    }
    
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    
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
    insetatstart(50);
    insetatstart(55);
    DelteEnd();
    print();
    return 0;
}