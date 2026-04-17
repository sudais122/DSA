#include<iostream>
using namespace std;

int Size =5;
int front = -1,rear = -1;
int Queue[5];

void circulr(int x){
    if(front == -1 && rear == -1){
        front = rear = 0;
        Queue[rear] = x;
    }else if((rear +1)%Size == front)
    {
        cout << "Queue is full" <<endl;
    }else{
        rear = (rear+1) %Size;
        Queue[rear] = x;
    }
}
int insert(int x){
    if (rear == Size -1)
    {
        cout << "Queue is full";
    }else{
        rear++;
    } 
    return Queue[rear] = x;
}

void print(){
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i]<< " ";
    }
}
int main() {
    insert(5);
    insert(4);
    print();
    return 0;
}