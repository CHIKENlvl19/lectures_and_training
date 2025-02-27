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

    return 0;
}