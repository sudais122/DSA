#include<iostream>
using namespace std;

int Queue[5],size = 5,rear = -1,front = -1;

int insert(int x){
    if (rear == size -1)
    {
        cout << "Queue is full";
    }else{
        rear++;
    } 
    return Queue[rear] = x;
}

void deleteelem(){
    if (front == -1)
    {
      cout << "Queue is Empty";  
    }else{
        cout << "Elment"<< Queue[front] <<"removed" <<endl;
        front++; 
    }
}

// int peek(){
//     if (front == -1)
//     cout << "queue is empty";
//     else
//     return Queue[front];
// }

void print(){
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i]<< " ";
    }
}
int main() {
    insert(20);
    insert(30);
    insert(40);
    deleteelem();
    print();
    return 0;
}