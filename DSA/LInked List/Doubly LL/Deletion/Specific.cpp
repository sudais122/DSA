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

void deleterspecific(int pos){
    Node*temp = head;

    if (head == nullptr)
    {
        cout << "DLL is Empty" <<endl;
    }
    
    if (pos == 1)
    {
        delete head;
        head = temp->next;
        return;
    }
    
    for (int i = 1; i < pos-1 && head != nullptr; i++)
    {
        temp = temp->next; //1,2,3,4,5,6
    }
    delete temp;

}
void print(){
    Node*temp = head;

    while (temp != nullptr)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
int main() {
    insetatstart(45);
    print();
    return 0;
}