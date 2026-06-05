#include<iostream>
using namespace std;

int queues[10],size = 10,front = -1,rear = -1, PQS[10];
bool isfull(){
    return rear == size -1;
}
bool isempty(){
    return front == -1;
}

void enqueue(int element,int PQ){
    if (isfull())
    {
        cout << "Queue is full" <<endl;
    }
    if (isempty())
    {
        rear = front = 0;
        queues[rear] = element;
        PQS[rear] = PQ;
        return;
    }

    int i = rear;
    while (i >= front && PQS[i] < i)
    {
        queues[i+1] = queues[i];
        PQS[i+1] = PQS[i];
        i--;
    }
    queues[i+1] = element;
    PQS[i+1] = PQ;
}

void dequeue(){
    if (isempty())
    {
        cout <<"queue is empty"<<endl;
        return;
    }
    front++;
}

int peek(){
    if (isempty())
    {
        return -1;
    }
    cout << queues[front] <<endl;
}

void display(){
    for (int i = front; i <= rear; i++)
    {
        cout << queues[i] <<endl;
    }  
}

int main() {

    return 0;
}