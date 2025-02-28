#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list_1; // пустой список
    list<int> list_2(3, 42); // 42 42 42
    list<int> list_3 = {1, 2, 3};

    // вставка - удаление

    auto it = list_3.begin(); 

    list_3.insert(it, 0); // важно - итератор it не инвалидуется, т.е. указывает на 1 в любом случае
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.erase(it); // удаляем элемент, на который указывает итератор it 
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.push_back(4);
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.push_front(-1);
    for (int n : list_3) cout << n << " ";
    cout << endl;

    // специфичные методы

    list_3.remove(0); // удаляет нули из списка
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.sort(); // сортирует список
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.reverse(); // реверс списка
    for (int n : list_3) cout << n << " ";
    cout << endl;
    

    return 0;
}