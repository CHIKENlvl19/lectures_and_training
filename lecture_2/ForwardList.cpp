#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node* next; // указатель на следующий элемент
};

struct ForwardList
{
    Node* head = nullptr;
};

void AddNode(Node* ptr, int key){
    Node* newNode = new Node{key, nullptr};
    newNode -> next = ptr -> next; // передаем указатель на следующий элемент для вставки
    ptr -> next = newNode; // создаем связь с новым элементом
}

void createFL(ForwardList& fList, int keyBegin) {
    fList.head = new Node{keyBegin, nullptr};
}

void Delete(Node* ptr) {
    if(!ptr || !ptr -> next)
    {
        return;
    }

    Node* deleteNode = ptr -> next;
    ptr -> next = deleteNode -> next;
    
    delete deleteNode;
}

void print(ForwardList&  fList) {
    Node* current = fList.head;

    while(current != nullptr)
    {
        cout << current -> key << " " << current << " ";
        current = current -> next;  
    }

    cout << "nullptr" << endl;
}

void clean(ForwardList& fList)  {
    
    while(fList.head)
    {
        Node* temp = fList.head;
        fList.head = fList.head -> next;

        delete temp;
    }

}

int main(){
    ForwardList list;
    createFL(list, 15);

    AddNode(list.head, 25);
    AddNode(list.head, 35);

    Delete(list.head);

    print(list);

    clean(list);

    print(list);

    return 0;
}