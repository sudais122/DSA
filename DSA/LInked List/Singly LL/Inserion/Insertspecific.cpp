#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;
};
Node*head = nullptr;
void insertatspecidic(int pos,int elem){
    Node*newnode = new Node;

    newnode->data = elem;
    newnode->next = nullptr;

    
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    

    Node*temp = head;
        
    for (int i = 1; i < pos-1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    
    if (temp == nullptr)
    {
        cout << "Invalid Position\n";
        return;
    }
    newnode->next = temp->next; //in this we link the newndoe to the nexr coming node temp is the node that poinst to the pos just befor the 
    //position we want insert element so temp->next means the next of teh temp 
    temp->next = newnode; //here we link the newnode to the pre node
};

void display(){
    Node*temp = head;
    while (temp !=nullptr)
    {
        cout << temp->data << " "; 
        temp = temp->next;
    }
}

int main() {
    insertatspecidic(1,12);
    insertatspecidic(1,34);
    display();
    return 0;
}