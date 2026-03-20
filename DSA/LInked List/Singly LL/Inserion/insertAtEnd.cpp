#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;
};
node*head = NULL;

void insertatend(int val){
    node*newnode = new node;

    newnode->data = val;
    newnode->next = nullptr; //b/c we insert the lasrt elemtn is alway te nullptr

    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    
    node*temp = head;
    while (temp->next !=nullptr)//this syntax is used to find th last node in the list we always write the temp->next
    {
        temp = temp->next; // it dont print teh last element in which it points to the nullptr
    }
    temp->next = newnode;  

}

void display(){
    node*temp = head;

    while (temp != nullptr) //in traversal we dont use the temp->next we only use the temp
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
int main() {
    insertatend(10);
    insertatend(14);
    insertatend(89);
    display();
    return 0;
}