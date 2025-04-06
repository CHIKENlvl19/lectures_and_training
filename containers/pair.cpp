#include <iostream>
//#include <utility>

using namespace std;

int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << endl; // выводим первый член пары
    cout << p.second << endl; // выводим второй член пары

    p = make_pair(3, 4); // создаем пару с помощью make_pair
    cout << p.first << endl;
    cout << p.second << endl; 

    pair<int, int> a, b;
    a = {6, 7};
    b = a;
    cout << b.first << " " << b.second << endl;

    auto p_auto = pair<double, char>(3.14, 'P'); // можно создать пару и таким образом, с помощью присваивания переменной
    cout << p_auto.first << " " << p_auto.second << endl;

    cout << (p < a); // пары сравниваются лексикографически (сначала first, а затем second)

    return 0;
}