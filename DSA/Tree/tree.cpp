#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};

Node* CreateNode(int val){
    Node*newNode = new Node;

    newNode->data = val;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
};

int main() {
    Node*root = CreateNode(6);

    root->left = CreateNode(67);
    root->right = CreateNode(8);
    return 0;
}