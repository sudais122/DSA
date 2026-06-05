#include<iostream>
using namespace std;

int size = 10;
int queues[10]; int fornt = -1,rear = -1;

bool isfull() {return rear ==size-1;}
bool isempty(){return fornt == -1;}

void enqueue(int element){
    if (isfull())
    {
        cout << "Overflow condition"<<endl;
        return;
    }
    if (isempty())
    {
        rear = 0,fornt = 0;
    }else{
        rear++;
    }
        queues[rear] = element;
        cout << "Element" << element <<" insterted";
    
}

void dequeue(){
    if (isempty())
    {
        cout << "queue is empty";
        return;
    }
    cout << queues[fornt] <<"Deleted"<<endl;
    fornt++;
}

int peek(){
    if (isempty())
    {
        cout <<"empty";
        return;
    }
    
    return queues[fornt];
}

//insert at front
void insertatfront(int eleme){
    if (fornt == 0)
    {
        cout << "can not insert at front" <<endl;
        return;
    }

    if (isempty())
    {
        rear = fornt = 0;
    }else{
        fornt--;
    }
    queues[fornt] = eleme;
    cout << eleme << "Inserted at front" <<endl;
}

void deleteatend(){
    if (isempty())
    {
        cout << "Empty"<<endl;
        return;
    }

    cout<< queues[rear] <<"Deleted at rear"<<endl;

    if (fornt == rear)
    {
        rear = fornt = -1;
    }else{
        rear--;
    }
}

void display(){
    for (int i = fornt; i <= rear; i++)
    {
        cout <<queues[i]<<""<<endl;
    }
}
int main() {
    
    return 0;
}