#include<iostream>
using namespace std;

struct node{
    int data; // creta a var that store the adress of a new varible
    node*next; // create the pointe of tehtype node that is user define datatype 
    //that store the adress of new node
};
node * head = NULL; // it is a pointer that point to teh adress of ist node

void insertatBegining(int val){
    node*newnode = new node; // we create a new node of name newndoe and 
    //type node that store the two thing
    
    newnode->data = val; //the data in newndnoe point the value that is stored
    newnode->next = nullptr; //we point it to the null b/c we have the only one element 
    head = newnode;// when we push the element int the begining then we set the
    //head alway to ist node which is new
};

void display(){
    node*temp = head; //every time loop run it reset the head value to the ist elemtn always
    while (temp != nullptr) //it run until the templ value is not null menas when the loop reach to last element
    //the last element always point to the null 
    {
        cout << temp->data<<" "; //it print the current value if the tempt variable
        temp = temp->next; //it move to the next node
    }
    
}
int main() {
    insertatBegining(10);
    display();
    return 0;
}