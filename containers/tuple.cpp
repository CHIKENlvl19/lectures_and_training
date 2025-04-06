#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, float, bool> t(1, 1.1, true); // кортеж из трех элементов
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl; // вывод элементов кортежа по индексу
    
    printf("%s", get<2>(t) ? "true" : "false"); // вывод значения логического элемента
    cout << endl;

    cout << (get<2>(t) ? "true" : "false"); // можно и так

    auto tuple_auto = make_tuple(1, 1.1, true); // создание кортежа с помощью make_tuple
    get<0>(tuple_auto) = 10; // изменение значения элемента кортежа

    return 0;
}