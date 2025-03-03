#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> set_1;

    set_1.insert(10);
    set_1.insert(20);
    set_1.emplace(30); // вставка без копирования

    for(int x : set_1){
        cout << x << " ";
    }
    
    if (set_1.find(10) != set_1.end()) {
        cout << "Элемент 10 найден" << endl;
    }

    cout << set_1.count(20) << endl; // 1 или 0 для set

    set_1.erase(10); // удаление по ключу

    set_1.erase( set_1.begin() ); // удаление первого элемента по итератору

    for(int x : set_1){ // итерация по set_1 и вывод всех элементов
        cout << x << " ";
    }

    cout << endl;

    // проверка на пустоту и размер

    if( !set_1.empty() ){
        cout << "Размер множества: " << set_1.size() << endl;
    }
    
    set_1.clear(); // удаление всех элементов

    for(int x : set_1){
        cout << x << " ";
    }


    return 0;
}