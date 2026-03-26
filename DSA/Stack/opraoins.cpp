#include<iostream>
using namespace std;

int Stack[6],n=8,top = -1;

void push(int x){
    if (top==n-1)
    {
        cout << "Stack is full"<<endl;
    }else
    {
        top++;
        Stack[top] = x;
    }
}
int peek(){
    return Stack[top];
}
void Pop(){
    if (top == -1)
    {
        cout << "Stack is empty"<<endl;
    }else
    {
        cout << "element is remove form teh stack" << Stack[top]<<endl;
        top--;
    }
    
}

void display(){
    if (top>=0)
    {
        for (int i = top; i >=0; i--)
        {
            cout << Stack[i]<<endl;
        }
    }else  cout <<"Stack is empty"<<endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    Pop();
    int c = peek();
    cout << "peek elemn is" << c<<endl;
    return 0;
}