#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node* next; // укащатель на следующий элемент
};

struct ForwardList
{
    Node* head;
};

void AddNode(Node* ptr, int key){
    Node* newNode = new Node{key};
    // newNode -> key = key;
    newNode -> next = ptr -> next; // передаем указатель на следующий элемент для вставки
    ptr -> next = newNode; // создаем связь с новым элементом
}

void createFL(ForwardList& fList, int keyBegin) {
    fList.head = new Node{keyBegin, nullptr};
}

void Delete(Node* ptr) {
    Node* deleteNode = ptr -> next;
    ptr -> next = deleteNode -> next;
    
    delete deleteNode;
}

int main(){

    return 0;
}