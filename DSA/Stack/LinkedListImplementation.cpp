#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};

Node*top = NULL;

//insert element in the function
void push(int x){
    Node*newnode = new Node;
    if (newnode == nullptr)
        cout << "Stack is full";

    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
//remove element functoin 
void pop(){
    if (top == nullptr) cout << "underflow condition"; return;
    
    Node*temp = top; // acess to the top node
    top = temp->next; // update the top node of the list 
    delete temp; // now delete the top element of the list

}
//show the ist element of the stack
int peek() {
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return -1;  
    }
    return top->data; 
}
void Display(){
    Node*temp = top;

    while (temp != nullptr)
    {
        cout << temp->data<<endl;
        temp = temp->next;
    }
    
}
int main() {
    push(10);
    push(20);
    push(30);
    push(140);
    push(50);
    Display();
    peek();
    return 0;
}