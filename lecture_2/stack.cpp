#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* next;
};

struct Stack {
    Node* head;
};

void createStack(Stack* stackk) {
    stackk -> head = nullptr;
}

Node* CreateNode(int key) {
    Node* newNode = new Node;
    newNode -> key = key;
    newNode -> next = nullptr;

    return newNode;
}

void push(Stack* st, int data) {
    Node* newNode = CreateNode(data);
    newNode -> next = st -> head;
    st -> head = newNode;
}

int main() {
    
}