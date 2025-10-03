#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
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
    newNode -> left = nullptr;
    newNode -> right = nullptr;

    return newNode;
}


int main() {
    Node* root = CreateNode(15);
    root->left = CreateNode(6);
    root->left->left = CreateNode(3);
    root->left->right = CreateNode(7);
    

    return 0;
}