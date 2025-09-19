#include <iostream>

using namespace std;

struct Node
{
    string person;
    Node* next;
};

struct ForwardList
{
    Node* head;
};

void AddNode(Node* ptr, string key){
    Node* newNode = new Node;
    newNode -> person = key;
    newNode -> next = ptr -> next; // передаем указатель на следующий элемент для вставки
    ptr -> next = newNode; // создаем связь с новым элементом
}

void createFL(ForwardList& fList, string keyBegin) {
    fList.head = new Node{keyBegin, nullptr};
}

/*void Delete(Node* ptr) {
    Node* deleteNode = ptr -> next;
    ptr -> next = deleteNode -> next;
    
    delete deleteNode;
}*/

void print(Node* fList){
    cout << "Happy friends" << endl;

    while (fList != nullptr)
    {
        cout << fList -> person << " ";
        fList = fList -> next;
    }
}

int main(){
    Node* ForwardList = new Node{"Losyash", nullptr};
    ForwardList -> next = new Node{"Sovunya", nullptr};
    ForwardList -> next = new Node{"Kopatich", nullptr};

    AddNode(ForwardList, "Pin");

    print(ForwardList);

    return 0;
}