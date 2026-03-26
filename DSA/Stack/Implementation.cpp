#include<iostream>
using namespace std;

int Stack[5],n=5,top = -1;

void push(int x){
    if (top == n-1)
    { 
        cout << "Stack is full";
    }
    else{
        top++;
        Stack [top] = x;
    }
}
void Display(){
    if (top>=0)
    {
        for (int i = top; i >=0; i--)
            cout << Stack[i] <<endl;
    }else{
        cout << "Stack is empty"<<endl;
    }
    
}
int main() {
    push(1);
    push(2);
    push(3);
    Display();
    return 0;
}