#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 3> arr_1 = {1, 2, 3};
    array<int, 2> arr_2; // массив будет заполнен нулями
    array arr_3 = {6, 7, 8, 9, 10}; // автоматически определит длину

    cout << arr_1[0] << endl; // вывод без проверки границ
    cout << arr_1.at(1) << endl; // вывод с проверкой границ
    cout << arr_1.front() << endl; // вывод первого элемента
    cout << arr_1.back() << endl; // вывод последнего элемента

    for(int i = 0; i < static_cast<int>( arr_3.size() ); ++i){ // вывод всех элементов
        cout << arr_3[i] << " ";
    }

    cout << endl;

    for (auto n : arr_3){ // вывод всех элементов, но компактнее
        cout << n << " ";
    }

    cout << endl;

    arr_2.fill(5); // заполнение массива значением 5
    for (auto n : arr_2){
        cout << n << " ";
    }

    cout << endl;

    array<int, 2> arr_4 = {6, 6};
    arr_4.swap(arr_2); // меняем местами массивы 4 и 2 (элементы массива 2 копируются в массив 4)
    for (auto n : arr_4){
        cout << n << " ";
    }

    

    return 0;
}